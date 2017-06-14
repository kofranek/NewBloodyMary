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


		function ctO2Bof(ctHb: Number, pO2: Number, pHp: Number, pCO2: Number, cDPG: Number,
			FCOHb: Number, FMetHb: Number, FHbF: Number, temp: Number): Number {
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

			var sO2t: Number; //"oxygen saturation of hemoglobin at given temperature";
			var dissO2t: Number; //"koncentration of dissolved oxygen in blood in mmol/l";
			var ceHb: Number; //"effective hemoglobin concentration in mmol/l";
			var ctO2: Number //"concentration of total blood oxygen concentration in mmol/l";

			sO2t = sO2of(pO2, pHp, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
			ceHb = ceHbof(ctHb, FCOHb, FMetHb);

			dissO2t = dissO2(pO2, temp);
			ctO2 = dissO2t + sO2t * ceHb;
			return ctO2;
			//end ctO2Bof;
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
			returnValue.sO2 = sO2t;
			returnValue.dissO2 = dissO2t;
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
			returnValue.sO2 = sO2t;
			returnValue.dissO2 = dissO2t;
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

		function cHCO3of(pH: Number, pCO2: Number, T: Number): Number {
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

		function PO2PCO2of(pO2: Number, pCO2: Number, BEox: Number, cHb: Number, cAlb: Number, cPi: Number,
			cDPG: Number, FCOHb: Number, FMetHb: Number, FHbF: Number, temp: Number): Object {
			//input Real pO2 "pO2 in kPa";
			//input Real pCO2 "pCO2 in kPa";
			//input Real BEox "Base Excess in virtually oxyganated blood in mmol/l";
			//input Real cHb "conentration of hemoglobin in mmol/l";
			//input Real cAlb "albumin consntration in plasma in mmol/l";
			//input Real cPi "phospahate concentration in plasma in mmol/l";
			//input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
			//input Real FCOHb "substance fraction of carboxyhemoglobin";
			//input Real FMetHb "substance fraction of hemiglobin";
			//input Real FHbF "substance fraction of fetal hemogobin";
			//input Real temp "temperature in °C";
			//output Real ctO2 "blood total O2 concantration in mmol/l";
			//output Real ctCO2 "blood total CO2 concentration in mmol/l";
			//output Real pH "plasma pH";
			//output Real sO2 "O2 hemoglobin saturation";
			var returnValue: Object = new Object();
			var ctO2: Number;
			var ctCO2: Number;
			var pH: Number;
			var sO2: Number;
			var EpsSO2: Number = 0.000001;
			var Sx: Number;
			var done: Boolean;
			var ceHb: Number;
			var dissO2t: Number;

			sO2 = 1;
			done = false;

			while (!done) {
				//loop
				Sx = sO2;
				pH = BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
				sO2 = sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
				done = Math.abs(sO2 - Sx) < EpsSO2;
				//end while;
			}

			ceHb = ceHbof(cHb, FCOHb, FMetHb);
			dissO2t = dissO2(pO2, temp);
			ctO2 = dissO2t + sO2 * ceHb;
			ctCO2 = ctCO2Bof(pH, pCO2, temp, cHb, sO2);

			returnValue.ctO2 = ctO2;
			returnValue.ctCO2 = ctCO2;
			returnValue.pH = pH;
			returnValue.sO2 = sO2;
			return returnValue;
			//end PO2PCO2of;		
		}




		function O2CO2of(tO2: Number, tCO2: Number, BEox: Number, cHb: Number, cAlb: Number,
			cPi: Number, cDPG: Number, FCOHb: Number, FMetHb: Number, FHbF: Number, temp: Number): Object {
			//input Real tO2 "blood total O2 concantration in mmol/l";
			//input Real tCO2 "blood total CO2 concentration in mmol/l";
			//input Real BEox "Base Excess in virtually oxyganated blood in mmol/l";
			//input Real cHb "conentration of hemoglobin in mmol/l";
			//input Real cAlb "albumin consntration in plasma in mmol/l";
			//input Real cPi "phospahate concentration in plasma in mmol/l";
			//input Real cDPG "concentration of 2,3 diphosphoglycerate in mmol/l";
			//input Real FCOHb "substance fraction of carboxyhemoglobin";
			//input Real FMetHb "substance fraction of hemiglobin";
			//input Real FHbF "substance fraction of fetal hemogobin";
			//input Real temp "temperature in °C";
			//output Real pO2 "pO2 in kPa";
			//output Real pCO2 "pCO2 in kPa";
			//output Real pH "plasma pH";
			//output Real sO2 "O2 hemoglobin saturation";
			var returnValue: Object = new Object();
			var pO2: Number;
			var pCO2: Number;
			var pH: Number;
			var sO2: Number;
			var epsPO2: Number = 0.000001;
			var epsPCO2: Number = 0.000001;
			var DPO2: Number;
			var AO2: Number;
			var CO2: Number;
			var O2: Number;
			var DCO2: Number;
			var DO2: Number;
			var DPCO2: Number;
			var pCO2mean: Number;
			var pCO2low: Number;
			var pCO2high: Number;
			var DCO2low: Number;
			var DCO2mean: Number;
			var pO2mean: Number;
			var pO2low: Number;
			var pO2high: Number;
			var DO2low: Number;
			var DO2mean: Number;

			//algorithm 
			//initialisation
			pCO2 = 5.33;
			pO2 = 13.3;
			sO2 = 0.9591382375911204;

			DPO2 = 2;
			//main iteration loop
			while (Math.abs(DPO2) > epsPO2) {
				//loop
				//pCO2 iteration calculation
				AO2 = pO2;

				//iteration of pCO2 and pH
				pH = BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
				CO2 = ctCO2Bof(pH, pCO2, temp, cHb, sO2);
				DCO2 = tCO2 - CO2;
				DPCO2 = 1;
				if (DCO2 > 0) {
					pCO2low = pCO2;
					while (DCO2 > 0) {
						pCO2 = pCO2 + DPCO2;
						pH = BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
						CO2 = ctCO2Bof(pH, pCO2, temp, cHb, sO2);
						DCO2 = tCO2 - CO2;
					}
					pCO2high = pCO2;
				} else {
					pCO2high = pCO2;
					while (DCO2 < 0) {
						pCO2 = pCO2 - DPCO2;
						if (pCO2 < 0)(pCO2 = 0.0001);
						pH = BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
						CO2 = ctCO2Bof(pH, pCO2, temp, cHb, sO2);
						DCO2 = tCO2 - CO2;
					};
					pCO2low = pCO2;
				};
				while (Math.abs(pCO2high - pCO2low) > epsPCO2) {
					pCO2mean = (pCO2low + pCO2high) / 2;
					pH = BEINVof(BEox, pCO2low, cHb, cAlb, cPi, sO2, temp);
					CO2 = ctCO2Bof(pH, pCO2low, temp, cHb, sO2);
					DCO2low = tCO2 - CO2;
					pH = BEINVof(BEox, pCO2mean, cHb, cAlb, cPi, sO2, temp);
					CO2 = ctCO2Bof(pH, pCO2mean, temp, cHb, sO2);
					DCO2mean = tCO2 - CO2;
					if (DCO2low * DCO2mean > 0) {
						pCO2low = pCO2mean;
					} else {
						pCO2high = pCO2mean;
					}
				}
				pCO2 = (pCO2low + pCO2high) / 2

				//iteration of PO2 and SO2


				sO2 = sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
				O2 = ctO2Bof(cHb, pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
				DO2 = tO2 - O2;
				if (DO2 > 0) {
					pO2low = pO2;
					while (DO2 > 0) {
						pO2 = pO2 + DPO2;
						sO2 = sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
						O2 = ctO2Bof(cHb, pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
						DO2 = tO2 - O2;
					}
					//end while;
					pO2high = pO2;
				} else {
					pO2high = pO2;
					while (DO2 < 0) {
						pO2 = pO2 - DPO2;
						if (pO2 < 0.001) {
							pO2 = 0.001;
						}
						//end if;
						sO2 = sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
						O2 = ctO2Bof(cHb, pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
						DO2 = tO2 - O2;
					}
					//end while;
					pO2low = pO2;
				}
				//end if;
				while (Math.abs(pO2high - pO2low) > epsPO2) {
					pO2mean = (pO2low + pO2high) / 2;
					sO2 = sO2of(pO2low, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
					O2 = ctO2Bof(cHb, pO2low, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
					DO2low = tO2 - O2;
					sO2 = sO2of(pO2mean, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
					O2 = ctO2Bof(cHb, pO2mean, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
					DO2mean = tO2 - O2;
					if (DO2low * DO2mean > 0) {
						pO2low = pO2mean;

					} else {
						pO2high = pO2mean;
					}
				}
				pO2 = (pO2high + pO2high) / 2;
				sO2 = sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);


				//connection of pCO2 and pO2 iteration loops
				DPO2 = Math.abs(pO2 - AO2);
			}
			//end while;
			returnValue.pCO2 = pCO2;
			returnValue.pO2 = pO2;
			returnValue.pH = pH;
			returnValue.sO2 = sO2;
			return returnValue;
			//end O2CO2of;
		}

		function VaporPressureSI(T: Number): Number {
			//input T:temperature in Kelvin
			//output vapor presssure in Pa
			return pH2Oof(T - 273.15) * 133.32239;
			/*
			if (T < 273.15) {
				return 0
			} else {
				if (T > 373.15) {
					return 101325
				} else {
					return (101325 / 760) * Math.exp(18.6686 - (4030.183 / (T - 273.15 + 235)))
				}

			}
			*/
		}


		function pH2Oof(temp: Number): Number {
			//input temp - temperature in °c
			//output vapor pressure in mmHg
			if (temp < 0) {
				return 0
			} else {
				if (temp > 100) {
					return 760
				} else {
					return Math.exp(18.6686 - (4030.183 / (temp + 235)))
				}

			}
		}


		function BTPS_to_STPD(PB: Number, temp: Number): Number {
			//calculatiou of conversion coefficient volume from BTPS to STPD
			//input PB - barometric pressure in mmHg	
			//temp - temperature in °C	
			//output from BTPS to STPD conversion coefficient	
			// STPD_volume = BTPS_volume * BTPS_to_STPD(PB,temp)
			//(P*V)/T = (760*V_STPD)/273.15 = (PB-pH2O)*V_BTPS/(273.15+temp)	
			//V_STPD = V_BTPS * (PB-pH2O)*273.15/(760*(273.15+temp)= V_BTPS * BTPS_to_STPD(PB,temp)	
			var pH2O: Number;
			pH2O = pH2Oof(temp);
			return (PB - pH2O) * 273.15 / (760 * (273.15 + temp));
		}

		function ATPS_to_BTPS(PB: Number, tempEnv: Number, tempBody): Number {
			//calculatiou of conversion coefficient volume from ATPS to BTPS
			//input PB - barometric pressure in mmHg	
			//tempEnv - environment temperature in °C	
			//tempBody - body temperature in °C
			//output from ATPS to BTPS conversion coefficient	
			// BTPS_volume = ATPS_volume * ATPS_to_BTPS(PB,tempEnv,tempBody)
			//(P*V)/T = (PB-pH2OEnv)*V_ATPS/(273.15+tempEnv) = (PB-pH2OBody)*V_BTPS/(273.15+tempBody)
			//V_BTPS = V_ATPS * (PB-pH2OEnv)*(273.15+tempBody)/((PB-pH2OBody)*(273.15+trmpEnv) = V_ATPS * ATPS_to_BTPS(PB,tempEnv,tempBody)	
			var pH2OEnv: Number;
			var pH2OBody: Number;
			pH2OEnv = pH2Oof(tempEnv);
			pH2OBody = pH2Oof(tempBody);
			return (PB - pH2OEnv) * (273.15 + tempBody) / ((PB - pH2OBody) * (273.15 + tempEnv));
		}


		function AlvEquil(VAi: Number, FiO2: Number, FiCO2: Number, temp: Number, PB: Number, Q: Number, CvO2: Number, CvCO2: Number, BEox: Number,
			Hb: Number, cAlb: Number, cPi: Number, cDPG: Number, FCOHb: Number, FMetHb: Number, FHbF: Number): Object {
			//input VAiBTPS alveolar ventilation in l BTPS/min;
			//input FiO2 fraction concentration of O2 in dry nspired gas
			//input FiCO2 fraction concentationo of CO2 in dry inspired gas
			//temp body temperature in °C
			//PB barometric pressure
			//input Q blood perfusion
			//input CvO2 total concentration of oxygen in inflowing venous blood in l/min
			//input CaO2 total concentration of carbon dioxide in inflowinf venous blood in l/min
			//input BEox base excess in virtually fully oxygenated blood in mmol/l
			//input Hb - hemoglobin concentration in mmol/l
			// input cAlb - plasma albumin concentration in mmol/l
			// input cPi plasma phosphate concentration in mmol/l
			// cDPG 2,3 DPG - concentration in mmol/l
			//input FCOHb - "substance fraction of carboxyhemoglobin";
			//input FMetHb - "substance fraction of hemiglobin";
			//input FHbF - "substance fraction of fetal hemogobin";
			// output VA - expired alveolar ventilation in l/min
			// output VO2 - rate of oxygen comsumption [mmol/min]
			// output VCO2  - rate of carbon dioxide production [mmol/min]
			// output CpcO2  - O2 content in end pulmonary capillary blood [l STPD/l of blood]
			// output CpcCO2 - CO2 content in pulmonary capillary blood [l STPD/l of blood]
			// output PAO2  - alveolar pO2 [kPa]
			// output PACO2 - alveolar PCO2 [kPA]
			// output PpcO2 in end pulmonary capillary blood [kPa]
			// output PpcCO2 - pCO2 in end pulmonary capillary blood  PCO2 [kPA]
			// output SO2pc - oxyhemoglobin saturation in end pulmonary capillary blood [ratio form 0 to 1]
			// output pHpc  - pH in end pulmonary capillary blood 
			// output HCO3pc - actual bicarbonate concentration in end pulmonary capillary blood [mmol/l]


			var resultValue: Object = new Object;

			var VO2: Number; // rate of oxygen comsumption [l STPD/min]
			var VCO2: Number; // rate of carbon dioxide production [l STPD/min]
			var CpcO2: Number; //O2 content in end pulmonary capillary blood [l STPD/l of blood]
			var CpcCO2: Number; // CO2 content in pulmonary capillary blood [l STPD/l of blood]
			var VA: Number; //expired alveolar ventilation in l/min
			var HCO3pc: Number // actual bicarbonate concentration in end pulmonary capillary blood [mmol/l]
			var PAO2: Number; //alveolar partial pressure of O2 (in kPa)
			var PACO2: Number; //alveoral partial pressure of CO2 (in kPa)
			var PpcO2: Number; //PCO2 in en pulmonary capillary blood (in kPA)
			var PpcCO2: Number; //CO2 in en pulmonary capillary blood (in kPa)
			var FAO2: Number; //fraction concentration of O2 in alveoli;
			var FACO2: Number; //fraction concentration of CO2 in alveoli;

			var cx1: Number;
			var done: Boolean;
			var doneCO2: Boolean;
			var doneO2: Boolean;
			var kBTPS_to_STPD: Number;
			var inflowCO2: Number; //inflow CO2 in alveolo-cappillary unit in mmol/min
			var inflowO2: Number; //inflow CO2 in alveolo-cappillary unit in mmol/min
			var outflowCO2: Number; //outflow CO2 in alveolo-capllary unit in mmol/min
			var outflowO2: Number; //outflow CO2 in alveolo-cappillary unit in mmol/min
			var ViCO2: Number; //inflow CO2 in alveoli in l STPD/min
			var ViO2: Number; ////inflow O2 in alveoli in l STPD/min
			var VeCO2: Number; // outflow CO2 from alveoli in l STPD/min
			var VeO2: Number; //outflow O2 from alveoli in lSTPD/min
			var VCO2_STPD: Number; //CO2 excretion rate in l STPD/min
			var VO2_STPD: Number; //O2 consuption rate in l STPD/min
			var PACO2max: Number;
			var PACO2min: Number;
			var PAO2max: Number;
			var PAO2min: Number;



			var PAO2old: Number;
			var dPCO2: Number = 2;
			var dPO2: Number = 2;

			var EpsCO2: Number;
			var EpsO2: Number;
			var EpsP = 0.000001;

			var pHpc: Number;
			var sO2pc: Number;
			var obj: Object;


			// algorithm
			//initialisation
			EpsCO2 = 0.000001;
			EpsO2 = 0.000001;
			PAO2min = 0;
			PACO2min = 0;
			PAO2max = 260;
			PACO2max = 260;



			cx1 = (PB - pH2Oof(temp)) * 0.133322368; //cx1 = PB - pH2O_BTPS
			kBTPS_to_STPD = BTPS_to_STPD(PB, temp);

			if (Q == 0) { //shunt blood flow
				VO2 = 0;
				VCO2 = 0;
				PAO2 = FiO2 * cx1; //cx1 = PB - pH2O_BTPS
				PACO2 = FiCO2 * cx1; //cx1 = PB - pH2O_BTPS
				CpcO2 = CvO2;
				CpcCO2 = CvCO2;
				VA = VAi;
				obj = O2CO2of(CpcO2, CpcCO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
				sO2pc = obj.sO2;
				PpcO2 = obj.pO2;
				PpcCO2 = obj.pCO2;
				pHpc = obj.pH;

			} else { //iteration calculation of pAO2 and pACO2
				//init
				PAO2 = 13.99;
				PACO2 = 5.33;
				kBTPS_to_STPD = BTPS_to_STPD(PB, temp);
				ViO2 = FiO2 * VAi * kBTPS_to_STPD; //l STPD/min
				ViCO2 = FiCO2 * VAi * kBTPS_to_STPD; //l STPD/min
				inflowCO2 = ViCO2 / 0.022414 + CvCO2 * Q; //in mmol/min
				inflowO2 = ViO2 / 0.022414 + CvO2 * Q; //in mmol,/min
				done = false;
				PAO2old = 0;
				//main iteration loop of PACO2 and PAO2;											
				while (!done) {
					doneCO2 = false;
				
					while (!doneCO2) {
						obj = PO2PCO2of(PAO2, PACO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
						CpcCO2 = obj.ctCO2;
						CpcO2 = obj.ctO2;
						pHpc = obj.pH;
						sO2pc = obj.sO2;
						VCO2 = (CvCO2 - CpcCO2) * Q; // in mmol min
						VO2 = (CpcO2 - CvO2) * Q; //in mmol/min
						VCO2_STPD = VCO2 * 0.022414; //l STPD
						VO2_STPD = VO2 * 0.022414; //l STPD
						VA = VAi + (VCO2_STPD - VO2_STPD) / kBTPS_to_STPD; //VA in l BTPS
						if (VA < 0) {
							VA = 0.0;
						}
						FACO2 = PACO2 / cx1; // cx1=PB-PH2O_BTPS
						VeCO2 = VA * FACO2 * kBTPS_to_STPD; // l/min STPD
						outflowCO2 = VeCO2 / 0.022414 + CpcCO2 * Q; //in mmol/min
						doneCO2 = (Math.abs(inflowCO2 - outflowCO2) < EpsCO2);
						if (!doneCO2) {
							if (outflowCO2 > inflowCO2) {
								PACO2max = PACO2;
							} else {
								PACO2min = PACO2;
							}
							PACO2 = (PACO2max + PACO2min) / 2;
						} //end if not doneCO2
					} // end while not DoneCO2 

					FAO2 = PAO2 / cx1; // cx1=PB-PH2O_BTPS
					outflowO2 = FAO2 * VA * kBTPS_to_STPD / 0.022414 + CpcO2 * Q; //in mmol/min
					doneO2 = (Math.abs(outflowO2 - inflowO2) < EpsO2);
					if (doneO2) {
						done = true; //all is done
					} else {
						if (outflowO2 > inflowO2) {
							PAO2max = PAO2;
						} else {
							PAO2min = PAO2;
						}
						PAO2 = (PAO2max + PAO2min) / 2;
						doneO2 = false;
						// iteration of PAO2
						while (!doneO2) {
							obj = PO2PCO2of(PAO2, PACO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
							CpcO2 = obj.ctO2;
							CpcCO2 = obj.ctCO2;
							CpcO2 = obj.ctO2;
							pHpc = obj.pH;
							sO2pc = obj.sO2;
							VCO2 = (CvCO2 - CpcCO2) * Q; // in mmol min
							VO2 = (CpcO2 - CvO2) * Q; //in mmol/min
							VCO2_STPD = VCO2 * 0.022414
							VO2_STPD = VO2 * 0.022414;
							//trace("VO2_STPD =" + VO2_STPD + " l/min");
							VA = VAi + (VCO2_STPD - VO2_STPD) / kBTPS_to_STPD; //VA in l BTPS
							if (VA < 0) {
								VA = 0.0;
							}
							FAO2 = PAO2 / cx1; // cx1=PB-PH2O_BTPS
							VeO2 = FAO2 * VA * kBTPS_to_STPD //l stpd/min
							outflowO2 = VeO2 / 0.022414 + CpcO2 * Q; //in mmol/min
							doneO2 = (Math.abs(outflowO2 - inflowO2) < EpsO2);
							if (!doneO2) {
								if (outflowO2 > inflowO2) {
									PAO2max = PAO2;
								} else {
									PAO2min = PAO2;
								}
								PAO2 = (PAO2max + PAO2min) / 2;
							}
						} //end while not doneO2
					} //end else
					if (!done) {
						PAO2old = PAO2;
						PAO2min = PAO2 - dPO2;
						if (PAO2min < 0) {
							PAO2min = 0;
						}
						PACO2min = PACO2 - dPO2;
						if (PACO2min < 0) {
							PACO2min = 0;
						}
						PACO2max = PACO2 + dPCO2;
						PAO2max = PAO2 + dPO2;
					} //end if
				} //end while


			} //end else
			//iteration of PAO2 and PACO2 done
			HCO3pc = cHCO3of(pHpc, PACO2, temp);
			PpcO2 = PAO2;
			PpcCO2 = PACO2;
			resultValue.VA = VA; //expired alveolar ventilation in l/min
			resultValue.VO2 = VO2; //rate of oxygen comsumption [mmol/min]
			resultValue.VCO2 = VCO2; //rate of carbon dioxide production [mmol/min]
			resultValue.CpcO2 = CpcO2; //O2 content in end pulmonary capillary blood [l STPD/l of blood]
			resultValue.CpcCO2 = CpcCO2; //CO2 content in pulmonary capillary blood [l STPD/l of blood]
			resultValue.PAO2 = PAO2; // alveolar pO2 [kPa]
			resultValue.PACO2 = PACO2; // alveolar PCO2 [kPA]
			resultValue.PpcO2 = PpcO2; //  pO2 in end pulmonary capillary blood [kPa]
			resultValue.PpcCO2 = PpcCO2; // pCO2 in end pulmonary capillary blood  PCO2 [kPA]
			resultValue.sO2pc = sO2pc; //oxyhemoglobin saturation in end pulmonary capillary blood [ratio form 0 to 1]
			resultValue.pHpc = pHpc; // pH in end pulmonary capillary blood 
			resultValue.HCO3pc = HCO3pc; // actual bicarbonate concentration in end pulmonary capillary blood [mmol/l]

			return resultValue;
		}; // end function ALVEQUIL

		
	    function AlveolarGases(VAi_BTPS:Number, FiO2:Number, FiCO2:Number, temp:Number, PB:Number, VO2:Number, VCO2:Number):Object{
			// "Calculation of partial pressures of O2 and CO2"
			//input Real VAi_BTPS "inspired alveolar ventilation in l BTPS/min";
			//input Real FiO2 "fraction concentration of O2 in dry inspired gas";
			//input Real FiCO2 "fraction concentationo of CO2 in dry inspired gas";
			//input Real temp "°core body temperature in °C";
			//input Real PB "barometric pressure";
			//input Real VO2 "rate of oxygen comsumption [mmol/min]";
			//input Real VCO2 "rate of carbon dioxide production [mmol/min]";
			//output Real PAO2 "alveolar pO2 [kPa]";
			//output Real PACO2 "alveolar PCO2 [kPA]";
			//output Real VAe_BTPS "expired alveolar ventilation in l BTPS/min";

			var resultValue: Object = new Object;

			var VCO2_STPD: Number // "rate of carbon dioxide production in l STPD/min";
			var VO2_STPD: Number //  "rate of oxygen consumtion in l STPD/min";
			var kBTPS_to_STPD: Number //  "conversion factor form BTPS to STPD";
			var VAi_STPD: Number //  "inspired alveolar ventilation in l/min STPD";
			var VO2i_STPD: Number //  "inspired O2 in l STPD/min";
			var VCO2i_STPD: Number //  "inspired CO2 in l STPD/min";
			var VAe_STPD: Number //  "expired alveolar ventilation in l/min STPD";
			var VO2e_STPD: Number //  "exspired O2 in l STPD/min";
			var VCO2e_STPD: Number //  "exspired CO2 in l STPD/min";
			var FeO2_D: Number //  "fraction concentationo of O2 in dry expired gas";
			var FeCO2_D: Number //  "fraction concentationo of CO2 in dry expired gas";

			var PAO2: Number //"alveolar pO2 [kPa]";
			var PACO2: Number //output "alveolar PCO2 [kPA]";
			var VAe_BTPS: Number //output "expired alveolar ventilation in l BTPS/min";

			
			//algorithm 
			//conversion of metabolic gases flow from mmol/min to l STPD/min
			VCO2_STPD = VCO2 * 0.022414;
			VO2_STPD = VO2 *  0.022414;
			//calculation of VAi_STPD
			kBTPS_to_STPD = BTPS_to_STPD(PB, temp);
			VAi_STPD = VAi_BTPS * kBTPS_to_STPD; //l STPD/min
			// calculation of inspired gases flow in l STPD/min
			VO2i_STPD = VAi_STPD * FiO2;
			VCO2i_STPD = VAi_STPD * FiCO2;
			//calculation of expired alveolar ventilation in l STPD/min
			VAe_STPD = VAi_STPD + (VCO2_STPD - VO2_STPD);
			//calculation of expired gases flow in STPD
			VO2e_STPD = VO2i_STPD - VO2_STPD;
			VCO2e_STPD = VCO2i_STPD + VCO2_STPD;
			//calculation of FeO2 and FeCO2 in dry expired gas
			FeO2_D = VO2e_STPD/VAe_STPD;
			FeCO2_D = VCO2e_STPD/VAe_STPD;
			//calculation of expired alveolar ventilation in l BTPS/min (VAe_BTPS)
			VAe_BTPS = VAe_STPD/kBTPS_to_STPD;
			//calculation of PAO2 and PACO2 (at BTPS)
			PAO2 = FeO2_D*(PB - pH2Oof(temp));
			PACO2 = FeCO2_D*(PB - pH2Oof(temp));
			//outouts
			resultValue.PAO2 = PAO2;
			resultValue.PACO2 = PACO2;
			resultValue.VAe_BTPS = VAe_BTPS;
			
			
			return resultValue;

		} //end AlveolarGases;
		

		public function testAlveolarGases():void{
			var result: Object = new Object();
			var VAi_BTPS = 4 ; //0.1267;
			var FiO2 =0.21;
			var FiCO2 = 0.004;
			var temp = 37;
			var PB = 760;
			var VO2 = 10.105231440769042;
			var VCO2 = 10.557651713977041;
			result = AlveolarGases (VAi_BTPS,FiO2,FiCO2,temp,PB,VO2,VCO2);
			trace("PAO2 = "+result.PAO2+" mmHg "+"PACO2 = "+result.PACO2+" mmHg "+result.VAe_BTPS+" l BTPS/min");
			//PACO2 = 7.164554439759813 PAO2 = 13.404438168406486
			
		}
		
		public function testAlvEquil(): void {
			var result: Object = new Object();

			var VAi: Number =4;
			var FiO2: Number = 0.21;
			var FiCO2: Number = 0.004;
			var temp: Number = 37;
			var PB: Number = 760;
			var Q: Number = 5;
			var CvO2: Number = 6.18;
			var CvCO2: Number = 26.3;
			var BEox: Number = 0;
			var Hb: Number = 8.40;
			var cAlb: Number = 0.66;
			var cPi: Number = 1.15;
			var cDPG: Number = 5.3;
			var FCOHb: Number = 0.005;
			var FMetHb: Number = 0.005
			var FHbF: Number = 0.005;



			result = AlvEquil(VAi, FiO2, FiCO2, temp, PB, Q, CvO2, CvCO2, BEox, Hb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF);

			var VO2: Number = result.VO2;
			var VCO2: Number = result.VCO2;
			var PACO2: Number = result.PACO2;
			var PAO2: Number = result.PAO2;
			var pH: Number = result.pHpc;
			var CpcO2: Number = result.CpcO2;
			var CpcCO2: Number = result.CpcCO2;
			var sO2: Number = result.sO2pc;
			var HCO3: Number = result.HCO3pc;
			var VA: Number = result.VA;
			trace("VAi=" + VAi + " VA=" + VA);
			trace("VO2 = " + VO2 + " mmol/min = " + VO2 * 22.414 + " ml/min VCO2 = " + VCO2 + " mmol/min = " + VCO2 * 22.414 + " ml/min");

			trace("PACO2 = " + PACO2 + " PAO2 = " + PAO2 + " sO2 = " + sO2 + " pH = " + pH + " HCO3 = " + HCO3 + " CpcO2 = " + CpcO2 + " CpcCO2 = " + CpcCO2);

		}


		//*** testing ****
		public function testBEINVof(): void {
			var pH: Number = 7.2;
			var newpH: Number;
			var BEox: Number;
			var newBEox: Number;
			var pCO2: Number = 10;
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

		public function testPO2PCO2of(): void {
			var BEox: Number = -10;
			var pCO2: Number = 8.33;
			var pO2: Number = 13.3;
			var cHb: Number = 8.5;
			var cAlb: Number = 0.66;
			var cPi: Number = 1.15;
			var temp: Number = 37;
			var FCOHb: Number = 0.005;
			var FMetHb: Number = 0.005;
			var FHbF: Number = 0.005;
			var cDPG: Number = 5.3;
			var ctO2: Number;
			var ctCO2: Number;
			var sO2: Number;
			var dissO2: Number;
			var ceHb: Number;
			var ctO2calc: Number;
			var ctCO2calc: Number;
			var pHcalc: Number;
			var sO2calc: Number;
			var BEoxcalc: Number;
			var Result: Object = new Object();
			var Result1: Object = new Object();


			Result = PO2PCO2of(pO2, pCO2, BEox, cHb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);

			ctO2calc = Result.ctO2;
			ctCO2calc = Result.ctCO2;
			pHcalc = Result.pH;
			sO2calc = Result.sO2;

			Result1 = O2total(cHb, pO2, pHcalc, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
			ctO2 = Result1.ctO2;
			sO2 = Result1.sO2;
			dissO2 = Result1.dissO2;
			ceHb = Result1.ceHb;

			ctCO2 = ctCO2Bof(pHcalc, pCO2, temp, cHb, sO2);

			BEoxcalc = cBEoxOf(pHcalc, pCO2, cHb, temp, cAlb, cPi, sO2calc);

			trace("ctO2calc = " + ctO2calc + " ctO2 = " + ctO2);
			trace("ctCO2calc = " + ctCO2calc + " ctCO2 = " + ctCO2);
			trace("pO2 = " + pO2 + " pCO2 = " + pCO2);


			//end testPO2PCO2of;
		}


		function testVaporPressureSI(): void {
			var temp: Number = 38;
			var pH2O: Number;
			pH2O = VaporPressureSI(temp + 273.15) / 133.322;
			trace("temp = " + temp + "°C pH2O = " + pH2O + " mmHg =" + pH2Oof(temp));
		}



		public function testO2CO2of(): void {

			var BEox: Number = -10;
			var pCO2: Number = 10;
			var pO2: Number = 15;
			var cHb: Number = 8.5;
			var cAlb: Number = 0.66;
			var cPi: Number = 1.15;
			var temp: Number = 37;
			var FCOHb: Number = 0.005;
			var FMetHb: Number = 0.005;
			var FHbF: Number = 0.005;
			var cDPG: Number = 5.3;
			var ctCO2: Number;
			var ctO2: Number;
			var sO2: Number;
			var PO2calc: Number;
			var PCO2calc: Number;
			var pHcalc: Number;
			var sO2calc: Number;
			var result: Object = new Object();
			var pH: Number;

			result = PO2PCO2of(pO2, pCO2, BEox, cHb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
			ctO2 = result.ctO2;
			ctCO2 = result.ctCO2;
			pH = result.pH;
			sO2 = result.sO2;
			//pH = BEINVof(BEox, pCO2, cHb, cAlb, cPi, sO2, temp);
			//sO2 = sO2of(pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
			//O2 = ctO2Bof(cHb, pO2, pH, pCO2, cDPG, FCOHb, FMetHb, FHbF, temp);
			//CO2 = ctCO2Bof(pH, pCO2, temp, cHb, sO2);
			//(PCO2calc,PO2calc,pHcalc,sO2calc) 
			trace("pCO2 = " + pCO2 + " pO2 = " + pO2 + " sO2=" + sO2 + " pH=" + pH + " CO2 =" + ctCO2 + " O2 = " + ctO2);

			result = O2CO2of(ctO2, ctCO2, BEox, cHb, cAlb, cPi, cDPG, FCOHb, FMetHb, FHbF, temp);
			PCO2calc = result.pCO2;
			PO2calc = result.pO2;
			pHcalc = result.pH;
			sO2calc = result.sO2;

			trace("input pCO2 =" + pCO2 + " calculated pCO2 = " + PCO2calc);
			trace("input pO2 = " + pO2 + " calculated pO2 = " + PO2calc);
			trace("input pH = " + pH + " calculated pH = " + pHcalc);
			trace("input sO2 = " + sO2 * 100 + "% calculated sO2 = " + sO2calc * 100 + "%");

			//end testO2CO2of;			
		}





	}
}