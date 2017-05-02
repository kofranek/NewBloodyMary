package {
	import flash.display.MovieClip;
	
	public class BloodyMary extends MovieClip {
		public function BloodyMary() {
			// constructor code
		}

		function HbFromGramDlToMmolL(Hbg: Number): Number {
			//"recalculation of hemoglobin concentration form g/dl to mmol/l"
			// input Hbg "concentration of hemoglobin in g/dl";
			// output Real ctHb "concentration of hemoglobin concentration in mmol/l";
			var ctHb: Number = Hbg / 1.6114;
			return ctHb;
		}

		function aFrom(pH: Number, pCO2: Number, MetHb: Number, HbF: Number, cDPG: Number): Number {
			//input Real pH;
			//input Real pCO2;
			//input Real MetHb;
			//input Real HbF;
			//input Real cDPG;
			//output Real returnValue;
			var dadpH = -0.88;
			var dadlnpCO2 = 0.048;
			var dadxMetHb = -0.7;
			var dadxHbF = -0.25;
			var dadcDPG0 = 0.3;
			var pH0 = 7.40;
			var pCO20 = 5.33;
			var dadcDPGxHbF = -0.1;
			var cDPG0 = 5.0;
			var returnValue: Number = dadpH * (pH - pH0) + dadlnpCO2 * Math.log(pCO2 / pCO20) + dadxMetHb * MetHb + dadxHbF * HbF + (dadcDPG0 + dadcDPGxHbF * HbF) * (cDPG / cDPG0 - 1.0);
			return returnValue;
			//end aFrom;
		}

		function sCO(FCOHb: Number, FMetHb: Number): Number {
			//input Real FCOHb;
			//input Real FMetHb;
			//output Real returnValue;
			var xFCOHb: Number;
			var returnValue: Number;
			if (FCOHb < 0) {
				xFCOHb = 0;
			} else {
				xFCOHb = FCOHb;
			}
			returnValue = xFCOHb / (1.0 - FMetHb);
			return returnValue;
			// end sCO;			
		}

		function antilogit(x: Number): Number {
			// input Real x;
			return Math.exp(x) / (1.0 + Math.exp(x));
			//end antilogit;
		}

		function logit(x: Number): Number {
			//input Real x;;
			return Math.log(x / (1 - x));
			//end logit;			
		}

		function h(a: Number): Number {
			//input Real a;
			var h0: Number = 3.5;
			return h0 + a;
			//end h;			
		}

		function X(pO2CO: Number, a: Number, T: Number): Number {
			//input Real pO2CO;
			//input Real a;
			//input Real T;
			//output Real returnValue; 
			var p0: Number = 7.0;
			var T0: Number = 37.0;
			var dbdT: Number = 0.055;
			return Math.log(pO2CO / p0) - a - dbdT * (T - T0);
			//end x;			
		}

		function tanh(x: Number): Number {
			return (1 - Math.exp(-2 * x)) / (1 + Math.exp(-2 * x));
		}

		function dydx(pO2CO: Number, a: Number, T: Number): Number {
			//input Real pO2CO;
			//input Real a;
			//input Real T;
			//output Real returnValue;
			var k: Number = 0.5342857;
			var returnValue: Number;
			//returnValue: = 1 + h(a) * k * (1 - (tanh(k * x(pO2CO, a, T))) ^ 2);
			returnValue = 1 + h(a) * k * (1 - Math.pow((tanh(k * X(pO2CO, a, T))), 2));
			return returnValue;
			//end dydx;		
		}

		function Y(pO2CO: Number, a: Number, T: Number): Number {
			//input Real pO2CO;
			//input Real a;
			//input Real T;
			//output Real returnValue;

			var y0: Number = 1.8747;
			var k: Number = 0.5342857;
			var returnValue: Number = y0 + X(pO2CO, a, T) + h(a) * tanh(k * X(pO2CO, a, T));
			return returnValue;
			//end y;		
		}



		function sO2CO(pO2CO: Number, a: Number, T: Number): Number {
			//input Real pO2CO;
			//input Real a;
			//input Real T;
			//output Real returnValue;
			var returnValue: Number = antilogit(Y(pO2CO, a, T));
			return returnValue;
			//end sO2CO;			
		}

		function MpCOof(pO2CO: Number, a: Number, T: Number, FCOHb: Number, FMetHb: Number): Number {
			//input Real pO2CO;
			//input Real a;
			//input Real T;
			//input Real FCOHb;
			//input Real FMetHb;
			//output Real returnValue;
			var returnValue: Number = (pO2CO / sO2CO(pO2CO, a, T)) * sCO(FCOHb, FMetHb);
			return returnValue;
			//end MpCOof;			
		}

		function pO2fr(sO2: Number, a: Number, T: Number, FCOHb: Number, FMetHb: Number): Number {
			//input Real sO2;
			//input Real a;
			//input Real T;
			//input Real FCOHb;
			//input Real FMetHb;
			//output Real returnValue; 
			var pO2CO: Number;
			var sO2CO: Number;
			var ym: Number;
			var yc: Number;
			var dydxc: Number;
			var p0: Number = 7.0;
			var dbdT: Number = 0.055;
			var T0: Number = 37;
			var doit: Boolean;
			var Epsilon: Number = 0.000001;
			pO2CO = Math.exp(Math.log(p0) + a + dbdT * (T - T0));
			sO2CO = sO2 + sCO(FCOHb, FMetHb) * (1 - sO2);
			ym = logit(sO2CO);
			doit = false;
			while (!doit) {
				yc = Y(pO2CO, a, T);
				dydxc = dydx(pO2CO, a, T);
				pO2CO = Math.exp(Math.log(pO2CO) + (ym - yc) / dydxc);
				doit = (Math.abs(ym - yc) < Epsilon);
				//end while;	  
			}
			var returnValue: Number = pO2CO - MpCOof(pO2CO, a, T, FCOHb, FMetHb);
			return returnValue;
			//end pO2fr;
		}

		function sO2fr(pO2CO: Number, a: Number, T: Number, FCOHb: Number, FMetHb: Number): Number {
			//input Real pO2CO;
			//input Real a;
			//input Real T;
			//input Real FCOHb;
			//input Real FMetHb;
			//output Real returnValue;

			var sO2COc: Number;
			var sCOc: Number;
			sO2COc = sO2CO(pO2CO, a, T);
			sCOc = sCO(FCOHb, FMetHb);
			var returnValue: Number = (sO2COc - sCOc) / (1 - sCOc);
			return returnValue;
			//end sO2fr;			
		}

		function sO2of(pO2T: Number, pHT: Number, pCO2T: Number, cDPG: Number, FCOHb: Number, FMetHb: Number, FHbF: Number, TPt: Number): Number {
			//"calculation of oxygen hemoglobin saturation"
			//input Real pO2T "Po2 at given temperature in kPa";
			//input Real pHT "pH at given temperature";
			//input Real pCO2T "pCO2 at given temperature in kPa";
			//input Real cDPG "2'3 DPG koncentration in mmol/l";
			//input Real FCOHb "substance fraction of carboxyhemoglobin";
			//input Real FMetHb "substance fraction of hemiglobin";
			//input Real FHbF "substance fraction of fetal hemoglobin";
			//input Real TPt "temperature in°C";
			//output Real returnValue "oxygen hemoglobin saturation";

			var MpCOa: Number;
			var MpCOb: Number;
			var sCOc: Number;
			var doit: Boolean;
			var a: Number;
			var Epsilon: Number = 0.000001;

			a = aFrom(pHT, pCO2T, FMetHb, FHbF, cDPG);
			sCOc = sCO(FCOHb, FMetHb);
			if (sCOc > 0) {
				MpCOa = pO2fr(sCOc, a, TPt, 0, FMetHb);
			} else {
				MpCOa = 0;
			}
			MpCOb = MpCOa;
			doit = false;
			while (!doit) {
				MpCOb = 0.6 * MpCOa + 0.4 * MpCOb;
				MpCOa = MpCOof(pO2T + MpCOb, a, TPt, FCOHb, FMetHb);
				doit = (Math.abs(MpCOa - MpCOb) < Epsilon);
			}
			var returnValue: Number = sO2fr(pO2T + MpCOa, a, TPt, FCOHb, FMetHb);
			return returnValue
			//end sO2of;			
		}

		function aO2(temp: Number) {
			//input Real temp;
			// output Real returnValue;
			//returnValue := exp(log(0.0105) - 0.0115*(temp - 37.0) + 0.5*0.00042*(temp - 37.0)^2);
			var returnValue: Number = Math.exp(Math.log(0.0105) - 0.0115 * (temp - 37.0) + 0.5 * 0.00042 * Math.pow((temp - 37.0), 2));
			return returnValue;
			//end aO2;

		}

		function dissO2(pO2: Number, temp: Number): Number {
			//"concentration of dissolved oxygen in blood"
			//input Real pO2;
			//input Real temp;
			//output Real returnValue "dissolved blood oxygen in mmol/l";

			var returnValue: Number = aO2(temp) * pO2;
			return returnValue;
			//end dissO2;			
		}

		function ceHbof(ctHb: Number, FCOHb: Number, FMetHb: Number): Number {
			//"effective hemoglobin concentration in mmol/l"
			//input Real ctHb "concentration of hemoglobin in mmol/l";
			//input Real FCOHb "substance fraction of carboxyhemoglobin";
			//input Real FMetHb "substance fraction of hemoglobin";
			//output Real returnValue "effective contentration of hemoglobin";

			var returnValue: Number = ctHb * (1 - FCOHb - FMetHb);
			return returnValue;
			//end ceHbof;	
		}

		function O2total(ctHb: Number, pO2: Number, pHp: Number, pCO2: Number, cDPG: Number, FCOHb: Number, FMetHb: Number, FHbF: Number, temp: Number): Object {
			//"Calculation of concentration of total oxygen"
			//input Real ctHb "conentration of hemoglobin in mmol/l";
			//input Real pO2 "pO2 at givent temperature in kPa";
			//input Real pHp "pH in plasma at given temperature";
			//input Real pCO2 "pCO2 at given temperature in kPa";
			//input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
			//input Real FCOHb "substance fraction of carboxyhemoglobin";
			//input Real FMetHb "substance fraction of hemiglobin";
			//input Real FHbF "substance fraction of fetal hemogobin";
			//input Real temp "temperature in °C";
			//output Real ctO2 "concentration of total blood oxygen concentration in mmol/l";
			//output Real sO2t "oxygen saturation of hemoglobin at given temperature";
			//output Real dissO2t "koncentration of dissolved oxygen in blood in mmol/l";
			//output Real ceHb "effective hemoglobin concentration in mmol/l";
			var ctO2: Number;
			var sO2t: Number;
			var dissO2t: Number;
			var ceHb: Number;
			sO2t = sO2of(pO2, pHp, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
			ceHb = ceHbof(ctHb, FCOHb, FMetHb);
			dissO2t = dissO2(pO2, temp);
			ctO2 = dissO2t + sO2t * ceHb;
			var returnValue: Object = new Object();
			returnValue.ctO2 = ctO2;
			returnValue.sO2t = sO2t;
			returnValue.dissO2t = dissO2t;
			returnValue.ceHb = ceHb;
			return returnValue;
			//end O2total;
		}

		function O2totalSI(ctHb: Number, pO2: Number, pHp: Number, pCO2: Number, cDPG: Number, FCOHb: Number, FMetHb: Number, FHbF: Number, temp: Number): Object {
			//"Calculation of concentration of total oxygen"
			//input Real ctHb "conentration of hemoglobin in mmol/l";
			//input Real pO2 "pO2 at givent temperature in Pa";
			//input Real pHp "pH in plasma at given temperature";
			//input Real pCO2 "pCO2 at given temperature in Pa";
			//input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
			//input Real FCOHb "substance fraction of carboxyhemoglobin";
			//input Real FMetHb "substance fraction of hemiglobin";
			//input Real FHbF "substance fraction of fetal hemogobin";
			//input Real temp "temperature in Â°K";
			//output Real ctO2 "concentration of total blood oxygen concentration in mmol/l";
			//output Real sO2t "oxygen saturation of hemoglobin at given temperature";
			//output Real dissO2t "koncentration of dissolved oxygen in blood in mmol/l";
			//output Real ceHb "effective hemoglobin concentration in mmol/l";
			var ctO2: Number;
			var sO2t: Number;
			var dissO2t: Number;
			var ceHb: Number;
			sO2t = sO2of(pO2 / 1000, pHp, pCO2 / 1000, cDPG, FCOHb, FMetHb, FHbF, temp - 273.15);
			ceHb = ceHbof(ctHb, FCOHb, FMetHb);
			dissO2t = dissO2(pO2 / 1000, temp - 273.15);
			ctO2 = dissO2t + sO2t * ceHb;
			var returnValue: Object = new Object();
			returnValue.ctO2 = ctO2;
			returnValue.sO2t = sO2t;
			returnValue.dissO2t = dissO2t;
			returnValue.ceHb = ceHb;
			return returnValue;
			//end O2totalSI;
		}

		function lg(x: Number): Number {
			//input Real x;
			//output Real result;

			var result: Number = (Math.log(x)) / Math.log(10); //iin Modelica it is not necessary, in Modelica exists embeded function log10
			return result;
			//end lg;
		}

		function antilg(x: Number): Number {
			//input Real x;
			//output Real result;
			var result: Number = Math.exp(Math.log(10) * x);
			return result;
			//end antilg;	
		}

		function aCO2of(T: Number): Number {
			//input Real T;
			//output Real result;

			var aCO2T0: Number = 0.23; //mM/kPa
			var dlgaCO2dT: Number = -0.0092; // lg(mM/kPa)/K
			var T0: Number = 37;

			var result: Number = aCO2T0 * antilg(dlgaCO2dT * (T - T0));
			return result;
			//end aCO2of;			
		}

		function pKof(T: Number): Number {
			//input Real T;
			//output Real result;

			var pKT0: Number = 6.1;
			var dpKdT: Number = -0.0026;
			var T0: Number = 37;

			var result: Number = pKT0 + dpKdT * (T - T0);
			return result;
			//end pKof;
		}

		function ctCO2Pof(pH: Number, pCO2: Number, T: Number): Number {
			//input Real pH;
			//input Real pCO2;
			//input Real T;
			//output Real result;
			var result: Number = pCO2 * aCO2of(T) * (1 + antilg(pH - pKof(T)));
			return result;
			//end ctCO2Pof;		
		}

		function cHCO3of(pH:Number, pCO2: Number, T: Number): Number {
			//"calculation of plasma bicarbonate concentration"
			//input Real pH "plasma pH at given temperature in mmol/l";
			//input Real pCO2 "pCO2 in kPa";
			//input Real T "temperature in Â°C";
			//output Real HCO3p "plasma bicarbonate concentration in mmol/l";

			var HCO3p: Number = pCO2 * aCO2of(T) * antilg(pH - pKof(T));
			return HCO3p;
			//end cHCO3of;	
		}

		function pCO22of(pCO21: Number, T1: Number, T2: Number, cHb: Number, cAlb: Number, pH1: Number): Number {
			//input Real pCO21;
			//input Real T1;
			//input Real T2;
			//input Real cHb;
			//input Real cAlb;
			//input Real pH1;
			//output Real result;

			var betaX: Number;
			var dpHdT1: Number;
			var pH2: Number;
			var cHCO3: Number;
			var dlgpCO2dT1: Number;
			var pCO22: Number;
			var dpHdT2: Number;
			var dlgpCO2dT2: Number;
			var dpHdTmean: Number;
			var dlgpCO2dTmean: Number;
			var cAlbN: Number = 0.66;

			betaX = 7.7 + 8 * (cAlb - cAlbN) + 2.3 * cHb;

			dpHdT1 = (-0.0026 -
				betaX * 0.016 * (1 / (2.3 * cHCO3of(pH1, pCO21, T1)) +
					1 / (2.3 * pCO21 * aCO2of(T1)))) / (1 +
				betaX * (1 / (2.3 * cHCO3of(pH1, pCO21, T1)) +
					1 / (2.3 * pCO21 * aCO2of(T1))));
			pH2 = pH1 + dpHdT1 * (T2 - T1);

			cHCO3 = cHCO3of(pH1, pCO21, T1);
			dlgpCO2dT1 = -0.0026 - (-0.0092) - dpHdT1 + (1 / (2.3 * cHCO3)) * (betaX * dpHdT1 + betaX * 0.016);
			pCO22 = antilg(lg(pCO21) + dlgpCO2dT1 * (T2 - T1));

			dpHdT2 = (-0.0026 -
				betaX * 0.016 * (1 / (2.3 * cHCO3of(pH2, pCO22, T2)) +
					1 / (2.3 * pCO22 * aCO2of(T2)))) / (1 +
				betaX * (1 / (2.3 * cHCO3of(pH2, pCO22, T2)) +
					1 / (2.3 * pCO22 * aCO2of(T2))));
			dpHdTmean = (dpHdT1 + dpHdT2) / 2;
			pH2 = pH1 + dpHdTmean * (T2 - T1);

			cHCO3 = cHCO3of(pH2, pCO22, T2);
			dlgpCO2dT2 = -0.0026 - (-0.0092) -
				dpHdT2 + (1 / (2.3 * cHCO3)) * (betaX * dpHdT2 + betaX * 0.016);
			dlgpCO2dTmean = (dlgpCO2dT1 + dlgpCO2dT2) / 2;

			var result: Number = antilg(lg(pCO21) + dlgpCO2dTmean * (T2 - T1));
			return result;
			//end pCO22of;	
		}


		function pH2of(pH1: Number, T1: Number, T2: Number, cHb: Number, cAlb: Number, pCO21: Number): Number {
			//input Real pH1;
			//input Real T1;
			//input Real T2;
			//input Real cHb;
			//input Real cAlb;
			//input Real pCO21;
			//output Real result;
			var betaX: Number;
			var dpHdT1: Number;
			var pH2: Number;
			var cHCO3: Number;
			var dlgpCO2dT1: Number;
			var pCO22: Number;
			var dpHdT2: Number;
			var dpHdTmean: Number;
			var cAlbN: Number = 0.66;

			betaX = 7.7 + 8 * (cAlb - cAlbN) + 2.3 * cHb;
			dpHdT1 = (-0.0026 -
				betaX * 0.016 * (1 / (2.3 * cHCO3of(pH1, pCO21, T1)) +
					1 / (2.3 * pCO21 * aCO2of(T1)))) / (1 +
				betaX * (1 / (2.3 * cHCO3of(pH1, pCO21, T1)) +
					1 / (2.3 * pCO21 * aCO2of(T1))));
			pH2 = pH1 + dpHdT1 * (T2 - T1);

			cHCO3 = cHCO3of(pH1, pCO21, T1);
			dlgpCO2dT1 = -0.0026 - (-0.0092) -
				dpHdT1 + (1 / (2.3 * cHCO3)) * (betaX * dpHdT1 + betaX * 0.016);
			pCO22 = antilg(lg(pCO21) + dlgpCO2dT1 * (T2 - T1));

			dpHdT2 = (-0.0026 -
				betaX * 0.016 * (1 / (2.3 * cHCO3of(pH2, pCO22, T2)) +
					1 / (2.3 * pCO22 * aCO2of(T2)))) / (1 +
				betaX * (1 / (2.3 * cHCO3of(pH2, pCO22, T2)) +
					1 / (2.3 * pCO22 * aCO2of(T2))));
			dpHdTmean = (dpHdT1 + dpHdT2) / 2;
			var result: Number = pH1 + dpHdTmean * (T2 - T1);
			return result;

			//end pH2of;	
		}

		function ctCO2Bof(pH: Number, pCO2: Number, T: Number, ctHb: Number, sO2: Number): Number {
			//"Calculation of blood total CO2 concentration"
			//input Real pH "plasma pH at given temperature";
			//input Real pCO2 "pCO2 at given temperatura in kPa";
			//input Real T "temperature in°C";
			//input Real ctHb "Hemoglobin concentration in mmol/l";
			//input Real sO2 "O2 hemoglobin saturation";
			//output Real ctCO2B "Total blood CO2 concetratoin in mmol/l";

			var dpHEdpHP: Number = 0.77;
			var dpHEdsO2: Number = 0.035;
			var pHEx: Number = 7.84;
			var sO2x: Number = 0.06;
			var aCO2E0: Number = 0.195;
			var ctHbE: Number = 21;
			var pHE0: Number = 7.19;
			var pKE0: Number = 6.125;
			var pHT0: Number;
			var pCO2T0: Number;
			var pKE: Number;
			var pHE: Number;
			var ctCO2E: Number;
			var phiEB: Number;
			var T0: Number = 37;
			var cAlbN: Number = 0.66;
			var cAlb: Number;
			var pH0: Number = 7.40;

			// pCO2T0 := pCO22of (pCO2, T, T0, ctHb);
			cAlb = cAlbN; // albumin has minimal influence on total CO2 concentration
			pCO2T0 = pCO22of(pCO2, T, T0, ctHb, cAlb, pH);
			// pHT0 := pH2of (pH, T, T0, ctHb);
			pHT0 = pH2of(pH, T, T0, ctHb, cAlb, pCO2);
			pHE = pHE0 + dpHEdpHP * (pHT0 - pH0) + dpHEdsO2 * (1 - sO2);
			//or : (pHE - 6.9) = alpha*(pHP - pH0), where alpha = 0.7 + f*(1 - sO2)
			pKE = pKE0 - lg(1 + antilg(pHE - pHEx - sO2x * sO2));
			ctCO2E = aCO2E0 * pCO2T0 * (1 + antilg(pHE - pKE));
			phiEB = ctHb / ctHbE; // !! !! it is hematokrit!!!!!!!
			var ctCO2B: Number = ctCO2E * phiEB + ctCO2Pof(pHT0, pCO2T0, T0) * (1 - phiEB);
			return ctCO2B;
			//end ctCO2Bof;	
		}


		function CO2totalSI(pH: Number, pCO2: Number, T: Number, ctHb: Number, sO2: Number): Object {
			"Calculation of blood total CO2 concentration"
			//input Real pH "plasma pH at given temperature";
			//input Real pCO2 "pCO2 at given temperatura in Pa";
			//input Real T "temperature in °C";
			//input Real ctHb "Hemoglobin concentration in mmol/l";
			//input Real sO2 "O2 hemoglobin saturation";
			//output Real ctCO2B "Total blood CO2 concetratoin in mmol/l";
			//output Real cHCO3 "plasma concentration of bicarbonate in mmol/l";
			//output Real dCO2 "dissolved CO2 concentration in plasma";

			var ctCO2B: Number; //output
			var cHCO3: Number; //output
			var dCO2: Number; //output

			var dpHEdpHP: Number = 0.77;
			var dpHEdsO2: Number = 0.035;
			var pHEx: Number = 7.84;
			var sO2x: Number = 0.06;
			var aCO2E0: Number = 0.195;
			var ctHbE: Number = 21;
			var pHE0: Number = 7.19;
			var pKE0: Number = 6.125;
			var pHT0: Number;
			var pCO2T0: Number;
			var pKE: Number;
			var pHE: Number;
			var ctCO2E: Number;
			var phiEB: Number;
			var T0: Number = 37;
			var cAlbN: Number = 0.66;
			var cAlb: Number;
			var pH0: Number = 7.40;
			var aCO2: Number;
			var tCO2p: Number;

			//algorithm
			// pCO2T0 := pCO22of (pCO2, T, T0, ctHb);
			cAlb = cAlbN; // albumin has minimal influence on total CO2 concentration
			pCO2T0 = pCO22of(pCO2 / 1000, T - 273.15, T0, ctHb, cAlb, pH);
			// pHT0 := pH2of (pH, T, T0, ctHb);
			pHT0 = pH2of(pH, T - 273.15, T0, ctHb, cAlb, pCO2);
			pHE = pHE0 + dpHEdpHP * (pHT0 - pH0) + dpHEdsO2 * (1 - sO2);
			//or : (pHE - 6.9) = alpha*(pHP - pH0), where alpha = 0.7 + f*(1 - sO2)
			pKE = pKE0 - lg(1 + antilg(pHE - pHEx - sO2x * sO2));
			ctCO2E = aCO2E0 * pCO2T0 * (1 + antilg(pHE - pKE));
			phiEB = ctHb / ctHbE; // !! !! it is hematokrit!!!!!!!
			//tCO2p := pCO2T0 * aCO2of(T0)*(1 + antilg(pHT0-pKof(T0)));
			aCO2 = aCO2of(T0);
			cHCO3 = aCO2 * pCO2T0 * antilg(pHT0 - pKof(T0));
			dCO2 = aCO2 * pCO2T0;
			ctCO2B = ctCO2E * phiEB + (dCO2 + cHCO3) * (1 - phiEB);
			//ctCO2B :=  ctCO2E*phiEB + ctCO2Pof( pHT0, pCO2T0, T0)*(1 - phiEB);
			//ctCO2B :=  ctCO2E*phiEB + tCO2p*(1 - phiEB);
			var returnValue: Object = new Object();
			returnValue.ctCO2B = ctCO2B;
			returnValue.cHCO3 = cHCO3;
			returnValue.dCO2 = dCO2
			return returnValue;
			//end CO2totalSI;
		}

		function cBaseOf(pH: Number, pCO2: Number, cHb: Number, T: Number, cAlb: Number): Number {
			//"Van Slyke equation"
			//input Real pH;
			//input Real pCO2;
			//input Real cHb;
			//input Real T;
			//input Real cAlb;
			//output Real result_cBEox;

			var cAlbN: Number = 0.66;
			var T0: Number = 37;
			var ctHbb: Number = 43.0;
			var betaHb: Number = 2.3;
			var betaP: Number = 7.7;
			var pH0: Number = 7.40;
			var pCO20: Number = 5.33;
			var pHT0: Number;
			var pCO2T0: Number;
			var result_cBEox: Number; //output			

			//pCO2T0 := pCO22of(pCO2, T, T0, ctHb);
			pCO2T0 = pCO22of(pCO2, T, T0, cHb, cAlb, pH);
			//pHT0   := pH2of(pH, T, T0, ctHb);
			pHT0 = pH2of(pH, T, T0, cHb, cAlb, pCO2);

			result_cBEox = (1 - cHb / ctHbb) * (cHCO3of(pHT0, pCO2T0, T0) - cHCO3of(pH0, pCO20, T0) + (betaHb * cHb + betaP + 8 * (cAlb - cAlbN)) * (pHT0 - pH0));
			return result_cBEox;
			//end cBaseOf;
		}

		function pHfr(pCO2: Number, cBEox: Number, cHb: Number, T: Number, cAlb: Number): Number {
			"Conversion to 37 C, calculation, conversion to T"
			//input Real pCO2;
			//input Real cBEox;
			//input Real cHb;
			//input Real T;
			//input Real cAlb;
			//output Real result_pH;

			var result_pH: Number; //output			
			var pCO237: Number;
			var pH37Guess: Number = 7.4;
			var cBEoxGuess: Number;
			var pH0: Number = 7.4;
			var T0: Number = 37;
			var cAlbN: Number = 0.66;
			var betaHb: Number = 7.7;
			var betaP: Number = 2.3;
			var ctHbb: Number = 43.0;
			var doit: Boolean;
			var epsilon: Number = 0.000001;

			//pCO237:=pCO22of(pCO2, T, T0, cHb);
			pCO237 = pCO22of(pCO2, T, T0, cHb, cAlb, pH37Guess);

			cBEoxGuess = cBaseOf(pH37Guess, pCO237, cHb, T0, cAlb);
			// Newton Raphson: We know cBase as a function of pH at constant pCO2,
			//   but cannot express pH as a function of cBase}
			doit = false;
			while (!doit) {
				pH37Guess = pH37Guess + (cBEox - cBEoxGuess) / ((1 - cHb / ctHbb) *
					(betaP + 8 * (cAlb - cAlbN) + betaHb * cHb) + Math.log(10.0) * cHCO3of(pH37Guess, pCO237, T0));
				cBEoxGuess = cBaseOf(pH37Guess, pCO237, cHb, T0, cAlb);
				doit = Math.abs(cBEox - cBEoxGuess) < epsilon;
				//end while;   
			}
			//Result:= pH2of(pH37Guess, T0, T, cHb);
			result_pH = pH2of(pH37Guess, T0, T, cHb, cAlb, pCO237);
			return result_pH;
			//end pHfr;
		}

		function cBaseEcfOf(pH: Number, pCO2: Number, cHb: Number, T: Number, cAlb: Number): Number {
			//"Van Slyke equation"
			//input Real pH "pH at given temperature";
			//input Real pCO2 "pCO2 at given temperature in kPa";
			//input Real cHb "hemoglobin concentration in mmol/l";
			//input Real T "temperature in °C";
			//input Real cAlb "concentration of albumin in mmol/l";
			//output Real result_cBEcf "Extracellular fluid BE - mmo/l";

			var result_cBEcf: Number; //output		
			var cAlbN: Number = 0.66;
			var T0: Number = 37;
			var ctHbb: Number = 43.0;
			var betaHb: Number = 2.3;
			var betaP: Number = 7.7;
			var pH0: Number = 7.40;
			var pCO20: Number = 5.33;
			var fVBtoVEcf: Number = 0.33;
			var cHbEcf: Number;
			var pHT0: Number;
			var pCO2T0: Number;

			cHbEcf = cHb * fVBtoVEcf;
			//pCO2T0 := pCO22of(pCO2, T, T0, ctHb);
			pCO2T0 = pCO22of(pCO2, T, T0, cHbEcf, cAlb, pH);
			//pHT0   := pH2of(pH, T, T0, ctHb);
			pHT0 = pH2of(pH, T, T0, cHbEcf, cAlb, pCO2);
			result_cBEcf = (1 - cHbEcf / ctHbb) * (cHCO3of(pHT0, pCO2T0, T0) - cHCO3of(pH0, pCO20, T0) + (betaHb * cHb + betaP + 8 * (cAlb - cAlbN)) * (pHT0 - pH0));
			return result_cBEcf;
			//end cBaseEcfOf;
		}

		function cBEoxOf(pH: Number, pCO2: Number, cHb: Number, T: Number, cAlb: Number, cPi: Number, sO2: Number): Number {
			//"Van Slyke equation"
			//input Real pH "pH at given temperature";
			//input Real pCO2 "pCO2 in kPA at given temperature";
			//input Real cHb "hemoglobin concentration in mmol/l";
			//input Real T "temperature in °C";
			//input Real cAlb "albumin concentration in mmol/l";
			//input Real cPi "phosphate concentration in mmol/l";
			//input Real sO2 "O2 hemoglobin saturation (as fraction)";
			//output Real result_cBEox "BE on virtually fully oxygenated blood in mmol/l";
			var result_cBEox: Number; //output
			var cAlbN: Number = 0.66;
			var T0: Number = 37;
			var ctHbb: Number = 43.0;
			var betaHb: Number = 2.3;
			var betaP: Number = 7.7;
			var pH0: Number = 7.40;
			var pCO20: Number = 5.33;
			var cPiN: Number = 1.15;
			var pHT0: Number;
			var pCO2T0: Number;

			//pCO2T0 := pCO22of(pCO2, T, T0, ctHb);
			pCO2T0 = pCO22of(pCO2, T, T0, cHb, cAlb, pH);
			//pHT0   := pH2of(pH, T, T0, ctHb);
			pHT0 = pH2of(pH, T, T0, cHb, cAlb, pCO2);
			result_cBEox = (1 - cHb / ctHbb) * (cHCO3of(pHT0, pCO2T0, T0) - cHCO3of(pH0, pCO20, T0) + (betaHb * cHb + betaP + 8 * (cAlb - cAlbN) + 0.309 * (cPi - cPiN)) * (pHT0 - pH0)) - 0.2 * cHb * (1 - sO2);
			return result_cBEox;
			//end cBEoxOf;	
		}

		function BEINVof(BEox: Number, pCO2: Number, cHb: Number, cAlb: Number, cPi: Number, sO2: Number, temp: Number): Number {
			//input Real BEox "Base excess in virtually oxygenated blood in mmol/l";
			//input Real pCO2 "pCO2 in kPa";
			//input Real cHb "hemoglobin concentration in mmol/l";
			//input Real cAlb "albumin concentration in plasma in mmol/l";
			//input Real cPi "plasma phosphate concentration in mmol/l";
			//input Real sO2 "O2 hemoglobin saturation";
			//input Real temp "temperature in °C";
			//output Real pH "plasma pH";

			var pH: Number; //output
			var epsilon: Number = 0.000001;
			var pHx: Number = 7.4;
			var xBEox: Number;
			var dBEox: Number;
			var dpH: Number;
			var pHlow: Number = 0;
			var pHhigh: Number = 0;
			var pHmean: Number;
			var done: Boolean = false;
			//algorithm
			dpH = 0.1;
			while (!done) {
				//loop
				xBEox = cBEoxOf(pHx, pCO2, cHb, temp, cAlb, cPi, sO2);
				dBEox = BEox - xBEox;
				if (dBEox > 0) {
					pHlow = pHx;
					pHx = pHx + dpH;
				} else {
					pHhigh = pHx;
					pHx = pHx - dpH;
				}
				//end if;
				done = ((pHlow != 0) && (pHhigh != 0));
				//end while;	  
			}
			
			trace ("pHlow="+pHlow+" pHhigh="+pHhigh);

			while (Math.abs(pHhigh - pHlow) > epsilon) {
				//loop
				pHmean = (pHlow + pHhigh) / 2;
				if ((BEox - cBEoxOf(pHlow, pCO2, cHb, temp, cAlb, cPi, sO2)) *
					(BEox - cBEoxOf(pHmean, pCO2, cHb, temp, cAlb, cPi, sO2)) > 0) {
					pHlow = pHmean;
				} else {
					pHhigh = pHmean;
				}
				//end if;
				//end while;  
			}
			pH = (pHlow + pHhigh) / 2;
			return pH;
			//end BEINVof;
		}

		public function testBEINVof(): void {
			var pH: Number = 7.2;
			var newpH: Number;
			var BEox: Number;
			var newBEox: Number;
			var pCO2: Number = 8.33;
			var cHb: Number = 8.5;
			var cAlb: Number = 0.66;
			var cPi: Number = 1.15;
			var sO2: Number = 0.5;
			var temp: Number = 37;

			BEox = cBEoxOf(pH, pCO2, cHb, temp, cAlb, cPi, sO2);
			trace("pH=" + pH + " BEox =" + BEox);
			newpH = BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
			
			trace("newpH=" + newpH + " BEox =" + BEox);
			
			/*
			newBEox = cBEoxOf(newpH, pCO2, cHb, temp, cAlb, cPi, sO2);
			trace("newpH=" + newpH + " newBEox =" + newBEox);
			*/
			//end testBEINVof;
		}


	}
}