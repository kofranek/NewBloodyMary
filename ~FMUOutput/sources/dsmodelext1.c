#include <moutil.c>
PreNonAliasDef(6)
PreNonAliasDef(7)
PreNonAliasDef(8)
PreNonAliasDef(9)
PreNonAliasDef(10)
StartNonAlias(5)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 4915, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 4915, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[57].bloodctO2content.sO2", 1,\
 5, 4924, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[57].bloodctO2content.ceHb", 1, 5, 4927, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].sO2", "[1|%]", "o2CO2curves.ctO2_curve[58].bloodctO2content.sO2", 1,\
 5, 4955, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[58].bloodctCO2content.cHCO3", 1, 5, 4965, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[58].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pO2", 1,\
 5, 4949, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctCO2content.ctCO2", 1, 5, 4964, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctO2content.totalO2", 1, 5, 4956, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].pH", "[1|1]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 4946, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctCO2content.cdCO2p", 1, 5, 4966, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctO2content.cdO2p", 1, 5, 4957, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1, 5, 4946, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 4946, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 4946, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[58].bloodctO2content.sO2", 1,\
 5, 4955, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[58].bloodctO2content.ceHb", 1, 5, 4958, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].sO2", "[1|%]", "o2CO2curves.ctO2_curve[59].bloodctO2content.sO2", 1,\
 5, 4986, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[59].bloodctCO2content.cHCO3", 1, 5, 4996, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[59].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pO2", 1,\
 5, 4980, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctCO2content.ctCO2", 1, 5, 4995, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctO2content.totalO2", 1, 5, 4987, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].pH", "[1|1]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctCO2content.cdCO2p", 1, 5, 4997, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctO2content.cdO2p", 1, 5, 4988, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1, 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[59].bloodctO2content.sO2", 1,\
 5, 4986, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[59].bloodctO2content.ceHb", 1, 5, 4989, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].sO2", "[1|%]", "o2CO2curves.ctO2_curve[60].bloodctO2content.sO2", 1,\
 5, 5017, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[60].bloodctCO2content.cHCO3", 1, 5, 5027, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[60].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pO2", 1,\
 5, 5011, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctCO2content.ctCO2", 1, 5, 5026, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctO2content.totalO2", 1, 5, 5018, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].pH", "[1|1]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 5008, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctCO2content.cdCO2p", 1, 5, 5028, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctO2content.cdO2p", 1, 5, 5019, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1, 5, 5008, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 5008, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 5008, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[60].bloodctO2content.sO2", 1,\
 5, 5017, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[60].bloodctO2content.ceHb", 1, 5, 5020, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].sO2", "[1|%]", "o2CO2curves.ctO2_curve[61].bloodctO2content.sO2", 1,\
 5, 5048, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[61].bloodctCO2content.cHCO3", 1, 5, 5058, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[61].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pO2", 1,\
 5, 5042, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctCO2content.ctCO2", 1, 5, 5057, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctO2content.totalO2", 1, 5, 5049, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].pH", "[1|1]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 5039, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctCO2content.cdCO2p", 1, 5, 5059, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctO2content.cdO2p", 1, 5, 5050, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1, 5, 5039, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 5039, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 5039, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[61].bloodctO2content.sO2", 1,\
 5, 5048, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[61].bloodctO2content.ceHb", 1, 5, 5051, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].sO2", "[1|%]", "o2CO2curves.ctO2_curve[62].bloodctO2content.sO2", 1,\
 5, 5079, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[62].bloodctCO2content.cHCO3", 1, 5, 5089, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[62].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pO2", 1,\
 5, 5073, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctCO2content.ctCO2", 1, 5, 5088, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctO2content.totalO2", 1, 5, 5080, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].pH", "[1|1]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 5070, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctCO2content.cdCO2p", 1, 5, 5090, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctO2content.cdO2p", 1, 5, 5081, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1, 5, 5070, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 5070, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 5070, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[62].bloodctO2content.sO2", 1,\
 5, 5079, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[62].bloodctO2content.ceHb", 1, 5, 5082, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].sO2", "[1|%]", "o2CO2curves.ctO2_curve[63].bloodctO2content.sO2", 1,\
 5, 5110, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[63].bloodctCO2content.cHCO3", 1, 5, 5120, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[63].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pO2", 1,\
 5, 5104, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctCO2content.ctCO2", 1, 5, 5119, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctO2content.totalO2", 1, 5, 5111, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].pH", "[1|1]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 5101, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctCO2content.cdCO2p", 1, 5, 5121, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctO2content.cdO2p", 1, 5, 5112, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1, 5, 5101, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 5101, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 5101, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[63].bloodctO2content.sO2", 1,\
 5, 5110, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[63].bloodctO2content.ceHb", 1, 5, 5113, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].sO2", "[1|%]", "o2CO2curves.ctO2_curve[64].bloodctO2content.sO2", 1,\
 5, 5141, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[64].bloodctCO2content.cHCO3", 1, 5, 5151, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[64].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pO2", 1,\
 5, 5135, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctCO2content.ctCO2", 1, 5, 5150, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctO2content.totalO2", 1, 5, 5142, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].pH", "[1|1]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 5132, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctCO2content.cdCO2p", 1, 5, 5152, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctO2content.cdO2p", 1, 5, 5143, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1, 5, 5132, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 5132, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 5132, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[64].bloodctO2content.sO2", 1,\
 5, 5141, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[64].bloodctO2content.ceHb", 1, 5, 5144, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].sO2", "[1|%]", "o2CO2curves.ctO2_curve[65].bloodctO2content.sO2", 1,\
 5, 5172, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[65].bloodctCO2content.cHCO3", 1, 5, 5182, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[65].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pO2", 1,\
 5, 5166, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctCO2content.ctCO2", 1, 5, 5181, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctO2content.totalO2", 1, 5, 5173, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].pH", "[1|1]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 5163, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctCO2content.cdCO2p", 1, 5, 5183, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctO2content.cdO2p", 1, 5, 5174, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1, 5, 5163, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 5163, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 5163, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[65].bloodctO2content.sO2", 1,\
 5, 5172, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[65].bloodctO2content.ceHb", 1, 5, 5175, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].sO2", "[1|%]", "o2CO2curves.ctO2_curve[66].bloodctO2content.sO2", 1,\
 5, 5203, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[66].bloodctCO2content.cHCO3", 1, 5, 5213, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[66].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pO2", 1,\
 5, 5197, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctCO2content.ctCO2", 1, 5, 5212, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctO2content.totalO2", 1, 5, 5204, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].pH", "[1|1]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 5194, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctCO2content.cdCO2p", 1, 5, 5214, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctO2content.cdO2p", 1, 5, 5205, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1, 5, 5194, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 5194, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 5194, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[66].bloodctO2content.sO2", 1,\
 5, 5203, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[66].bloodctO2content.ceHb", 1, 5, 5206, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].sO2", "[1|%]", "o2CO2curves.ctO2_curve[67].bloodctO2content.sO2", 1,\
 5, 5234, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[67].bloodctCO2content.cHCO3", 1, 5, 5244, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[67].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pO2", 1,\
 5, 5228, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctCO2content.ctCO2", 1, 5, 5243, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctO2content.totalO2", 1, 5, 5235, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].pH", "[1|1]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 5225, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctCO2content.cdCO2p", 1, 5, 5245, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctO2content.cdO2p", 1, 5, 5236, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1, 5, 5225, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 5225, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 5225, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[67].bloodctO2content.sO2", 1,\
 5, 5234, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[67].bloodctO2content.ceHb", 1, 5, 5237, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].sO2", "[1|%]", "o2CO2curves.ctO2_curve[68].bloodctO2content.sO2", 1,\
 5, 5265, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[68].bloodctCO2content.cHCO3", 1, 5, 5275, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[68].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pO2", 1,\
 5, 5259, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctCO2content.ctCO2", 1, 5, 5274, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctO2content.totalO2", 1, 5, 5266, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].pH", "[1|1]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 5256, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctCO2content.cdCO2p", 1, 5, 5276, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctO2content.cdO2p", 1, 5, 5267, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1, 5, 5256, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 5256, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 5256, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[68].bloodctO2content.sO2", 1,\
 5, 5265, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[68].bloodctO2content.ceHb", 1, 5, 5268, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].sO2", "[1|%]", "o2CO2curves.ctO2_curve[69].bloodctO2content.sO2", 1,\
 5, 5296, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[69].bloodctCO2content.cHCO3", 1, 5, 5306, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[69].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pO2", 1,\
 5, 5290, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctCO2content.ctCO2", 1, 5, 5305, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctO2content.totalO2", 1, 5, 5297, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].pH", "[1|1]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 5287, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctCO2content.cdCO2p", 1, 5, 5307, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctO2content.cdO2p", 1, 5, 5298, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1, 5, 5287, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 5287, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 5287, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[69].bloodctO2content.sO2", 1,\
 5, 5296, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[69].bloodctO2content.ceHb", 1, 5, 5299, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].sO2", "[1|%]", "o2CO2curves.ctO2_curve[70].bloodctO2content.sO2", 1,\
 5, 5327, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[70].bloodctCO2content.cHCO3", 1, 5, 5337, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[70].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pO2", 1,\
 5, 5321, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctCO2content.ctCO2", 1, 5, 5336, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctO2content.totalO2", 1, 5, 5328, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].pH", "[1|1]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 5318, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctCO2content.cdCO2p", 1, 5, 5338, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctO2content.cdO2p", 1, 5, 5329, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1, 5, 5318, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 5318, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 5318, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[70].bloodctO2content.sO2", 1,\
 5, 5327, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[70].bloodctO2content.ceHb", 1, 5, 5330, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].sO2", "[1|%]", "o2CO2curves.ctO2_curve[71].bloodctO2content.sO2", 1,\
 5, 5358, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[71].bloodctCO2content.cHCO3", 1, 5, 5368, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[71].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pO2", 1,\
 5, 5352, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctCO2content.ctCO2", 1, 5, 5367, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctO2content.totalO2", 1, 5, 5359, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].pH", "[1|1]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 5349, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctCO2content.cdCO2p", 1, 5, 5369, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctO2content.cdO2p", 1, 5, 5360, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1, 5, 5349, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 5349, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 5349, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[71].bloodctO2content.sO2", 1,\
 5, 5358, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[71].bloodctO2content.ceHb", 1, 5, 5361, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].sO2", "[1|%]", "o2CO2curves.ctO2_curve[72].bloodctO2content.sO2", 1,\
 5, 5389, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[72].bloodctCO2content.cHCO3", 1, 5, 5399, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[72].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pO2", 1,\
 5, 5383, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctCO2content.ctCO2", 1, 5, 5398, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctO2content.totalO2", 1, 5, 5390, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].pH", "[1|1]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 5380, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctCO2content.cdCO2p", 1, 5, 5400, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctO2content.cdO2p", 1, 5, 5391, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1, 5, 5380, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 5380, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 5380, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[72].bloodctO2content.sO2", 1,\
 5, 5389, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[72].bloodctO2content.ceHb", 1, 5, 5392, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].sO2", "[1|%]", "o2CO2curves.ctO2_curve[73].bloodctO2content.sO2", 1,\
 5, 5420, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[73].bloodctCO2content.cHCO3", 1, 5, 5430, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[73].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pO2", 1,\
 5, 5414, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctCO2content.ctCO2", 1, 5, 5429, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctO2content.totalO2", 1, 5, 5421, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].pH", "[1|1]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 5411, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctCO2content.cdCO2p", 1, 5, 5431, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctO2content.cdO2p", 1, 5, 5422, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1, 5, 5411, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 5411, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 5411, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[73].bloodctO2content.sO2", 1,\
 5, 5420, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[73].bloodctO2content.ceHb", 1, 5, 5423, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].sO2", "[1|%]", "o2CO2curves.ctO2_curve[74].bloodctO2content.sO2", 1,\
 5, 5451, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[74].bloodctCO2content.cHCO3", 1, 5, 5461, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[74].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pO2", 1,\
 5, 5445, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctCO2content.ctCO2", 1, 5, 5460, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctO2content.totalO2", 1, 5, 5452, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].pH", "[1|1]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 5442, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctCO2content.cdCO2p", 1, 5, 5462, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctO2content.cdO2p", 1, 5, 5453, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1, 5, 5442, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 5442, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 5442, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[74].bloodctO2content.sO2", 1,\
 5, 5451, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[74].bloodctO2content.ceHb", 1, 5, 5454, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].sO2", "[1|%]", "o2CO2curves.ctO2_curve[75].bloodctO2content.sO2", 1,\
 5, 5482, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[75].bloodctCO2content.cHCO3", 1, 5, 5492, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[75].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pO2", 1,\
 5, 5476, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctCO2content.ctCO2", 1, 5, 5491, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctO2content.totalO2", 1, 5, 5483, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].pH", "[1|1]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 5473, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctCO2content.cdCO2p", 1, 5, 5493, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctO2content.cdO2p", 1, 5, 5484, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1, 5, 5473, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 5473, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 5473, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[75].bloodctO2content.sO2", 1,\
 5, 5482, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[75].bloodctO2content.ceHb", 1, 5, 5485, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].sO2", "[1|%]", "o2CO2curves.ctO2_curve[76].bloodctO2content.sO2", 1,\
 5, 5513, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[76].bloodctCO2content.cHCO3", 1, 5, 5523, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[76].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pO2", 1,\
 5, 5507, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctCO2content.ctCO2", 1, 5, 5522, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctO2content.totalO2", 1, 5, 5514, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].pH", "[1|1]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 5504, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctCO2content.cdCO2p", 1, 5, 5524, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctO2content.cdO2p", 1, 5, 5515, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1, 5, 5504, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 5504, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 5504, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[76].bloodctO2content.sO2", 1,\
 5, 5513, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[76].bloodctO2content.ceHb", 1, 5, 5516, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].sO2", "[1|%]", "o2CO2curves.ctO2_curve[77].bloodctO2content.sO2", 1,\
 5, 5544, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[77].bloodctCO2content.cHCO3", 1, 5, 5554, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[77].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pO2", 1,\
 5, 5538, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctCO2content.ctCO2", 1, 5, 5553, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctO2content.totalO2", 1, 5, 5545, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].pH", "[1|1]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 5535, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctCO2content.cdCO2p", 1, 5, 5555, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctO2content.cdO2p", 1, 5, 5546, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1, 5, 5535, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 5535, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 5535, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[77].bloodctO2content.sO2", 1,\
 5, 5544, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[77].bloodctO2content.ceHb", 1, 5, 5547, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].sO2", "[1|%]", "o2CO2curves.ctO2_curve[78].bloodctO2content.sO2", 1,\
 5, 5575, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[78].bloodctCO2content.cHCO3", 1, 5, 5585, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[78].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pO2", 1,\
 5, 5569, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctCO2content.ctCO2", 1, 5, 5584, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctO2content.totalO2", 1, 5, 5576, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].pH", "[1|1]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 5566, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctCO2content.cdCO2p", 1, 5, 5586, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctO2content.cdO2p", 1, 5, 5577, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1, 5, 5566, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 5566, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 5566, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[78].bloodctO2content.sO2", 1,\
 5, 5575, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[78].bloodctO2content.ceHb", 1, 5, 5578, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].sO2", "[1|%]", "o2CO2curves.ctO2_curve[79].bloodctO2content.sO2", 1,\
 5, 5606, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[79].bloodctCO2content.cHCO3", 1, 5, 5616, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[79].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pO2", 1,\
 5, 5600, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctCO2content.ctCO2", 1, 5, 5615, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctO2content.totalO2", 1, 5, 5607, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].pH", "[1|1]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 5597, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctCO2content.cdCO2p", 1, 5, 5617, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctO2content.cdO2p", 1, 5, 5608, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1, 5, 5597, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 5597, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 5597, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[79].bloodctO2content.sO2", 1,\
 5, 5606, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[79].bloodctO2content.ceHb", 1, 5, 5609, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].sO2", "[1|%]", "o2CO2curves.ctO2_curve[80].bloodctO2content.sO2", 1,\
 5, 5637, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[80].bloodctCO2content.cHCO3", 1, 5, 5647, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[80].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pO2", 1,\
 5, 5631, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctCO2content.ctCO2", 1, 5, 5646, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctO2content.totalO2", 1, 5, 5638, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].pH", "[1|1]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 5628, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctCO2content.cdCO2p", 1, 5, 5648, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctO2content.cdO2p", 1, 5, 5639, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1, 5, 5628, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 5628, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 5628, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[80].bloodctO2content.sO2", 1,\
 5, 5637, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[80].bloodctO2content.ceHb", 1, 5, 5640, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].sO2", "[1|%]", "o2CO2curves.ctO2_curve[81].bloodctO2content.sO2", 1,\
 5, 5668, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[81].bloodctCO2content.cHCO3", 1, 5, 5678, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[81].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pO2", 1,\
 5, 5662, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctCO2content.ctCO2", 1, 5, 5677, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctO2content.totalO2", 1, 5, 5669, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].pH", "[1|1]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 5659, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctCO2content.cdCO2p", 1, 5, 5679, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctO2content.cdO2p", 1, 5, 5670, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1, 5, 5659, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 5659, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 5659, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[81].bloodctO2content.sO2", 1,\
 5, 5668, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[81].bloodctO2content.ceHb", 1, 5, 5671, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].sO2", "[1|%]", "o2CO2curves.ctO2_curve[82].bloodctO2content.sO2", 1,\
 5, 5699, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[82].bloodctCO2content.cHCO3", 1, 5, 5709, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[82].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pO2", 1,\
 5, 5693, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctCO2content.ctCO2", 1, 5, 5708, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctO2content.totalO2", 1, 5, 5700, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].pH", "[1|1]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 5690, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctCO2content.cdCO2p", 1, 5, 5710, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctO2content.cdO2p", 1, 5, 5701, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1, 5, 5690, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 5690, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 5690, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[82].bloodctO2content.sO2", 1,\
 5, 5699, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[82].bloodctO2content.ceHb", 1, 5, 5702, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].sO2", "[1|%]", "o2CO2curves.ctO2_curve[83].bloodctO2content.sO2", 1,\
 5, 5730, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[83].bloodctCO2content.cHCO3", 1, 5, 5740, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[83].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pO2", 1,\
 5, 5724, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctCO2content.ctCO2", 1, 5, 5739, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctO2content.totalO2", 1, 5, 5731, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].pH", "[1|1]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 5721, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctCO2content.cdCO2p", 1, 5, 5741, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctO2content.cdO2p", 1, 5, 5732, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1, 5, 5721, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 5721, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 5721, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[83].bloodctO2content.sO2", 1,\
 5, 5730, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[83].bloodctO2content.ceHb", 1, 5, 5733, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].sO2", "[1|%]", "o2CO2curves.ctO2_curve[84].bloodctO2content.sO2", 1,\
 5, 5761, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[84].bloodctCO2content.cHCO3", 1, 5, 5771, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[84].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pO2", 1,\
 5, 5755, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctCO2content.ctCO2", 1, 5, 5770, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctO2content.totalO2", 1, 5, 5762, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].pH", "[1|1]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 5752, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctCO2content.cdCO2p", 1, 5, 5772, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctO2content.cdO2p", 1, 5, 5763, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1, 5, 5752, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 5752, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 5752, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[84].bloodctO2content.sO2", 1,\
 5, 5761, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[84].bloodctO2content.ceHb", 1, 5, 5764, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].sO2", "[1|%]", "o2CO2curves.ctO2_curve[85].bloodctO2content.sO2", 1,\
 5, 5792, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[85].bloodctCO2content.cHCO3", 1, 5, 5802, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[85].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pO2", 1,\
 5, 5786, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctCO2content.ctCO2", 1, 5, 5801, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctO2content.totalO2", 1, 5, 5793, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].pH", "[1|1]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 5783, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctCO2content.cdCO2p", 1, 5, 5803, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctO2content.cdO2p", 1, 5, 5794, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1, 5, 5783, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 5783, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 5783, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[85].bloodctO2content.sO2", 1,\
 5, 5792, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[85].bloodctO2content.ceHb", 1, 5, 5795, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].sO2", "[1|%]", "o2CO2curves.ctO2_curve[86].bloodctO2content.sO2", 1,\
 5, 5823, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[86].bloodctCO2content.cHCO3", 1, 5, 5833, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[86].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pO2", 1,\
 5, 5817, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctCO2content.ctCO2", 1, 5, 5832, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctO2content.totalO2", 1, 5, 5824, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].pH", "[1|1]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 5814, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctCO2content.cdCO2p", 1, 5, 5834, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctO2content.cdO2p", 1, 5, 5825, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1, 5, 5814, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 5814, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 5814, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[86].bloodctO2content.sO2", 1,\
 5, 5823, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[86].bloodctO2content.ceHb", 1, 5, 5826, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].sO2", "[1|%]", "o2CO2curves.ctO2_curve[87].bloodctO2content.sO2", 1,\
 5, 5854, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[87].bloodctCO2content.cHCO3", 1, 5, 5864, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[87].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pO2", 1,\
 5, 5848, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctCO2content.ctCO2", 1, 5, 5863, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctO2content.totalO2", 1, 5, 5855, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].pH", "[1|1]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 5845, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctCO2content.cdCO2p", 1, 5, 5865, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctO2content.cdO2p", 1, 5, 5856, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1, 5, 5845, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 5845, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 5845, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[87].bloodctO2content.sO2", 1,\
 5, 5854, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[87].bloodctO2content.ceHb", 1, 5, 5857, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].sO2", "[1|%]", "o2CO2curves.ctO2_curve[88].bloodctO2content.sO2", 1,\
 5, 5885, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[88].bloodctCO2content.cHCO3", 1, 5, 5895, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[88].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pO2", 1,\
 5, 5879, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctCO2content.ctCO2", 1, 5, 5894, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctO2content.totalO2", 1, 5, 5886, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].pH", "[1|1]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctCO2content.cdCO2p", 1, 5, 5896, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctO2content.cdO2p", 1, 5, 5887, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1, 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[88].bloodctO2content.sO2", 1,\
 5, 5885, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[88].bloodctO2content.ceHb", 1, 5, 5888, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].sO2", "[1|%]", "o2CO2curves.ctO2_curve[89].bloodctO2content.sO2", 1,\
 5, 5916, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[89].bloodctCO2content.cHCO3", 1, 5, 5926, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[89].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pO2", 1,\
 5, 5910, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctCO2content.ctCO2", 1, 5, 5925, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctO2content.totalO2", 1, 5, 5917, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].pH", "[1|1]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 5907, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctCO2content.cdCO2p", 1, 5, 5927, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctO2content.cdO2p", 1, 5, 5918, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1, 5, 5907, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 5907, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 5907, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[89].bloodctO2content.sO2", 1,\
 5, 5916, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[89].bloodctO2content.ceHb", 1, 5, 5919, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].sO2", "[1|%]", "o2CO2curves.ctO2_curve[90].bloodctO2content.sO2", 1,\
 5, 5947, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[90].bloodctCO2content.cHCO3", 1, 5, 5957, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[90].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pO2", 1,\
 5, 5941, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctCO2content.ctCO2", 1, 5, 5956, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctO2content.totalO2", 1, 5, 5948, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].pH", "[1|1]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 5938, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctCO2content.cdCO2p", 1, 5, 5958, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctO2content.cdO2p", 1, 5, 5949, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1, 5, 5938, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 5938, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 5938, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[90].bloodctO2content.sO2", 1,\
 5, 5947, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[90].bloodctO2content.ceHb", 1, 5, 5950, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].sO2", "[1|%]", "o2CO2curves.ctO2_curve[91].bloodctO2content.sO2", 1,\
 5, 5978, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[91].bloodctCO2content.cHCO3", 1, 5, 5988, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[91].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pO2", 1,\
 5, 5972, 0)
EndNonAlias(5)
PreNonAliasNew(6)
StartNonAlias(6)
DeclareAlias2("o2CO2curves.ctO2_curve[91].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctCO2content.ctCO2", 1, 5, 5987, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctO2content.totalO2", 1, 5, 5979, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].pH", "[1|1]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 5969, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctCO2content.cdCO2p", 1, 5, 5989, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctO2content.cdO2p", 1, 5, 5980, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1, 5, 5969, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 5969, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 5969, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[91].bloodctO2content.sO2", 1,\
 5, 5978, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[91].bloodctO2content.ceHb", 1, 5, 5981, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].sO2", "[1|%]", "o2CO2curves.ctO2_curve[92].bloodctO2content.sO2", 1,\
 5, 6009, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[92].bloodctCO2content.cHCO3", 1, 5, 6019, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[92].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pO2", 1,\
 5, 6003, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctCO2content.ctCO2", 1, 5, 6018, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctO2content.totalO2", 1, 5, 6010, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].pH", "[1|1]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 6000, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctCO2content.cdCO2p", 1, 5, 6020, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctO2content.cdO2p", 1, 5, 6011, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1, 5, 6000, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 6000, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 6000, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[92].bloodctO2content.sO2", 1,\
 5, 6009, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[92].bloodctO2content.ceHb", 1, 5, 6012, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].sO2", "[1|%]", "o2CO2curves.ctO2_curve[93].bloodctO2content.sO2", 1,\
 5, 6040, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[93].bloodctCO2content.cHCO3", 1, 5, 6050, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[93].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pO2", 1,\
 5, 6034, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctCO2content.ctCO2", 1, 5, 6049, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctO2content.totalO2", 1, 5, 6041, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].pH", "[1|1]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 6031, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctCO2content.cdCO2p", 1, 5, 6051, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctO2content.cdO2p", 1, 5, 6042, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1, 5, 6031, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 6031, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 6031, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[93].bloodctO2content.sO2", 1,\
 5, 6040, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[93].bloodctO2content.ceHb", 1, 5, 6043, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].sO2", "[1|%]", "o2CO2curves.ctO2_curve[94].bloodctO2content.sO2", 1,\
 5, 6071, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[94].bloodctCO2content.cHCO3", 1, 5, 6081, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[94].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pO2", 1,\
 5, 6065, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctCO2content.ctCO2", 1, 5, 6080, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctO2content.totalO2", 1, 5, 6072, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].pH", "[1|1]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 6062, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctCO2content.cdCO2p", 1, 5, 6082, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctO2content.cdO2p", 1, 5, 6073, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1, 5, 6062, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 6062, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 6062, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[94].bloodctO2content.sO2", 1,\
 5, 6071, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[94].bloodctO2content.ceHb", 1, 5, 6074, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].sO2", "[1|%]", "o2CO2curves.ctO2_curve[95].bloodctO2content.sO2", 1,\
 5, 6102, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[95].bloodctCO2content.cHCO3", 1, 5, 6112, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[95].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pO2", 1,\
 5, 6096, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctCO2content.ctCO2", 1, 5, 6111, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctO2content.totalO2", 1, 5, 6103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].pH", "[1|1]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 6093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctCO2content.cdCO2p", 1, 5, 6113, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctO2content.cdO2p", 1, 5, 6104, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1, 5, 6093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 6093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 6093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[95].bloodctO2content.sO2", 1,\
 5, 6102, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[95].bloodctO2content.ceHb", 1, 5, 6105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].sO2", "[1|%]", "o2CO2curves.ctO2_curve[96].bloodctO2content.sO2", 1,\
 5, 6133, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[96].bloodctCO2content.cHCO3", 1, 5, 6143, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[96].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pO2", 1,\
 5, 6127, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctCO2content.ctCO2", 1, 5, 6142, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctO2content.totalO2", 1, 5, 6134, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].pH", "[1|1]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 6124, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctCO2content.cdCO2p", 1, 5, 6144, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctO2content.cdO2p", 1, 5, 6135, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1, 5, 6124, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 6124, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 6124, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[96].bloodctO2content.sO2", 1,\
 5, 6133, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[96].bloodctO2content.ceHb", 1, 5, 6136, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].sO2", "[1|%]", "o2CO2curves.ctO2_curve[97].bloodctO2content.sO2", 1,\
 5, 6164, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[97].bloodctCO2content.cHCO3", 1, 5, 6174, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[97].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pO2", 1,\
 5, 6158, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctCO2content.ctCO2", 1, 5, 6173, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctO2content.totalO2", 1, 5, 6165, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].pH", "[1|1]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 6155, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctCO2content.cdCO2p", 1, 5, 6175, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctO2content.cdO2p", 1, 5, 6166, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1, 5, 6155, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 6155, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 6155, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[97].bloodctO2content.sO2", 1,\
 5, 6164, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[97].bloodctO2content.ceHb", 1, 5, 6167, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].sO2", "[1|%]", "o2CO2curves.ctO2_curve[98].bloodctO2content.sO2", 1,\
 5, 6195, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[98].bloodctCO2content.cHCO3", 1, 5, 6205, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[98].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pO2", 1,\
 5, 6189, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctCO2content.ctCO2", 1, 5, 6204, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctO2content.totalO2", 1, 5, 6196, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].pH", "[1|1]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 6186, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctCO2content.cdCO2p", 1, 5, 6206, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctO2content.cdO2p", 1, 5, 6197, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1, 5, 6186, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 6186, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 6186, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[98].bloodctO2content.sO2", 1,\
 5, 6195, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[98].bloodctO2content.ceHb", 1, 5, 6198, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].sO2", "[1|%]", "o2CO2curves.ctO2_curve[99].bloodctO2content.sO2", 1,\
 5, 6226, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[99].bloodctCO2content.cHCO3", 1, 5, 6236, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[99].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pO2", 1,\
 5, 6220, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctCO2content.ctCO2", 1, 5, 6235, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctO2content.totalO2", 1, 5, 6227, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].pH", "[1|1]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 6217, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctCO2content.cdCO2p", 1, 5, 6237, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctO2content.cdO2p", 1, 5, 6228, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1, 5, 6217, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 6217, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 6217, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[99].bloodctO2content.sO2", 1,\
 5, 6226, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[99].bloodctO2content.ceHb", 1, 5, 6229, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].sO2", "[1|%]", "o2CO2curves.ctO2_curve[100].bloodctO2content.sO2", 1,\
 5, 6257, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[100].bloodctCO2content.cHCO3", 1, 5, 6267, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[100].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pO2", 1,\
 5, 6251, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctCO2content.ctCO2", 1, 5, 6266, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctO2content.totalO2", 1, 5, 6258, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].pH", "[1|1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6248, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctCO2content.cdCO2p", 1, 5, 6268, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctO2content.cdO2p", 1, 5, 6259, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6248, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6248, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6248, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[100].bloodctO2content.sO2", 1,\
 5, 6257, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[100].bloodctO2content.ceHb", 1, 5, 6260, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].sO2", "[1|%]", "o2CO2curves.ctO2_curve[101].bloodctO2content.sO2", 1,\
 5, 6288, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[101].bloodctCO2content.cHCO3", 1, 5, 6298, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].T", "[K|degC]", "temp.k", 1, 7, 54, 0)
DeclareVariable("o2CO2curves.ctO2_curve[101].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pO2", 1,\
 5, 6282, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].pCO2", "[Pa|mmHg]", "PCO2.k", 1, 7, 52,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctCO2content.ctCO2", 1, 5, 6297, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctO2content.totalO2", 1, 5, 6289, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 53, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].pH", "[1|1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6279, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctCO2content.cdCO2p", 1, 5, 6299, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctO2content.cdO2p", 1, 5, 6290, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6279, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 53, 0)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6279, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6279, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[101].bloodctO2content.sO2", 1,\
 5, 6288, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[101].bloodctO2content.ceHb", 1, 5, 6291, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves.dctCO2_array[1]", "[mol/m3|mmol/l]", "o2CO2curves.ctCO2_curve[1].bloodctCO2content.ctCO2", 1,\
 5, 65, 0)
DeclareVariable("o2CO2curves.dctCO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[10]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[11]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[12]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[13]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[14]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[15]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[16]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[17]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[18]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[19]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[20]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[21]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[22]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[23]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[24]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[25]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[26]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[27]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[28]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[29]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[30]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[31]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[32]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[33]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[34]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[35]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[36]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[37]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[38]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[39]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[40]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[41]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[42]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[43]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[44]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[45]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[46]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[47]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[48]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[49]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[50]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[51]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[52]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[53]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[54]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[55]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[56]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[57]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[58]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[59]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[60]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[61]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[62]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[63]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[64]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[65]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[66]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[67]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[68]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[69]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[70]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[71]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[72]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[73]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[74]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[75]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[76]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[77]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[78]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[79]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[80]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[81]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[82]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[83]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[84]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[85]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[86]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[87]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[88]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[89]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[90]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[91]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[92]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[93]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[94]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[95]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[96]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[97]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[98]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[99]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[100]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctCO2_array[101]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.dctO2_array[1]", "[mol/m3|mmol/l]", "o2CO2curves.ctO2_curve[1].bloodctO2content.totalO2", 1,\
 5, 3189, 0)
DeclareVariable("o2CO2curves.dctO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[10]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[11]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[12]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[13]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[14]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[15]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[16]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[17]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[18]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[19]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[20]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[21]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[22]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[23]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[24]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[25]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[26]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[27]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[28]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[29]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[30]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[31]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[32]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[33]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[34]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[35]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[36]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[37]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[38]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[39]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[40]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[41]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[42]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[43]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[44]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[45]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[46]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[47]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[48]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[49]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[50]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[51]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[52]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[53]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[54]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[55]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[56]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[57]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[58]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[59]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[60]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[61]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[62]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[63]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[64]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[65]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[66]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[67]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[68]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[69]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[70]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[71]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[72]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[73]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[74]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[75]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[76]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[77]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[78]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[79]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[80]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[81]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[82]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[83]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[84]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[85]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[86]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[87]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[88]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[89]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[90]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[91]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[92]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[93]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[94]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[95]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[96]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[97]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[98]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[99]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[100]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.dctO2_array[101]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[1]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[10]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[11]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[12]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[13]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[14]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[15]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[16]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[17]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[18]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[19]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[20]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[21]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[22]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[23]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[24]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[25]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[26]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[27]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[28]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[29]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[30]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[31]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[32]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[33]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[34]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[35]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[36]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[37]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[38]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[39]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[40]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[41]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[42]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[43]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[44]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[45]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[46]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[47]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[48]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[49]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[50]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[51]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[52]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[53]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[54]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[55]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[56]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[57]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[58]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[59]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[60]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[61]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[62]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[63]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[64]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[65]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[66]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[67]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[68]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[69]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[70]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[71]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[72]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[73]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[74]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[75]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[76]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[77]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[78]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[79]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[80]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[81]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[82]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[83]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[84]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[85]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[86]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[87]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[88]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[89]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[90]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[91]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[92]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[93]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[94]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[95]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[96]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[97]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[98]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[99]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[100]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctCO2_array[101]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[1]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[10]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[11]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[12]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[13]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[14]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[15]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[16]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[17]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[18]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[19]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[20]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[21]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[22]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[23]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[24]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[25]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[26]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[27]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[28]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[29]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[30]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[31]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[32]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[33]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[34]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[35]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[36]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[37]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[38]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[39]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[40]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[41]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[42]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[43]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[44]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[45]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[46]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[47]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[48]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[49]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[50]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[51]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[52]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[53]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[54]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[55]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[56]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[57]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[58]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[59]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[60]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[61]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[62]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[63]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[64]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[65]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[66]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[67]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[68]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[69]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[70]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[71]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[72]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[73]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[74]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[75]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[76]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[77]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[78]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[79]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[80]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[81]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[82]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[83]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[84]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[85]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[86]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[87]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[88]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[89]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[90]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[91]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[92]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[93]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[94]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[95]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[96]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[97]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[98]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[99]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[100]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.r_ctO2_array[101]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("Hb.k", "Constant Concentration output value [mol/m3|mmol/l]", \
9.309, 1E-60,1E+60,0.0,0,513)
DeclareVariable("Hb.y", "Concentration constant [mol/m3|mmol/l]", 9.309, 1E-60,\
1E+60,0.0,0,513)
DeclareParameter("PO2.k", "Constant Pressure output value [Pa|mmHg]", 51, \
3333.059685375, 0.0,0.0,133.322387415,0,560)
DeclareAlias2("PO2.y", "Pressure constant [Pa|mmHg]", "PO2.k", 1, 7, 51, 0)
DeclareParameter("PCO2.k", "Constant Pressure output value [Pa|mmHg]", 52, \
4666.283559525, 0.0,0.0,133.322387415,0,560)
DeclareAlias2("PCO2.y", "Pressure constant [Pa|mmHg]", "PCO2.k", 1, 7, 52, 0)
DeclareParameter("BEox.k", "Constant Concentration output value [mol/m3|mmol/l]",\
 53, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("BEox.y", "Concentration constant [mol/m3|mmol/l]", "BEox.k", 1, 7,\
 53, 0)
DeclareParameter("temp.k", "Constant Temperature output value [K|degC]", 54, \
310.15, 0.0,1E+100,1.0,0,560)
DeclareAlias2("temp.y", "Temperature constant [K|degC]", "temp.k", 1, 7, 54, 0)
DeclareParameter("bodyTemperature.k", "Constant Temperature output value [K|degC]",\
 55, 310.15, 0.0,1E+100,1.0,0,560)
DeclareAlias2("bodyTemperature.y", "Temperature constant [K|degC]", \
"bodyTemperature.k", 1, 7, 55, 0)
DeclareParameter("PB.k", "Constant Pressure output value [Pa|mmHg]", 56, \
101325.0144354, 0.0,0.0,133.322387415,0,560)
DeclareAlias2("PB.y", "Pressure constant [Pa|mmHg]", "PB.k", 1, 7, 56, 0)
EndNonAlias(6)
PreNonAliasNew(7)
