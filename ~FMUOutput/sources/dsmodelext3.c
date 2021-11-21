#include <moutil.c>
PreNonAliasDef(16)
PreNonAliasDef(17)
PreNonAliasDef(18)
PreNonAliasDef(19)
PreNonAliasDef(20)
StartNonAlias(15)
DeclareAlias2("o2CO2curves1.ctO2_curve[2].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[2].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[2].bloodctO2content.pH", 1,\
 5, 10032, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[2].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[2].bloodctO2content.pH", 1,\
 5, 10032, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[2].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[2].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[2].bloodctO2content.sO2", 1,\
 5, 10041, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[2].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[2].bloodctO2content.ceHb", 1, 5, 10044, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[2].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[3].bloodctO2content.sO2", 1,\
 5, 10072, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[3].bloodctCO2content.cHCO3", 1, 5, 10082, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[3].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[3].bloodctO2content.pO2", 1,\
 5, 10066, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[3].bloodctCO2content.ctCO2", 1, 5, 10081, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[3].bloodctO2content.totalO2", 1, 5, 10073, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].pH", "[1|1]", "o2CO2curves1.ctO2_curve[3].bloodctO2content.pH", 1,\
 5, 10063, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[3].bloodctCO2content.cdCO2p", 1, 5, 10083, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[3].bloodctO2content.cdO2p", 1, 5, 10074, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves1.ctO2_curve[3].bloodctO2content.pH", 1, 5, 10063, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[3].bloodctO2content.pH", 1,\
 5, 10063, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[3].bloodctO2content.pH", 1,\
 5, 10063, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[3].bloodctO2content.sO2", 1,\
 5, 10072, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[3].bloodctO2content.ceHb", 1, 5, 10075, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[3].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[4].bloodctO2content.sO2", 1,\
 5, 10103, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[4].bloodctCO2content.cHCO3", 1, 5, 10113, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[4].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[4].bloodctO2content.pO2", 1,\
 5, 10097, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[4].bloodctCO2content.ctCO2", 1, 5, 10112, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[4].bloodctO2content.totalO2", 1, 5, 10104, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].pH", "[1|1]", "o2CO2curves1.ctO2_curve[4].bloodctO2content.pH", 1,\
 5, 10094, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[4].bloodctCO2content.cdCO2p", 1, 5, 10114, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[4].bloodctO2content.cdO2p", 1, 5, 10105, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves1.ctO2_curve[4].bloodctO2content.pH", 1, 5, 10094, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[4].bloodctO2content.pH", 1,\
 5, 10094, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[4].bloodctO2content.pH", 1,\
 5, 10094, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[4].bloodctO2content.sO2", 1,\
 5, 10103, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[4].bloodctO2content.ceHb", 1, 5, 10106, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[4].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[5].bloodctO2content.sO2", 1,\
 5, 10134, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[5].bloodctCO2content.cHCO3", 1, 5, 10144, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[5].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[5].bloodctO2content.pO2", 1,\
 5, 10128, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[5].bloodctCO2content.ctCO2", 1, 5, 10143, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[5].bloodctO2content.totalO2", 1, 5, 10135, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].pH", "[1|1]", "o2CO2curves1.ctO2_curve[5].bloodctO2content.pH", 1,\
 5, 10125, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[5].bloodctCO2content.cdCO2p", 1, 5, 10145, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[5].bloodctO2content.cdO2p", 1, 5, 10136, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves1.ctO2_curve[5].bloodctO2content.pH", 1, 5, 10125, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[5].bloodctO2content.pH", 1,\
 5, 10125, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[5].bloodctO2content.pH", 1,\
 5, 10125, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[5].bloodctO2content.sO2", 1,\
 5, 10134, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[5].bloodctO2content.ceHb", 1, 5, 10137, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[5].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[6].bloodctO2content.sO2", 1,\
 5, 10165, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[6].bloodctCO2content.cHCO3", 1, 5, 10175, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[6].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[6].bloodctO2content.pO2", 1,\
 5, 10159, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[6].bloodctCO2content.ctCO2", 1, 5, 10174, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[6].bloodctO2content.totalO2", 1, 5, 10166, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].pH", "[1|1]", "o2CO2curves1.ctO2_curve[6].bloodctO2content.pH", 1,\
 5, 10156, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[6].bloodctCO2content.cdCO2p", 1, 5, 10176, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[6].bloodctO2content.cdO2p", 1, 5, 10167, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves1.ctO2_curve[6].bloodctO2content.pH", 1, 5, 10156, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[6].bloodctO2content.pH", 1,\
 5, 10156, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[6].bloodctO2content.pH", 1,\
 5, 10156, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[6].bloodctO2content.sO2", 1,\
 5, 10165, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[6].bloodctO2content.ceHb", 1, 5, 10168, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[6].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[7].bloodctO2content.sO2", 1,\
 5, 10196, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[7].bloodctCO2content.cHCO3", 1, 5, 10206, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[7].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[7].bloodctO2content.pO2", 1,\
 5, 10190, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[7].bloodctCO2content.ctCO2", 1, 5, 10205, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[7].bloodctO2content.totalO2", 1, 5, 10197, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].pH", "[1|1]", "o2CO2curves1.ctO2_curve[7].bloodctO2content.pH", 1,\
 5, 10187, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[7].bloodctCO2content.cdCO2p", 1, 5, 10207, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[7].bloodctO2content.cdO2p", 1, 5, 10198, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves1.ctO2_curve[7].bloodctO2content.pH", 1, 5, 10187, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[7].bloodctO2content.pH", 1,\
 5, 10187, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[7].bloodctO2content.pH", 1,\
 5, 10187, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[7].bloodctO2content.sO2", 1,\
 5, 10196, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[7].bloodctO2content.ceHb", 1, 5, 10199, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[7].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[8].bloodctO2content.sO2", 1,\
 5, 10227, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[8].bloodctCO2content.cHCO3", 1, 5, 10237, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[8].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[8].bloodctO2content.pO2", 1,\
 5, 10221, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[8].bloodctCO2content.ctCO2", 1, 5, 10236, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[8].bloodctO2content.totalO2", 1, 5, 10228, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].pH", "[1|1]", "o2CO2curves1.ctO2_curve[8].bloodctO2content.pH", 1,\
 5, 10218, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[8].bloodctCO2content.cdCO2p", 1, 5, 10238, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[8].bloodctO2content.cdO2p", 1, 5, 10229, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves1.ctO2_curve[8].bloodctO2content.pH", 1, 5, 10218, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[8].bloodctO2content.pH", 1,\
 5, 10218, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[8].bloodctO2content.pH", 1,\
 5, 10218, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[8].bloodctO2content.sO2", 1,\
 5, 10227, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[8].bloodctO2content.ceHb", 1, 5, 10230, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[8].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[9].bloodctO2content.sO2", 1,\
 5, 10258, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[9].bloodctCO2content.cHCO3", 1, 5, 10268, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[9].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[9].bloodctO2content.pO2", 1,\
 5, 10252, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[9].bloodctCO2content.ctCO2", 1, 5, 10267, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[9].bloodctO2content.totalO2", 1, 5, 10259, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].pH", "[1|1]", "o2CO2curves1.ctO2_curve[9].bloodctO2content.pH", 1,\
 5, 10249, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[9].bloodctCO2content.cdCO2p", 1, 5, 10269, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[9].bloodctO2content.cdO2p", 1, 5, 10260, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves1.ctO2_curve[9].bloodctO2content.pH", 1, 5, 10249, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[9].bloodctO2content.pH", 1,\
 5, 10249, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[9].bloodctO2content.pH", 1,\
 5, 10249, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[9].bloodctO2content.sO2", 1,\
 5, 10258, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[9].bloodctO2content.ceHb", 1, 5, 10261, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[9].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[10].bloodctO2content.sO2", 1,\
 5, 10289, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[10].bloodctCO2content.cHCO3", 1, 5, 10299, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[10].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[10].bloodctO2content.pO2", 1,\
 5, 10283, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[10].bloodctCO2content.ctCO2", 1, 5, 10298, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[10].bloodctO2content.totalO2", 1, 5, 10290, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].pH", "[1|1]", "o2CO2curves1.ctO2_curve[10].bloodctO2content.pH", 1,\
 5, 10280, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[10].bloodctCO2content.cdCO2p", 1, 5, 10300, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[10].bloodctO2content.cdO2p", 1, 5, 10291, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[10].bloodctO2content.pH", 1,\
 5, 10280, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[10].bloodctO2content.pH", 1,\
 5, 10280, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[10].bloodctO2content.pH", 1,\
 5, 10280, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[10].bloodctO2content.sO2", 1,\
 5, 10289, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[10].bloodctO2content.ceHb", 1, 5, 10292, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[10].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[11].bloodctO2content.sO2", 1,\
 5, 10320, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[11].bloodctCO2content.cHCO3", 1, 5, 10330, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[11].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[11].bloodctO2content.pO2", 1,\
 5, 10314, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[11].bloodctCO2content.ctCO2", 1, 5, 10329, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[11].bloodctO2content.totalO2", 1, 5, 10321, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].pH", "[1|1]", "o2CO2curves1.ctO2_curve[11].bloodctO2content.pH", 1,\
 5, 10311, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[11].bloodctCO2content.cdCO2p", 1, 5, 10331, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[11].bloodctO2content.cdO2p", 1, 5, 10322, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[11].bloodctO2content.pH", 1,\
 5, 10311, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[11].bloodctO2content.pH", 1,\
 5, 10311, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[11].bloodctO2content.pH", 1,\
 5, 10311, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[11].bloodctO2content.sO2", 1,\
 5, 10320, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[11].bloodctO2content.ceHb", 1, 5, 10323, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[11].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[12].bloodctO2content.sO2", 1,\
 5, 10351, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[12].bloodctCO2content.cHCO3", 1, 5, 10361, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[12].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[12].bloodctO2content.pO2", 1,\
 5, 10345, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[12].bloodctCO2content.ctCO2", 1, 5, 10360, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[12].bloodctO2content.totalO2", 1, 5, 10352, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].pH", "[1|1]", "o2CO2curves1.ctO2_curve[12].bloodctO2content.pH", 1,\
 5, 10342, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[12].bloodctCO2content.cdCO2p", 1, 5, 10362, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[12].bloodctO2content.cdO2p", 1, 5, 10353, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[12].bloodctO2content.pH", 1,\
 5, 10342, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[12].bloodctO2content.pH", 1,\
 5, 10342, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[12].bloodctO2content.pH", 1,\
 5, 10342, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[12].bloodctO2content.sO2", 1,\
 5, 10351, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[12].bloodctO2content.ceHb", 1, 5, 10354, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[12].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[13].bloodctO2content.sO2", 1,\
 5, 10382, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[13].bloodctCO2content.cHCO3", 1, 5, 10392, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[13].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[13].bloodctO2content.pO2", 1,\
 5, 10376, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[13].bloodctCO2content.ctCO2", 1, 5, 10391, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[13].bloodctO2content.totalO2", 1, 5, 10383, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].pH", "[1|1]", "o2CO2curves1.ctO2_curve[13].bloodctO2content.pH", 1,\
 5, 10373, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[13].bloodctCO2content.cdCO2p", 1, 5, 10393, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[13].bloodctO2content.cdO2p", 1, 5, 10384, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[13].bloodctO2content.pH", 1,\
 5, 10373, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[13].bloodctO2content.pH", 1,\
 5, 10373, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[13].bloodctO2content.pH", 1,\
 5, 10373, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[13].bloodctO2content.sO2", 1,\
 5, 10382, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[13].bloodctO2content.ceHb", 1, 5, 10385, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[13].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[14].bloodctO2content.sO2", 1,\
 5, 10413, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[14].bloodctCO2content.cHCO3", 1, 5, 10423, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[14].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[14].bloodctO2content.pO2", 1,\
 5, 10407, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[14].bloodctCO2content.ctCO2", 1, 5, 10422, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[14].bloodctO2content.totalO2", 1, 5, 10414, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].pH", "[1|1]", "o2CO2curves1.ctO2_curve[14].bloodctO2content.pH", 1,\
 5, 10404, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[14].bloodctCO2content.cdCO2p", 1, 5, 10424, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[14].bloodctO2content.cdO2p", 1, 5, 10415, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[14].bloodctO2content.pH", 1,\
 5, 10404, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[14].bloodctO2content.pH", 1,\
 5, 10404, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[14].bloodctO2content.pH", 1,\
 5, 10404, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[14].bloodctO2content.sO2", 1,\
 5, 10413, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[14].bloodctO2content.ceHb", 1, 5, 10416, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[14].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[15].bloodctO2content.sO2", 1,\
 5, 10444, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[15].bloodctCO2content.cHCO3", 1, 5, 10454, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[15].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[15].bloodctO2content.pO2", 1,\
 5, 10438, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[15].bloodctCO2content.ctCO2", 1, 5, 10453, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[15].bloodctO2content.totalO2", 1, 5, 10445, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].pH", "[1|1]", "o2CO2curves1.ctO2_curve[15].bloodctO2content.pH", 1,\
 5, 10435, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[15].bloodctCO2content.cdCO2p", 1, 5, 10455, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[15].bloodctO2content.cdO2p", 1, 5, 10446, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[15].bloodctO2content.pH", 1,\
 5, 10435, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[15].bloodctO2content.pH", 1,\
 5, 10435, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[15].bloodctO2content.pH", 1,\
 5, 10435, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[15].bloodctO2content.sO2", 1,\
 5, 10444, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[15].bloodctO2content.ceHb", 1, 5, 10447, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[15].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[16].bloodctO2content.sO2", 1,\
 5, 10475, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[16].bloodctCO2content.cHCO3", 1, 5, 10485, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[16].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[16].bloodctO2content.pO2", 1,\
 5, 10469, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[16].bloodctCO2content.ctCO2", 1, 5, 10484, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[16].bloodctO2content.totalO2", 1, 5, 10476, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].pH", "[1|1]", "o2CO2curves1.ctO2_curve[16].bloodctO2content.pH", 1,\
 5, 10466, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[16].bloodctCO2content.cdCO2p", 1, 5, 10486, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[16].bloodctO2content.cdO2p", 1, 5, 10477, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[16].bloodctO2content.pH", 1,\
 5, 10466, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[16].bloodctO2content.pH", 1,\
 5, 10466, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[16].bloodctO2content.pH", 1,\
 5, 10466, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[16].bloodctO2content.sO2", 1,\
 5, 10475, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[16].bloodctO2content.ceHb", 1, 5, 10478, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[16].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[17].bloodctO2content.sO2", 1,\
 5, 10506, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[17].bloodctCO2content.cHCO3", 1, 5, 10516, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[17].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[17].bloodctO2content.pO2", 1,\
 5, 10500, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[17].bloodctCO2content.ctCO2", 1, 5, 10515, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[17].bloodctO2content.totalO2", 1, 5, 10507, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].pH", "[1|1]", "o2CO2curves1.ctO2_curve[17].bloodctO2content.pH", 1,\
 5, 10497, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[17].bloodctCO2content.cdCO2p", 1, 5, 10517, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[17].bloodctO2content.cdO2p", 1, 5, 10508, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[17].bloodctO2content.pH", 1,\
 5, 10497, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[17].bloodctO2content.pH", 1,\
 5, 10497, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[17].bloodctO2content.pH", 1,\
 5, 10497, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[17].bloodctO2content.sO2", 1,\
 5, 10506, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[17].bloodctO2content.ceHb", 1, 5, 10509, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[17].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[18].bloodctO2content.sO2", 1,\
 5, 10537, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[18].bloodctCO2content.cHCO3", 1, 5, 10547, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[18].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[18].bloodctO2content.pO2", 1,\
 5, 10531, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[18].bloodctCO2content.ctCO2", 1, 5, 10546, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[18].bloodctO2content.totalO2", 1, 5, 10538, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].pH", "[1|1]", "o2CO2curves1.ctO2_curve[18].bloodctO2content.pH", 1,\
 5, 10528, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[18].bloodctCO2content.cdCO2p", 1, 5, 10548, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[18].bloodctO2content.cdO2p", 1, 5, 10539, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[18].bloodctO2content.pH", 1,\
 5, 10528, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[18].bloodctO2content.pH", 1,\
 5, 10528, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[18].bloodctO2content.pH", 1,\
 5, 10528, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[18].bloodctO2content.sO2", 1,\
 5, 10537, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[18].bloodctO2content.ceHb", 1, 5, 10540, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[18].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[19].bloodctO2content.sO2", 1,\
 5, 10568, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[19].bloodctCO2content.cHCO3", 1, 5, 10578, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[19].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[19].bloodctO2content.pO2", 1,\
 5, 10562, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[19].bloodctCO2content.ctCO2", 1, 5, 10577, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[19].bloodctO2content.totalO2", 1, 5, 10569, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].pH", "[1|1]", "o2CO2curves1.ctO2_curve[19].bloodctO2content.pH", 1,\
 5, 10559, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[19].bloodctCO2content.cdCO2p", 1, 5, 10579, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[19].bloodctO2content.cdO2p", 1, 5, 10570, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[19].bloodctO2content.pH", 1,\
 5, 10559, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[19].bloodctO2content.pH", 1,\
 5, 10559, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[19].bloodctO2content.pH", 1,\
 5, 10559, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[19].bloodctO2content.sO2", 1,\
 5, 10568, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[19].bloodctO2content.ceHb", 1, 5, 10571, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[19].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[20].bloodctO2content.sO2", 1,\
 5, 10599, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[20].bloodctCO2content.cHCO3", 1, 5, 10609, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[20].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[20].bloodctO2content.pO2", 1,\
 5, 10593, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[20].bloodctCO2content.ctCO2", 1, 5, 10608, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[20].bloodctO2content.totalO2", 1, 5, 10600, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].pH", "[1|1]", "o2CO2curves1.ctO2_curve[20].bloodctO2content.pH", 1,\
 5, 10590, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[20].bloodctCO2content.cdCO2p", 1, 5, 10610, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[20].bloodctO2content.cdO2p", 1, 5, 10601, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[20].bloodctO2content.pH", 1,\
 5, 10590, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[20].bloodctO2content.pH", 1,\
 5, 10590, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[20].bloodctO2content.pH", 1,\
 5, 10590, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[20].bloodctO2content.sO2", 1,\
 5, 10599, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[20].bloodctO2content.ceHb", 1, 5, 10602, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[20].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[21].bloodctO2content.sO2", 1,\
 5, 10630, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[21].bloodctCO2content.cHCO3", 1, 5, 10640, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[21].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[21].bloodctO2content.pO2", 1,\
 5, 10624, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[21].bloodctCO2content.ctCO2", 1, 5, 10639, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[21].bloodctO2content.totalO2", 1, 5, 10631, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].pH", "[1|1]", "o2CO2curves1.ctO2_curve[21].bloodctO2content.pH", 1,\
 5, 10621, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[21].bloodctCO2content.cdCO2p", 1, 5, 10641, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[21].bloodctO2content.cdO2p", 1, 5, 10632, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[21].bloodctO2content.pH", 1,\
 5, 10621, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[21].bloodctO2content.pH", 1,\
 5, 10621, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[21].bloodctO2content.pH", 1,\
 5, 10621, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[21].bloodctO2content.sO2", 1,\
 5, 10630, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[21].bloodctO2content.ceHb", 1, 5, 10633, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[21].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[22].bloodctO2content.sO2", 1,\
 5, 10661, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[22].bloodctCO2content.cHCO3", 1, 5, 10671, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[22].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[22].bloodctO2content.pO2", 1,\
 5, 10655, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[22].bloodctCO2content.ctCO2", 1, 5, 10670, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[22].bloodctO2content.totalO2", 1, 5, 10662, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].pH", "[1|1]", "o2CO2curves1.ctO2_curve[22].bloodctO2content.pH", 1,\
 5, 10652, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[22].bloodctCO2content.cdCO2p", 1, 5, 10672, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[22].bloodctO2content.cdO2p", 1, 5, 10663, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[22].bloodctO2content.pH", 1,\
 5, 10652, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[22].bloodctO2content.pH", 1,\
 5, 10652, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[22].bloodctO2content.pH", 1,\
 5, 10652, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[22].bloodctO2content.sO2", 1,\
 5, 10661, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[22].bloodctO2content.ceHb", 1, 5, 10664, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[22].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[23].bloodctO2content.sO2", 1,\
 5, 10692, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[23].bloodctCO2content.cHCO3", 1, 5, 10702, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[23].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[23].bloodctO2content.pO2", 1,\
 5, 10686, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[23].bloodctCO2content.ctCO2", 1, 5, 10701, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[23].bloodctO2content.totalO2", 1, 5, 10693, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].pH", "[1|1]", "o2CO2curves1.ctO2_curve[23].bloodctO2content.pH", 1,\
 5, 10683, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[23].bloodctCO2content.cdCO2p", 1, 5, 10703, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[23].bloodctO2content.cdO2p", 1, 5, 10694, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[23].bloodctO2content.pH", 1,\
 5, 10683, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[23].bloodctO2content.pH", 1,\
 5, 10683, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[23].bloodctO2content.pH", 1,\
 5, 10683, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[23].bloodctO2content.sO2", 1,\
 5, 10692, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[23].bloodctO2content.ceHb", 1, 5, 10695, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[23].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[24].bloodctO2content.sO2", 1,\
 5, 10723, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[24].bloodctCO2content.cHCO3", 1, 5, 10733, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[24].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[24].bloodctO2content.pO2", 1,\
 5, 10717, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[24].bloodctCO2content.ctCO2", 1, 5, 10732, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[24].bloodctO2content.totalO2", 1, 5, 10724, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].pH", "[1|1]", "o2CO2curves1.ctO2_curve[24].bloodctO2content.pH", 1,\
 5, 10714, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[24].bloodctCO2content.cdCO2p", 1, 5, 10734, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[24].bloodctO2content.cdO2p", 1, 5, 10725, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[24].bloodctO2content.pH", 1,\
 5, 10714, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[24].bloodctO2content.pH", 1,\
 5, 10714, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[24].bloodctO2content.pH", 1,\
 5, 10714, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[24].bloodctO2content.sO2", 1,\
 5, 10723, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[24].bloodctO2content.ceHb", 1, 5, 10726, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[24].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[25].bloodctO2content.sO2", 1,\
 5, 10754, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[25].bloodctCO2content.cHCO3", 1, 5, 10764, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[25].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[25].bloodctO2content.pO2", 1,\
 5, 10748, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[25].bloodctCO2content.ctCO2", 1, 5, 10763, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[25].bloodctO2content.totalO2", 1, 5, 10755, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].pH", "[1|1]", "o2CO2curves1.ctO2_curve[25].bloodctO2content.pH", 1,\
 5, 10745, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[25].bloodctCO2content.cdCO2p", 1, 5, 10765, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[25].bloodctO2content.cdO2p", 1, 5, 10756, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[25].bloodctO2content.pH", 1,\
 5, 10745, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[25].bloodctO2content.pH", 1,\
 5, 10745, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[25].bloodctO2content.pH", 1,\
 5, 10745, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[25].bloodctO2content.sO2", 1,\
 5, 10754, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[25].bloodctO2content.ceHb", 1, 5, 10757, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[25].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[26].bloodctO2content.sO2", 1,\
 5, 10785, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[26].bloodctCO2content.cHCO3", 1, 5, 10795, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[26].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[26].bloodctO2content.pO2", 1,\
 5, 10779, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[26].bloodctCO2content.ctCO2", 1, 5, 10794, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[26].bloodctO2content.totalO2", 1, 5, 10786, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].pH", "[1|1]", "o2CO2curves1.ctO2_curve[26].bloodctO2content.pH", 1,\
 5, 10776, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[26].bloodctCO2content.cdCO2p", 1, 5, 10796, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[26].bloodctO2content.cdO2p", 1, 5, 10787, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[26].bloodctO2content.pH", 1,\
 5, 10776, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[26].bloodctO2content.pH", 1,\
 5, 10776, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[26].bloodctO2content.pH", 1,\
 5, 10776, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[26].bloodctO2content.sO2", 1,\
 5, 10785, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[26].bloodctO2content.ceHb", 1, 5, 10788, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[26].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[27].bloodctO2content.sO2", 1,\
 5, 10816, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[27].bloodctCO2content.cHCO3", 1, 5, 10826, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[27].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[27].bloodctO2content.pO2", 1,\
 5, 10810, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[27].bloodctCO2content.ctCO2", 1, 5, 10825, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[27].bloodctO2content.totalO2", 1, 5, 10817, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].pH", "[1|1]", "o2CO2curves1.ctO2_curve[27].bloodctO2content.pH", 1,\
 5, 10807, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[27].bloodctCO2content.cdCO2p", 1, 5, 10827, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[27].bloodctO2content.cdO2p", 1, 5, 10818, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[27].bloodctO2content.pH", 1,\
 5, 10807, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[27].bloodctO2content.pH", 1,\
 5, 10807, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[27].bloodctO2content.pH", 1,\
 5, 10807, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[27].bloodctO2content.sO2", 1,\
 5, 10816, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[27].bloodctO2content.ceHb", 1, 5, 10819, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[27].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[28].bloodctO2content.sO2", 1,\
 5, 10847, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[28].bloodctCO2content.cHCO3", 1, 5, 10857, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[28].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[28].bloodctO2content.pO2", 1,\
 5, 10841, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[28].bloodctCO2content.ctCO2", 1, 5, 10856, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[28].bloodctO2content.totalO2", 1, 5, 10848, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].pH", "[1|1]", "o2CO2curves1.ctO2_curve[28].bloodctO2content.pH", 1,\
 5, 10838, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[28].bloodctCO2content.cdCO2p", 1, 5, 10858, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[28].bloodctO2content.cdO2p", 1, 5, 10849, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[28].bloodctO2content.pH", 1,\
 5, 10838, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[28].bloodctO2content.pH", 1,\
 5, 10838, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[28].bloodctO2content.pH", 1,\
 5, 10838, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[28].bloodctO2content.sO2", 1,\
 5, 10847, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[28].bloodctO2content.ceHb", 1, 5, 10850, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[28].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[29].bloodctO2content.sO2", 1,\
 5, 10878, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[29].bloodctCO2content.cHCO3", 1, 5, 10888, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[29].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[29].bloodctO2content.pO2", 1,\
 5, 10872, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[29].bloodctCO2content.ctCO2", 1, 5, 10887, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[29].bloodctO2content.totalO2", 1, 5, 10879, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].pH", "[1|1]", "o2CO2curves1.ctO2_curve[29].bloodctO2content.pH", 1,\
 5, 10869, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[29].bloodctCO2content.cdCO2p", 1, 5, 10889, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[29].bloodctO2content.cdO2p", 1, 5, 10880, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[29].bloodctO2content.pH", 1,\
 5, 10869, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[29].bloodctO2content.pH", 1,\
 5, 10869, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[29].bloodctO2content.pH", 1,\
 5, 10869, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[29].bloodctO2content.sO2", 1,\
 5, 10878, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[29].bloodctO2content.ceHb", 1, 5, 10881, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[29].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[30].bloodctO2content.sO2", 1,\
 5, 10909, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[30].bloodctCO2content.cHCO3", 1, 5, 10919, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[30].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[30].bloodctO2content.pO2", 1,\
 5, 10903, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[30].bloodctCO2content.ctCO2", 1, 5, 10918, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[30].bloodctO2content.totalO2", 1, 5, 10910, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].pH", "[1|1]", "o2CO2curves1.ctO2_curve[30].bloodctO2content.pH", 1,\
 5, 10900, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[30].bloodctCO2content.cdCO2p", 1, 5, 10920, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[30].bloodctO2content.cdO2p", 1, 5, 10911, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[30].bloodctO2content.pH", 1,\
 5, 10900, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[30].bloodctO2content.pH", 1,\
 5, 10900, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[30].bloodctO2content.pH", 1,\
 5, 10900, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[30].bloodctO2content.sO2", 1,\
 5, 10909, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[30].bloodctO2content.ceHb", 1, 5, 10912, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[30].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[31].bloodctO2content.sO2", 1,\
 5, 10940, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[31].bloodctCO2content.cHCO3", 1, 5, 10950, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[31].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[31].bloodctO2content.pO2", 1,\
 5, 10934, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[31].bloodctCO2content.ctCO2", 1, 5, 10949, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[31].bloodctO2content.totalO2", 1, 5, 10941, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].pH", "[1|1]", "o2CO2curves1.ctO2_curve[31].bloodctO2content.pH", 1,\
 5, 10931, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[31].bloodctCO2content.cdCO2p", 1, 5, 10951, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[31].bloodctO2content.cdO2p", 1, 5, 10942, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[31].bloodctO2content.pH", 1,\
 5, 10931, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[31].bloodctO2content.pH", 1,\
 5, 10931, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[31].bloodctO2content.pH", 1,\
 5, 10931, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[31].bloodctO2content.sO2", 1,\
 5, 10940, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[31].bloodctO2content.ceHb", 1, 5, 10943, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[31].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[32].bloodctO2content.sO2", 1,\
 5, 10971, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[32].bloodctCO2content.cHCO3", 1, 5, 10981, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[32].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[32].bloodctO2content.pO2", 1,\
 5, 10965, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[32].bloodctCO2content.ctCO2", 1, 5, 10980, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[32].bloodctO2content.totalO2", 1, 5, 10972, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].pH", "[1|1]", "o2CO2curves1.ctO2_curve[32].bloodctO2content.pH", 1,\
 5, 10962, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[32].bloodctCO2content.cdCO2p", 1, 5, 10982, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[32].bloodctO2content.cdO2p", 1, 5, 10973, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[32].bloodctO2content.pH", 1,\
 5, 10962, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[32].bloodctO2content.pH", 1,\
 5, 10962, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[32].bloodctO2content.pH", 1,\
 5, 10962, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[32].bloodctO2content.sO2", 1,\
 5, 10971, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[32].bloodctO2content.ceHb", 1, 5, 10974, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[32].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[33].bloodctO2content.sO2", 1,\
 5, 11002, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[33].bloodctCO2content.cHCO3", 1, 5, 11012, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[33].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[33].bloodctO2content.pO2", 1,\
 5, 10996, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[33].bloodctCO2content.ctCO2", 1, 5, 11011, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[33].bloodctO2content.totalO2", 1, 5, 11003, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].pH", "[1|1]", "o2CO2curves1.ctO2_curve[33].bloodctO2content.pH", 1,\
 5, 10993, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[33].bloodctCO2content.cdCO2p", 1, 5, 11013, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[33].bloodctO2content.cdO2p", 1, 5, 11004, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[33].bloodctO2content.pH", 1,\
 5, 10993, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[33].bloodctO2content.pH", 1,\
 5, 10993, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[33].bloodctO2content.pH", 1,\
 5, 10993, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[33].bloodctO2content.sO2", 1,\
 5, 11002, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[33].bloodctO2content.ceHb", 1, 5, 11005, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[33].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[34].bloodctO2content.sO2", 1,\
 5, 11033, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[34].bloodctCO2content.cHCO3", 1, 5, 11043, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[34].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[34].bloodctO2content.pO2", 1,\
 5, 11027, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[34].bloodctCO2content.ctCO2", 1, 5, 11042, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[34].bloodctO2content.totalO2", 1, 5, 11034, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].pH", "[1|1]", "o2CO2curves1.ctO2_curve[34].bloodctO2content.pH", 1,\
 5, 11024, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[34].bloodctCO2content.cdCO2p", 1, 5, 11044, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[34].bloodctO2content.cdO2p", 1, 5, 11035, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[34].bloodctO2content.pH", 1,\
 5, 11024, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[34].bloodctO2content.pH", 1,\
 5, 11024, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[34].bloodctO2content.pH", 1,\
 5, 11024, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[34].bloodctO2content.sO2", 1,\
 5, 11033, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[34].bloodctO2content.ceHb", 1, 5, 11036, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[34].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[35].bloodctO2content.sO2", 1,\
 5, 11064, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[35].bloodctCO2content.cHCO3", 1, 5, 11074, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[35].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[35].bloodctO2content.pO2", 1,\
 5, 11058, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[35].bloodctCO2content.ctCO2", 1, 5, 11073, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[35].bloodctO2content.totalO2", 1, 5, 11065, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].pH", "[1|1]", "o2CO2curves1.ctO2_curve[35].bloodctO2content.pH", 1,\
 5, 11055, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[35].bloodctCO2content.cdCO2p", 1, 5, 11075, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[35].bloodctO2content.cdO2p", 1, 5, 11066, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[35].bloodctO2content.pH", 1,\
 5, 11055, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[35].bloodctO2content.pH", 1,\
 5, 11055, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[35].bloodctO2content.pH", 1,\
 5, 11055, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[35].bloodctO2content.sO2", 1,\
 5, 11064, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[35].bloodctO2content.ceHb", 1, 5, 11067, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[35].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[36].bloodctO2content.sO2", 1,\
 5, 11095, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[36].bloodctCO2content.cHCO3", 1, 5, 11105, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[36].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[36].bloodctO2content.pO2", 1,\
 5, 11089, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[36].bloodctCO2content.ctCO2", 1, 5, 11104, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[36].bloodctO2content.totalO2", 1, 5, 11096, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].pH", "[1|1]", "o2CO2curves1.ctO2_curve[36].bloodctO2content.pH", 1,\
 5, 11086, 0)
EndNonAlias(15)
PreNonAliasNew(16)
StartNonAlias(16)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[36].bloodctCO2content.cdCO2p", 1, 5, 11106, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[36].bloodctO2content.cdO2p", 1, 5, 11097, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[36].bloodctO2content.pH", 1,\
 5, 11086, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[36].bloodctO2content.pH", 1,\
 5, 11086, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[36].bloodctO2content.pH", 1,\
 5, 11086, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[36].bloodctO2content.sO2", 1,\
 5, 11095, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[36].bloodctO2content.ceHb", 1, 5, 11098, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[36].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[37].bloodctO2content.sO2", 1,\
 5, 11126, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[37].bloodctCO2content.cHCO3", 1, 5, 11136, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[37].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[37].bloodctO2content.pO2", 1,\
 5, 11120, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[37].bloodctCO2content.ctCO2", 1, 5, 11135, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[37].bloodctO2content.totalO2", 1, 5, 11127, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].pH", "[1|1]", "o2CO2curves1.ctO2_curve[37].bloodctO2content.pH", 1,\
 5, 11117, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[37].bloodctCO2content.cdCO2p", 1, 5, 11137, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[37].bloodctO2content.cdO2p", 1, 5, 11128, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[37].bloodctO2content.pH", 1,\
 5, 11117, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[37].bloodctO2content.pH", 1,\
 5, 11117, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[37].bloodctO2content.pH", 1,\
 5, 11117, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[37].bloodctO2content.sO2", 1,\
 5, 11126, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[37].bloodctO2content.ceHb", 1, 5, 11129, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[37].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[38].bloodctO2content.sO2", 1,\
 5, 11157, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[38].bloodctCO2content.cHCO3", 1, 5, 11167, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[38].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[38].bloodctO2content.pO2", 1,\
 5, 11151, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[38].bloodctCO2content.ctCO2", 1, 5, 11166, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[38].bloodctO2content.totalO2", 1, 5, 11158, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].pH", "[1|1]", "o2CO2curves1.ctO2_curve[38].bloodctO2content.pH", 1,\
 5, 11148, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[38].bloodctCO2content.cdCO2p", 1, 5, 11168, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[38].bloodctO2content.cdO2p", 1, 5, 11159, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[38].bloodctO2content.pH", 1,\
 5, 11148, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[38].bloodctO2content.pH", 1,\
 5, 11148, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[38].bloodctO2content.pH", 1,\
 5, 11148, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[38].bloodctO2content.sO2", 1,\
 5, 11157, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[38].bloodctO2content.ceHb", 1, 5, 11160, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[38].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[39].bloodctO2content.sO2", 1,\
 5, 11188, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[39].bloodctCO2content.cHCO3", 1, 5, 11198, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[39].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[39].bloodctO2content.pO2", 1,\
 5, 11182, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[39].bloodctCO2content.ctCO2", 1, 5, 11197, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[39].bloodctO2content.totalO2", 1, 5, 11189, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].pH", "[1|1]", "o2CO2curves1.ctO2_curve[39].bloodctO2content.pH", 1,\
 5, 11179, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[39].bloodctCO2content.cdCO2p", 1, 5, 11199, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[39].bloodctO2content.cdO2p", 1, 5, 11190, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[39].bloodctO2content.pH", 1,\
 5, 11179, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[39].bloodctO2content.pH", 1,\
 5, 11179, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[39].bloodctO2content.pH", 1,\
 5, 11179, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[39].bloodctO2content.sO2", 1,\
 5, 11188, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[39].bloodctO2content.ceHb", 1, 5, 11191, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[39].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[40].bloodctO2content.sO2", 1,\
 5, 11219, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[40].bloodctCO2content.cHCO3", 1, 5, 11229, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[40].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[40].bloodctO2content.pO2", 1,\
 5, 11213, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[40].bloodctCO2content.ctCO2", 1, 5, 11228, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[40].bloodctO2content.totalO2", 1, 5, 11220, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].pH", "[1|1]", "o2CO2curves1.ctO2_curve[40].bloodctO2content.pH", 1,\
 5, 11210, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[40].bloodctCO2content.cdCO2p", 1, 5, 11230, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[40].bloodctO2content.cdO2p", 1, 5, 11221, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[40].bloodctO2content.pH", 1,\
 5, 11210, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[40].bloodctO2content.pH", 1,\
 5, 11210, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[40].bloodctO2content.pH", 1,\
 5, 11210, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[40].bloodctO2content.sO2", 1,\
 5, 11219, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[40].bloodctO2content.ceHb", 1, 5, 11222, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[40].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[41].bloodctO2content.sO2", 1,\
 5, 11250, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[41].bloodctCO2content.cHCO3", 1, 5, 11260, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[41].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[41].bloodctO2content.pO2", 1,\
 5, 11244, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[41].bloodctCO2content.ctCO2", 1, 5, 11259, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[41].bloodctO2content.totalO2", 1, 5, 11251, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].pH", "[1|1]", "o2CO2curves1.ctO2_curve[41].bloodctO2content.pH", 1,\
 5, 11241, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[41].bloodctCO2content.cdCO2p", 1, 5, 11261, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[41].bloodctO2content.cdO2p", 1, 5, 11252, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[41].bloodctO2content.pH", 1,\
 5, 11241, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[41].bloodctO2content.pH", 1,\
 5, 11241, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[41].bloodctO2content.pH", 1,\
 5, 11241, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[41].bloodctO2content.sO2", 1,\
 5, 11250, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[41].bloodctO2content.ceHb", 1, 5, 11253, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[41].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[42].bloodctO2content.sO2", 1,\
 5, 11281, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[42].bloodctCO2content.cHCO3", 1, 5, 11291, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[42].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[42].bloodctO2content.pO2", 1,\
 5, 11275, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[42].bloodctCO2content.ctCO2", 1, 5, 11290, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[42].bloodctO2content.totalO2", 1, 5, 11282, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].pH", "[1|1]", "o2CO2curves1.ctO2_curve[42].bloodctO2content.pH", 1,\
 5, 11272, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[42].bloodctCO2content.cdCO2p", 1, 5, 11292, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[42].bloodctO2content.cdO2p", 1, 5, 11283, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[42].bloodctO2content.pH", 1,\
 5, 11272, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[42].bloodctO2content.pH", 1,\
 5, 11272, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[42].bloodctO2content.pH", 1,\
 5, 11272, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[42].bloodctO2content.sO2", 1,\
 5, 11281, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[42].bloodctO2content.ceHb", 1, 5, 11284, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[42].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[43].bloodctO2content.sO2", 1,\
 5, 11312, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[43].bloodctCO2content.cHCO3", 1, 5, 11322, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[43].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[43].bloodctO2content.pO2", 1,\
 5, 11306, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[43].bloodctCO2content.ctCO2", 1, 5, 11321, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[43].bloodctO2content.totalO2", 1, 5, 11313, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].pH", "[1|1]", "o2CO2curves1.ctO2_curve[43].bloodctO2content.pH", 1,\
 5, 11303, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[43].bloodctCO2content.cdCO2p", 1, 5, 11323, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[43].bloodctO2content.cdO2p", 1, 5, 11314, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[43].bloodctO2content.pH", 1,\
 5, 11303, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[43].bloodctO2content.pH", 1,\
 5, 11303, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[43].bloodctO2content.pH", 1,\
 5, 11303, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[43].bloodctO2content.sO2", 1,\
 5, 11312, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[43].bloodctO2content.ceHb", 1, 5, 11315, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[43].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[44].bloodctO2content.sO2", 1,\
 5, 11343, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[44].bloodctCO2content.cHCO3", 1, 5, 11353, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[44].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[44].bloodctO2content.pO2", 1,\
 5, 11337, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[44].bloodctCO2content.ctCO2", 1, 5, 11352, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[44].bloodctO2content.totalO2", 1, 5, 11344, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].pH", "[1|1]", "o2CO2curves1.ctO2_curve[44].bloodctO2content.pH", 1,\
 5, 11334, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[44].bloodctCO2content.cdCO2p", 1, 5, 11354, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[44].bloodctO2content.cdO2p", 1, 5, 11345, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[44].bloodctO2content.pH", 1,\
 5, 11334, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[44].bloodctO2content.pH", 1,\
 5, 11334, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[44].bloodctO2content.pH", 1,\
 5, 11334, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[44].bloodctO2content.sO2", 1,\
 5, 11343, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[44].bloodctO2content.ceHb", 1, 5, 11346, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[44].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[45].bloodctO2content.sO2", 1,\
 5, 11374, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[45].bloodctCO2content.cHCO3", 1, 5, 11384, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[45].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[45].bloodctO2content.pO2", 1,\
 5, 11368, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[45].bloodctCO2content.ctCO2", 1, 5, 11383, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[45].bloodctO2content.totalO2", 1, 5, 11375, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].pH", "[1|1]", "o2CO2curves1.ctO2_curve[45].bloodctO2content.pH", 1,\
 5, 11365, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[45].bloodctCO2content.cdCO2p", 1, 5, 11385, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[45].bloodctO2content.cdO2p", 1, 5, 11376, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[45].bloodctO2content.pH", 1,\
 5, 11365, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[45].bloodctO2content.pH", 1,\
 5, 11365, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[45].bloodctO2content.pH", 1,\
 5, 11365, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[45].bloodctO2content.sO2", 1,\
 5, 11374, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[45].bloodctO2content.ceHb", 1, 5, 11377, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[45].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[46].bloodctO2content.sO2", 1,\
 5, 11405, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[46].bloodctCO2content.cHCO3", 1, 5, 11415, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[46].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[46].bloodctO2content.pO2", 1,\
 5, 11399, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[46].bloodctCO2content.ctCO2", 1, 5, 11414, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[46].bloodctO2content.totalO2", 1, 5, 11406, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].pH", "[1|1]", "o2CO2curves1.ctO2_curve[46].bloodctO2content.pH", 1,\
 5, 11396, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[46].bloodctCO2content.cdCO2p", 1, 5, 11416, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[46].bloodctO2content.cdO2p", 1, 5, 11407, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[46].bloodctO2content.pH", 1,\
 5, 11396, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[46].bloodctO2content.pH", 1,\
 5, 11396, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[46].bloodctO2content.pH", 1,\
 5, 11396, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[46].bloodctO2content.sO2", 1,\
 5, 11405, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[46].bloodctO2content.ceHb", 1, 5, 11408, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[46].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[47].bloodctO2content.sO2", 1,\
 5, 11436, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[47].bloodctCO2content.cHCO3", 1, 5, 11446, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[47].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[47].bloodctO2content.pO2", 1,\
 5, 11430, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[47].bloodctCO2content.ctCO2", 1, 5, 11445, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[47].bloodctO2content.totalO2", 1, 5, 11437, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].pH", "[1|1]", "o2CO2curves1.ctO2_curve[47].bloodctO2content.pH", 1,\
 5, 11427, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[47].bloodctCO2content.cdCO2p", 1, 5, 11447, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[47].bloodctO2content.cdO2p", 1, 5, 11438, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[47].bloodctO2content.pH", 1,\
 5, 11427, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[47].bloodctO2content.pH", 1,\
 5, 11427, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[47].bloodctO2content.pH", 1,\
 5, 11427, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[47].bloodctO2content.sO2", 1,\
 5, 11436, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[47].bloodctO2content.ceHb", 1, 5, 11439, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[47].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[48].bloodctO2content.sO2", 1,\
 5, 11467, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[48].bloodctCO2content.cHCO3", 1, 5, 11477, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[48].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[48].bloodctO2content.pO2", 1,\
 5, 11461, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[48].bloodctCO2content.ctCO2", 1, 5, 11476, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[48].bloodctO2content.totalO2", 1, 5, 11468, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].pH", "[1|1]", "o2CO2curves1.ctO2_curve[48].bloodctO2content.pH", 1,\
 5, 11458, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[48].bloodctCO2content.cdCO2p", 1, 5, 11478, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[48].bloodctO2content.cdO2p", 1, 5, 11469, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[48].bloodctO2content.pH", 1,\
 5, 11458, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[48].bloodctO2content.pH", 1,\
 5, 11458, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[48].bloodctO2content.pH", 1,\
 5, 11458, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[48].bloodctO2content.sO2", 1,\
 5, 11467, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[48].bloodctO2content.ceHb", 1, 5, 11470, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[48].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[49].bloodctO2content.sO2", 1,\
 5, 11498, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[49].bloodctCO2content.cHCO3", 1, 5, 11508, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[49].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[49].bloodctO2content.pO2", 1,\
 5, 11492, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[49].bloodctCO2content.ctCO2", 1, 5, 11507, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[49].bloodctO2content.totalO2", 1, 5, 11499, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].pH", "[1|1]", "o2CO2curves1.ctO2_curve[49].bloodctO2content.pH", 1,\
 5, 11489, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[49].bloodctCO2content.cdCO2p", 1, 5, 11509, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[49].bloodctO2content.cdO2p", 1, 5, 11500, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[49].bloodctO2content.pH", 1,\
 5, 11489, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[49].bloodctO2content.pH", 1,\
 5, 11489, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[49].bloodctO2content.pH", 1,\
 5, 11489, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[49].bloodctO2content.sO2", 1,\
 5, 11498, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[49].bloodctO2content.ceHb", 1, 5, 11501, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[49].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[50].bloodctO2content.sO2", 1,\
 5, 11529, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[50].bloodctCO2content.cHCO3", 1, 5, 11539, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[50].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[50].bloodctO2content.pO2", 1,\
 5, 11523, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[50].bloodctCO2content.ctCO2", 1, 5, 11538, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[50].bloodctO2content.totalO2", 1, 5, 11530, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].pH", "[1|1]", "o2CO2curves1.ctO2_curve[50].bloodctO2content.pH", 1,\
 5, 11520, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[50].bloodctCO2content.cdCO2p", 1, 5, 11540, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[50].bloodctO2content.cdO2p", 1, 5, 11531, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[50].bloodctO2content.pH", 1,\
 5, 11520, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[50].bloodctO2content.pH", 1,\
 5, 11520, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[50].bloodctO2content.pH", 1,\
 5, 11520, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[50].bloodctO2content.sO2", 1,\
 5, 11529, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[50].bloodctO2content.ceHb", 1, 5, 11532, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[50].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[51].bloodctO2content.sO2", 1,\
 5, 11560, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[51].bloodctCO2content.cHCO3", 1, 5, 11570, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[51].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[51].bloodctO2content.pO2", 1,\
 5, 11554, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[51].bloodctCO2content.ctCO2", 1, 5, 11569, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[51].bloodctO2content.totalO2", 1, 5, 11561, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].pH", "[1|1]", "o2CO2curves1.ctO2_curve[51].bloodctO2content.pH", 1,\
 5, 11551, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[51].bloodctCO2content.cdCO2p", 1, 5, 11571, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[51].bloodctO2content.cdO2p", 1, 5, 11562, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[51].bloodctO2content.pH", 1,\
 5, 11551, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[51].bloodctO2content.pH", 1,\
 5, 11551, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[51].bloodctO2content.pH", 1,\
 5, 11551, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[51].bloodctO2content.sO2", 1,\
 5, 11560, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[51].bloodctO2content.ceHb", 1, 5, 11563, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[51].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[52].bloodctO2content.sO2", 1,\
 5, 11591, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[52].bloodctCO2content.cHCO3", 1, 5, 11601, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[52].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[52].bloodctO2content.pO2", 1,\
 5, 11585, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[52].bloodctCO2content.ctCO2", 1, 5, 11600, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[52].bloodctO2content.totalO2", 1, 5, 11592, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].pH", "[1|1]", "o2CO2curves1.ctO2_curve[52].bloodctO2content.pH", 1,\
 5, 11582, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[52].bloodctCO2content.cdCO2p", 1, 5, 11602, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[52].bloodctO2content.cdO2p", 1, 5, 11593, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[52].bloodctO2content.pH", 1,\
 5, 11582, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[52].bloodctO2content.pH", 1,\
 5, 11582, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[52].bloodctO2content.pH", 1,\
 5, 11582, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[52].bloodctO2content.sO2", 1,\
 5, 11591, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[52].bloodctO2content.ceHb", 1, 5, 11594, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[52].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[53].bloodctO2content.sO2", 1,\
 5, 11622, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[53].bloodctCO2content.cHCO3", 1, 5, 11632, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[53].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[53].bloodctO2content.pO2", 1,\
 5, 11616, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[53].bloodctCO2content.ctCO2", 1, 5, 11631, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[53].bloodctO2content.totalO2", 1, 5, 11623, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].pH", "[1|1]", "o2CO2curves1.ctO2_curve[53].bloodctO2content.pH", 1,\
 5, 11613, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[53].bloodctCO2content.cdCO2p", 1, 5, 11633, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[53].bloodctO2content.cdO2p", 1, 5, 11624, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[53].bloodctO2content.pH", 1,\
 5, 11613, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[53].bloodctO2content.pH", 1,\
 5, 11613, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[53].bloodctO2content.pH", 1,\
 5, 11613, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[53].bloodctO2content.sO2", 1,\
 5, 11622, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[53].bloodctO2content.ceHb", 1, 5, 11625, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[53].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[54].bloodctO2content.sO2", 1,\
 5, 11653, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[54].bloodctCO2content.cHCO3", 1, 5, 11663, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[54].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[54].bloodctO2content.pO2", 1,\
 5, 11647, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[54].bloodctCO2content.ctCO2", 1, 5, 11662, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[54].bloodctO2content.totalO2", 1, 5, 11654, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].pH", "[1|1]", "o2CO2curves1.ctO2_curve[54].bloodctO2content.pH", 1,\
 5, 11644, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[54].bloodctCO2content.cdCO2p", 1, 5, 11664, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[54].bloodctO2content.cdO2p", 1, 5, 11655, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[54].bloodctO2content.pH", 1,\
 5, 11644, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[54].bloodctO2content.pH", 1,\
 5, 11644, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[54].bloodctO2content.pH", 1,\
 5, 11644, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[54].bloodctO2content.sO2", 1,\
 5, 11653, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[54].bloodctO2content.ceHb", 1, 5, 11656, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[54].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[55].bloodctO2content.sO2", 1,\
 5, 11684, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[55].bloodctCO2content.cHCO3", 1, 5, 11694, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[55].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[55].bloodctO2content.pO2", 1,\
 5, 11678, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[55].bloodctCO2content.ctCO2", 1, 5, 11693, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[55].bloodctO2content.totalO2", 1, 5, 11685, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].pH", "[1|1]", "o2CO2curves1.ctO2_curve[55].bloodctO2content.pH", 1,\
 5, 11675, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[55].bloodctCO2content.cdCO2p", 1, 5, 11695, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[55].bloodctO2content.cdO2p", 1, 5, 11686, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[55].bloodctO2content.pH", 1,\
 5, 11675, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[55].bloodctO2content.pH", 1,\
 5, 11675, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[55].bloodctO2content.pH", 1,\
 5, 11675, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[55].bloodctO2content.sO2", 1,\
 5, 11684, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[55].bloodctO2content.ceHb", 1, 5, 11687, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[55].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[56].bloodctO2content.sO2", 1,\
 5, 11715, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[56].bloodctCO2content.cHCO3", 1, 5, 11725, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[56].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[56].bloodctO2content.pO2", 1,\
 5, 11709, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[56].bloodctCO2content.ctCO2", 1, 5, 11724, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[56].bloodctO2content.totalO2", 1, 5, 11716, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].pH", "[1|1]", "o2CO2curves1.ctO2_curve[56].bloodctO2content.pH", 1,\
 5, 11706, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[56].bloodctCO2content.cdCO2p", 1, 5, 11726, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[56].bloodctO2content.cdO2p", 1, 5, 11717, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[56].bloodctO2content.pH", 1,\
 5, 11706, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[56].bloodctO2content.pH", 1,\
 5, 11706, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[56].bloodctO2content.pH", 1,\
 5, 11706, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[56].bloodctO2content.sO2", 1,\
 5, 11715, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[56].bloodctO2content.ceHb", 1, 5, 11718, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[56].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[57].bloodctO2content.sO2", 1,\
 5, 11746, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[57].bloodctCO2content.cHCO3", 1, 5, 11756, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[57].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[57].bloodctO2content.pO2", 1,\
 5, 11740, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[57].bloodctCO2content.ctCO2", 1, 5, 11755, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[57].bloodctO2content.totalO2", 1, 5, 11747, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].pH", "[1|1]", "o2CO2curves1.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 11737, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[57].bloodctCO2content.cdCO2p", 1, 5, 11757, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[57].bloodctO2content.cdO2p", 1, 5, 11748, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 11737, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 11737, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 11737, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[57].bloodctO2content.sO2", 1,\
 5, 11746, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[57].bloodctO2content.ceHb", 1, 5, 11749, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[57].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[58].bloodctO2content.sO2", 1,\
 5, 11777, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[58].bloodctCO2content.cHCO3", 1, 5, 11787, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[58].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[58].bloodctO2content.pO2", 1,\
 5, 11771, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[58].bloodctCO2content.ctCO2", 1, 5, 11786, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[58].bloodctO2content.totalO2", 1, 5, 11778, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].pH", "[1|1]", "o2CO2curves1.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 11768, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[58].bloodctCO2content.cdCO2p", 1, 5, 11788, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[58].bloodctO2content.cdO2p", 1, 5, 11779, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 11768, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 11768, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 11768, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[58].bloodctO2content.sO2", 1,\
 5, 11777, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[58].bloodctO2content.ceHb", 1, 5, 11780, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[58].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[59].bloodctO2content.sO2", 1,\
 5, 11808, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[59].bloodctCO2content.cHCO3", 1, 5, 11818, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[59].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[59].bloodctO2content.pO2", 1,\
 5, 11802, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[59].bloodctCO2content.ctCO2", 1, 5, 11817, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[59].bloodctO2content.totalO2", 1, 5, 11809, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].pH", "[1|1]", "o2CO2curves1.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 11799, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[59].bloodctCO2content.cdCO2p", 1, 5, 11819, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[59].bloodctO2content.cdO2p", 1, 5, 11810, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 11799, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 11799, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 11799, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[59].bloodctO2content.sO2", 1,\
 5, 11808, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[59].bloodctO2content.ceHb", 1, 5, 11811, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[59].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[60].bloodctO2content.sO2", 1,\
 5, 11839, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[60].bloodctCO2content.cHCO3", 1, 5, 11849, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[60].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[60].bloodctO2content.pO2", 1,\
 5, 11833, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[60].bloodctCO2content.ctCO2", 1, 5, 11848, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[60].bloodctO2content.totalO2", 1, 5, 11840, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].pH", "[1|1]", "o2CO2curves1.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 11830, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[60].bloodctCO2content.cdCO2p", 1, 5, 11850, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[60].bloodctO2content.cdO2p", 1, 5, 11841, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 11830, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 11830, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 11830, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[60].bloodctO2content.sO2", 1,\
 5, 11839, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[60].bloodctO2content.ceHb", 1, 5, 11842, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[60].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[61].bloodctO2content.sO2", 1,\
 5, 11870, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[61].bloodctCO2content.cHCO3", 1, 5, 11880, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[61].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[61].bloodctO2content.pO2", 1,\
 5, 11864, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[61].bloodctCO2content.ctCO2", 1, 5, 11879, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[61].bloodctO2content.totalO2", 1, 5, 11871, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].pH", "[1|1]", "o2CO2curves1.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 11861, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[61].bloodctCO2content.cdCO2p", 1, 5, 11881, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[61].bloodctO2content.cdO2p", 1, 5, 11872, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 11861, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 11861, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 11861, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[61].bloodctO2content.sO2", 1,\
 5, 11870, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[61].bloodctO2content.ceHb", 1, 5, 11873, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[61].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[62].bloodctO2content.sO2", 1,\
 5, 11901, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[62].bloodctCO2content.cHCO3", 1, 5, 11911, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[62].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[62].bloodctO2content.pO2", 1,\
 5, 11895, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[62].bloodctCO2content.ctCO2", 1, 5, 11910, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[62].bloodctO2content.totalO2", 1, 5, 11902, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].pH", "[1|1]", "o2CO2curves1.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 11892, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[62].bloodctCO2content.cdCO2p", 1, 5, 11912, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[62].bloodctO2content.cdO2p", 1, 5, 11903, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 11892, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 11892, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 11892, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[62].bloodctO2content.sO2", 1,\
 5, 11901, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[62].bloodctO2content.ceHb", 1, 5, 11904, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[62].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[63].bloodctO2content.sO2", 1,\
 5, 11932, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[63].bloodctCO2content.cHCO3", 1, 5, 11942, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[63].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[63].bloodctO2content.pO2", 1,\
 5, 11926, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[63].bloodctCO2content.ctCO2", 1, 5, 11941, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[63].bloodctO2content.totalO2", 1, 5, 11933, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].pH", "[1|1]", "o2CO2curves1.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 11923, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[63].bloodctCO2content.cdCO2p", 1, 5, 11943, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[63].bloodctO2content.cdO2p", 1, 5, 11934, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 11923, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 11923, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 11923, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[63].bloodctO2content.sO2", 1,\
 5, 11932, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[63].bloodctO2content.ceHb", 1, 5, 11935, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[63].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[64].bloodctO2content.sO2", 1,\
 5, 11963, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[64].bloodctCO2content.cHCO3", 1, 5, 11973, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[64].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[64].bloodctO2content.pO2", 1,\
 5, 11957, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[64].bloodctCO2content.ctCO2", 1, 5, 11972, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[64].bloodctO2content.totalO2", 1, 5, 11964, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].pH", "[1|1]", "o2CO2curves1.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 11954, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[64].bloodctCO2content.cdCO2p", 1, 5, 11974, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[64].bloodctO2content.cdO2p", 1, 5, 11965, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 11954, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 11954, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 11954, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[64].bloodctO2content.sO2", 1,\
 5, 11963, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[64].bloodctO2content.ceHb", 1, 5, 11966, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[64].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[65].bloodctO2content.sO2", 1,\
 5, 11994, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[65].bloodctCO2content.cHCO3", 1, 5, 12004, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[65].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[65].bloodctO2content.pO2", 1,\
 5, 11988, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[65].bloodctCO2content.ctCO2", 1, 5, 12003, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[65].bloodctO2content.totalO2", 1, 5, 11995, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].pH", "[1|1]", "o2CO2curves1.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 11985, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[65].bloodctCO2content.cdCO2p", 1, 5, 12005, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[65].bloodctO2content.cdO2p", 1, 5, 11996, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 11985, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 11985, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 11985, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[65].bloodctO2content.sO2", 1,\
 5, 11994, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[65].bloodctO2content.ceHb", 1, 5, 11997, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[65].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[66].bloodctO2content.sO2", 1,\
 5, 12025, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[66].bloodctCO2content.cHCO3", 1, 5, 12035, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[66].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[66].bloodctO2content.pO2", 1,\
 5, 12019, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[66].bloodctCO2content.ctCO2", 1, 5, 12034, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[66].bloodctO2content.totalO2", 1, 5, 12026, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].pH", "[1|1]", "o2CO2curves1.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 12016, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[66].bloodctCO2content.cdCO2p", 1, 5, 12036, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[66].bloodctO2content.cdO2p", 1, 5, 12027, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 12016, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 12016, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 12016, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[66].bloodctO2content.sO2", 1,\
 5, 12025, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[66].bloodctO2content.ceHb", 1, 5, 12028, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[66].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[67].bloodctO2content.sO2", 1,\
 5, 12056, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[67].bloodctCO2content.cHCO3", 1, 5, 12066, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[67].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[67].bloodctO2content.pO2", 1,\
 5, 12050, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[67].bloodctCO2content.ctCO2", 1, 5, 12065, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[67].bloodctO2content.totalO2", 1, 5, 12057, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].pH", "[1|1]", "o2CO2curves1.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 12047, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[67].bloodctCO2content.cdCO2p", 1, 5, 12067, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[67].bloodctO2content.cdO2p", 1, 5, 12058, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 12047, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 12047, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 12047, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[67].bloodctO2content.sO2", 1,\
 5, 12056, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[67].bloodctO2content.ceHb", 1, 5, 12059, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[67].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[68].bloodctO2content.sO2", 1,\
 5, 12087, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[68].bloodctCO2content.cHCO3", 1, 5, 12097, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[68].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[68].bloodctO2content.pO2", 1,\
 5, 12081, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[68].bloodctCO2content.ctCO2", 1, 5, 12096, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[68].bloodctO2content.totalO2", 1, 5, 12088, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].pH", "[1|1]", "o2CO2curves1.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 12078, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[68].bloodctCO2content.cdCO2p", 1, 5, 12098, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[68].bloodctO2content.cdO2p", 1, 5, 12089, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 12078, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 12078, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 12078, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[68].bloodctO2content.sO2", 1,\
 5, 12087, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[68].bloodctO2content.ceHb", 1, 5, 12090, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[68].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[69].bloodctO2content.sO2", 1,\
 5, 12118, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[69].bloodctCO2content.cHCO3", 1, 5, 12128, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[69].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[69].bloodctO2content.pO2", 1,\
 5, 12112, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[69].bloodctCO2content.ctCO2", 1, 5, 12127, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[69].bloodctO2content.totalO2", 1, 5, 12119, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].pH", "[1|1]", "o2CO2curves1.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 12109, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[69].bloodctCO2content.cdCO2p", 1, 5, 12129, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[69].bloodctO2content.cdO2p", 1, 5, 12120, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
EndNonAlias(16)
PreNonAliasNew(17)
StartNonAlias(17)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 12109, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 12109, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 12109, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[69].bloodctO2content.sO2", 1,\
 5, 12118, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[69].bloodctO2content.ceHb", 1, 5, 12121, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[69].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[70].bloodctO2content.sO2", 1,\
 5, 12149, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[70].bloodctCO2content.cHCO3", 1, 5, 12159, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[70].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[70].bloodctO2content.pO2", 1,\
 5, 12143, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[70].bloodctCO2content.ctCO2", 1, 5, 12158, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[70].bloodctO2content.totalO2", 1, 5, 12150, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].pH", "[1|1]", "o2CO2curves1.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 12140, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[70].bloodctCO2content.cdCO2p", 1, 5, 12160, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[70].bloodctO2content.cdO2p", 1, 5, 12151, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 12140, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 12140, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 12140, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[70].bloodctO2content.sO2", 1,\
 5, 12149, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[70].bloodctO2content.ceHb", 1, 5, 12152, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[70].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[71].bloodctO2content.sO2", 1,\
 5, 12180, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[71].bloodctCO2content.cHCO3", 1, 5, 12190, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[71].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[71].bloodctO2content.pO2", 1,\
 5, 12174, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[71].bloodctCO2content.ctCO2", 1, 5, 12189, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[71].bloodctO2content.totalO2", 1, 5, 12181, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].pH", "[1|1]", "o2CO2curves1.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 12171, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[71].bloodctCO2content.cdCO2p", 1, 5, 12191, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[71].bloodctO2content.cdO2p", 1, 5, 12182, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 12171, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 12171, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 12171, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[71].bloodctO2content.sO2", 1,\
 5, 12180, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[71].bloodctO2content.ceHb", 1, 5, 12183, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[71].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[72].bloodctO2content.sO2", 1,\
 5, 12211, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[72].bloodctCO2content.cHCO3", 1, 5, 12221, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[72].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[72].bloodctO2content.pO2", 1,\
 5, 12205, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[72].bloodctCO2content.ctCO2", 1, 5, 12220, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[72].bloodctO2content.totalO2", 1, 5, 12212, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].pH", "[1|1]", "o2CO2curves1.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 12202, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[72].bloodctCO2content.cdCO2p", 1, 5, 12222, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[72].bloodctO2content.cdO2p", 1, 5, 12213, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 12202, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 12202, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 12202, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[72].bloodctO2content.sO2", 1,\
 5, 12211, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[72].bloodctO2content.ceHb", 1, 5, 12214, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[72].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[73].bloodctO2content.sO2", 1,\
 5, 12242, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[73].bloodctCO2content.cHCO3", 1, 5, 12252, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[73].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[73].bloodctO2content.pO2", 1,\
 5, 12236, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[73].bloodctCO2content.ctCO2", 1, 5, 12251, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[73].bloodctO2content.totalO2", 1, 5, 12243, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].pH", "[1|1]", "o2CO2curves1.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 12233, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[73].bloodctCO2content.cdCO2p", 1, 5, 12253, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[73].bloodctO2content.cdO2p", 1, 5, 12244, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 12233, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 12233, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 12233, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[73].bloodctO2content.sO2", 1,\
 5, 12242, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[73].bloodctO2content.ceHb", 1, 5, 12245, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[73].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[74].bloodctO2content.sO2", 1,\
 5, 12273, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[74].bloodctCO2content.cHCO3", 1, 5, 12283, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[74].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[74].bloodctO2content.pO2", 1,\
 5, 12267, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[74].bloodctCO2content.ctCO2", 1, 5, 12282, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[74].bloodctO2content.totalO2", 1, 5, 12274, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].pH", "[1|1]", "o2CO2curves1.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 12264, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[74].bloodctCO2content.cdCO2p", 1, 5, 12284, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[74].bloodctO2content.cdO2p", 1, 5, 12275, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 12264, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 12264, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 12264, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[74].bloodctO2content.sO2", 1,\
 5, 12273, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[74].bloodctO2content.ceHb", 1, 5, 12276, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[74].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[75].bloodctO2content.sO2", 1,\
 5, 12304, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[75].bloodctCO2content.cHCO3", 1, 5, 12314, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[75].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[75].bloodctO2content.pO2", 1,\
 5, 12298, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[75].bloodctCO2content.ctCO2", 1, 5, 12313, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[75].bloodctO2content.totalO2", 1, 5, 12305, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].pH", "[1|1]", "o2CO2curves1.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 12295, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[75].bloodctCO2content.cdCO2p", 1, 5, 12315, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[75].bloodctO2content.cdO2p", 1, 5, 12306, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 12295, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 12295, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 12295, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[75].bloodctO2content.sO2", 1,\
 5, 12304, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[75].bloodctO2content.ceHb", 1, 5, 12307, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[75].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[76].bloodctO2content.sO2", 1,\
 5, 12335, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[76].bloodctCO2content.cHCO3", 1, 5, 12345, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[76].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[76].bloodctO2content.pO2", 1,\
 5, 12329, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[76].bloodctCO2content.ctCO2", 1, 5, 12344, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[76].bloodctO2content.totalO2", 1, 5, 12336, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].pH", "[1|1]", "o2CO2curves1.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 12326, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[76].bloodctCO2content.cdCO2p", 1, 5, 12346, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[76].bloodctO2content.cdO2p", 1, 5, 12337, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 12326, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 12326, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 12326, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[76].bloodctO2content.sO2", 1,\
 5, 12335, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[76].bloodctO2content.ceHb", 1, 5, 12338, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[76].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[77].bloodctO2content.sO2", 1,\
 5, 12366, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[77].bloodctCO2content.cHCO3", 1, 5, 12376, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[77].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[77].bloodctO2content.pO2", 1,\
 5, 12360, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[77].bloodctCO2content.ctCO2", 1, 5, 12375, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[77].bloodctO2content.totalO2", 1, 5, 12367, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].pH", "[1|1]", "o2CO2curves1.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 12357, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[77].bloodctCO2content.cdCO2p", 1, 5, 12377, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[77].bloodctO2content.cdO2p", 1, 5, 12368, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 12357, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 12357, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 12357, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[77].bloodctO2content.sO2", 1,\
 5, 12366, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[77].bloodctO2content.ceHb", 1, 5, 12369, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[77].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[78].bloodctO2content.sO2", 1,\
 5, 12397, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[78].bloodctCO2content.cHCO3", 1, 5, 12407, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[78].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[78].bloodctO2content.pO2", 1,\
 5, 12391, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[78].bloodctCO2content.ctCO2", 1, 5, 12406, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[78].bloodctO2content.totalO2", 1, 5, 12398, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].pH", "[1|1]", "o2CO2curves1.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 12388, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[78].bloodctCO2content.cdCO2p", 1, 5, 12408, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[78].bloodctO2content.cdO2p", 1, 5, 12399, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 12388, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 12388, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 12388, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[78].bloodctO2content.sO2", 1,\
 5, 12397, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[78].bloodctO2content.ceHb", 1, 5, 12400, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[78].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[79].bloodctO2content.sO2", 1,\
 5, 12428, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[79].bloodctCO2content.cHCO3", 1, 5, 12438, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[79].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[79].bloodctO2content.pO2", 1,\
 5, 12422, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[79].bloodctCO2content.ctCO2", 1, 5, 12437, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[79].bloodctO2content.totalO2", 1, 5, 12429, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].pH", "[1|1]", "o2CO2curves1.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 12419, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[79].bloodctCO2content.cdCO2p", 1, 5, 12439, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[79].bloodctO2content.cdO2p", 1, 5, 12430, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 12419, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 12419, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 12419, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[79].bloodctO2content.sO2", 1,\
 5, 12428, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[79].bloodctO2content.ceHb", 1, 5, 12431, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[79].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[80].bloodctO2content.sO2", 1,\
 5, 12459, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[80].bloodctCO2content.cHCO3", 1, 5, 12469, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[80].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[80].bloodctO2content.pO2", 1,\
 5, 12453, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[80].bloodctCO2content.ctCO2", 1, 5, 12468, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[80].bloodctO2content.totalO2", 1, 5, 12460, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].pH", "[1|1]", "o2CO2curves1.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 12450, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[80].bloodctCO2content.cdCO2p", 1, 5, 12470, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[80].bloodctO2content.cdO2p", 1, 5, 12461, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 12450, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 12450, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 12450, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[80].bloodctO2content.sO2", 1,\
 5, 12459, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[80].bloodctO2content.ceHb", 1, 5, 12462, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[80].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[81].bloodctO2content.sO2", 1,\
 5, 12490, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[81].bloodctCO2content.cHCO3", 1, 5, 12500, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[81].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[81].bloodctO2content.pO2", 1,\
 5, 12484, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[81].bloodctCO2content.ctCO2", 1, 5, 12499, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[81].bloodctO2content.totalO2", 1, 5, 12491, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].pH", "[1|1]", "o2CO2curves1.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 12481, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[81].bloodctCO2content.cdCO2p", 1, 5, 12501, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[81].bloodctO2content.cdO2p", 1, 5, 12492, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 12481, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 12481, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 12481, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[81].bloodctO2content.sO2", 1,\
 5, 12490, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[81].bloodctO2content.ceHb", 1, 5, 12493, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[81].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[82].bloodctO2content.sO2", 1,\
 5, 12521, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[82].bloodctCO2content.cHCO3", 1, 5, 12531, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[82].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[82].bloodctO2content.pO2", 1,\
 5, 12515, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[82].bloodctCO2content.ctCO2", 1, 5, 12530, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[82].bloodctO2content.totalO2", 1, 5, 12522, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].pH", "[1|1]", "o2CO2curves1.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 12512, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[82].bloodctCO2content.cdCO2p", 1, 5, 12532, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[82].bloodctO2content.cdO2p", 1, 5, 12523, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 12512, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 12512, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 12512, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[82].bloodctO2content.sO2", 1,\
 5, 12521, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[82].bloodctO2content.ceHb", 1, 5, 12524, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[82].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[83].bloodctO2content.sO2", 1,\
 5, 12552, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[83].bloodctCO2content.cHCO3", 1, 5, 12562, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[83].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[83].bloodctO2content.pO2", 1,\
 5, 12546, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[83].bloodctCO2content.ctCO2", 1, 5, 12561, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[83].bloodctO2content.totalO2", 1, 5, 12553, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].pH", "[1|1]", "o2CO2curves1.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 12543, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[83].bloodctCO2content.cdCO2p", 1, 5, 12563, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[83].bloodctO2content.cdO2p", 1, 5, 12554, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 12543, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 12543, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 12543, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[83].bloodctO2content.sO2", 1,\
 5, 12552, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[83].bloodctO2content.ceHb", 1, 5, 12555, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[83].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[84].bloodctO2content.sO2", 1,\
 5, 12583, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[84].bloodctCO2content.cHCO3", 1, 5, 12593, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[84].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[84].bloodctO2content.pO2", 1,\
 5, 12577, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[84].bloodctCO2content.ctCO2", 1, 5, 12592, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[84].bloodctO2content.totalO2", 1, 5, 12584, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].pH", "[1|1]", "o2CO2curves1.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 12574, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[84].bloodctCO2content.cdCO2p", 1, 5, 12594, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[84].bloodctO2content.cdO2p", 1, 5, 12585, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 12574, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 12574, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 12574, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[84].bloodctO2content.sO2", 1,\
 5, 12583, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[84].bloodctO2content.ceHb", 1, 5, 12586, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[84].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[85].bloodctO2content.sO2", 1,\
 5, 12614, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[85].bloodctCO2content.cHCO3", 1, 5, 12624, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[85].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[85].bloodctO2content.pO2", 1,\
 5, 12608, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[85].bloodctCO2content.ctCO2", 1, 5, 12623, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[85].bloodctO2content.totalO2", 1, 5, 12615, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].pH", "[1|1]", "o2CO2curves1.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 12605, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[85].bloodctCO2content.cdCO2p", 1, 5, 12625, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[85].bloodctO2content.cdO2p", 1, 5, 12616, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 12605, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 12605, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 12605, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[85].bloodctO2content.sO2", 1,\
 5, 12614, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[85].bloodctO2content.ceHb", 1, 5, 12617, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[85].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[86].bloodctO2content.sO2", 1,\
 5, 12645, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[86].bloodctCO2content.cHCO3", 1, 5, 12655, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[86].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[86].bloodctO2content.pO2", 1,\
 5, 12639, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[86].bloodctCO2content.ctCO2", 1, 5, 12654, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[86].bloodctO2content.totalO2", 1, 5, 12646, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].pH", "[1|1]", "o2CO2curves1.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 12636, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[86].bloodctCO2content.cdCO2p", 1, 5, 12656, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[86].bloodctO2content.cdO2p", 1, 5, 12647, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 12636, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 12636, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 12636, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[86].bloodctO2content.sO2", 1,\
 5, 12645, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[86].bloodctO2content.ceHb", 1, 5, 12648, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[86].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[87].bloodctO2content.sO2", 1,\
 5, 12676, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[87].bloodctCO2content.cHCO3", 1, 5, 12686, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[87].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[87].bloodctO2content.pO2", 1,\
 5, 12670, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[87].bloodctCO2content.ctCO2", 1, 5, 12685, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[87].bloodctO2content.totalO2", 1, 5, 12677, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].pH", "[1|1]", "o2CO2curves1.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 12667, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[87].bloodctCO2content.cdCO2p", 1, 5, 12687, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[87].bloodctO2content.cdO2p", 1, 5, 12678, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 12667, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 12667, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 12667, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[87].bloodctO2content.sO2", 1,\
 5, 12676, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[87].bloodctO2content.ceHb", 1, 5, 12679, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[87].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[88].bloodctO2content.sO2", 1,\
 5, 12707, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[88].bloodctCO2content.cHCO3", 1, 5, 12717, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[88].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[88].bloodctO2content.pO2", 1,\
 5, 12701, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[88].bloodctCO2content.ctCO2", 1, 5, 12716, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[88].bloodctO2content.totalO2", 1, 5, 12708, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].pH", "[1|1]", "o2CO2curves1.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 12698, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[88].bloodctCO2content.cdCO2p", 1, 5, 12718, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[88].bloodctO2content.cdO2p", 1, 5, 12709, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 12698, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 12698, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 12698, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[88].bloodctO2content.sO2", 1,\
 5, 12707, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[88].bloodctO2content.ceHb", 1, 5, 12710, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[88].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[89].bloodctO2content.sO2", 1,\
 5, 12738, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[89].bloodctCO2content.cHCO3", 1, 5, 12748, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[89].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[89].bloodctO2content.pO2", 1,\
 5, 12732, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[89].bloodctCO2content.ctCO2", 1, 5, 12747, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[89].bloodctO2content.totalO2", 1, 5, 12739, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].pH", "[1|1]", "o2CO2curves1.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 12729, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[89].bloodctCO2content.cdCO2p", 1, 5, 12749, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[89].bloodctO2content.cdO2p", 1, 5, 12740, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 12729, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 12729, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 12729, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[89].bloodctO2content.sO2", 1,\
 5, 12738, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[89].bloodctO2content.ceHb", 1, 5, 12741, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[89].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[90].bloodctO2content.sO2", 1,\
 5, 12769, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[90].bloodctCO2content.cHCO3", 1, 5, 12779, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[90].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[90].bloodctO2content.pO2", 1,\
 5, 12763, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[90].bloodctCO2content.ctCO2", 1, 5, 12778, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[90].bloodctO2content.totalO2", 1, 5, 12770, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].pH", "[1|1]", "o2CO2curves1.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 12760, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[90].bloodctCO2content.cdCO2p", 1, 5, 12780, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[90].bloodctO2content.cdO2p", 1, 5, 12771, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 12760, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 12760, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 12760, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[90].bloodctO2content.sO2", 1,\
 5, 12769, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[90].bloodctO2content.ceHb", 1, 5, 12772, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[90].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[91].bloodctO2content.sO2", 1,\
 5, 12800, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[91].bloodctCO2content.cHCO3", 1, 5, 12810, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[91].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[91].bloodctO2content.pO2", 1,\
 5, 12794, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[91].bloodctCO2content.ctCO2", 1, 5, 12809, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[91].bloodctO2content.totalO2", 1, 5, 12801, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].pH", "[1|1]", "o2CO2curves1.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 12791, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[91].bloodctCO2content.cdCO2p", 1, 5, 12811, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[91].bloodctO2content.cdO2p", 1, 5, 12802, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 12791, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 12791, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 12791, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[91].bloodctO2content.sO2", 1,\
 5, 12800, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[91].bloodctO2content.ceHb", 1, 5, 12803, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[91].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[92].bloodctO2content.sO2", 1,\
 5, 12831, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[92].bloodctCO2content.cHCO3", 1, 5, 12841, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[92].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[92].bloodctO2content.pO2", 1,\
 5, 12825, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[92].bloodctCO2content.ctCO2", 1, 5, 12840, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[92].bloodctO2content.totalO2", 1, 5, 12832, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].pH", "[1|1]", "o2CO2curves1.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 12822, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[92].bloodctCO2content.cdCO2p", 1, 5, 12842, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[92].bloodctO2content.cdO2p", 1, 5, 12833, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 12822, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 12822, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 12822, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[92].bloodctO2content.sO2", 1,\
 5, 12831, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[92].bloodctO2content.ceHb", 1, 5, 12834, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[92].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[93].bloodctO2content.sO2", 1,\
 5, 12862, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[93].bloodctCO2content.cHCO3", 1, 5, 12872, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[93].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[93].bloodctO2content.pO2", 1,\
 5, 12856, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[93].bloodctCO2content.ctCO2", 1, 5, 12871, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[93].bloodctO2content.totalO2", 1, 5, 12863, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].pH", "[1|1]", "o2CO2curves1.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 12853, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[93].bloodctCO2content.cdCO2p", 1, 5, 12873, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[93].bloodctO2content.cdO2p", 1, 5, 12864, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 12853, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 12853, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 12853, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[93].bloodctO2content.sO2", 1,\
 5, 12862, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[93].bloodctO2content.ceHb", 1, 5, 12865, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[93].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[94].bloodctO2content.sO2", 1,\
 5, 12893, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[94].bloodctCO2content.cHCO3", 1, 5, 12903, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[94].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[94].bloodctO2content.pO2", 1,\
 5, 12887, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[94].bloodctCO2content.ctCO2", 1, 5, 12902, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[94].bloodctO2content.totalO2", 1, 5, 12894, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].pH", "[1|1]", "o2CO2curves1.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 12884, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[94].bloodctCO2content.cdCO2p", 1, 5, 12904, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[94].bloodctO2content.cdO2p", 1, 5, 12895, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 12884, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 12884, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 12884, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[94].bloodctO2content.sO2", 1,\
 5, 12893, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[94].bloodctO2content.ceHb", 1, 5, 12896, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[94].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[95].bloodctO2content.sO2", 1,\
 5, 12924, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[95].bloodctCO2content.cHCO3", 1, 5, 12934, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[95].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[95].bloodctO2content.pO2", 1,\
 5, 12918, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[95].bloodctCO2content.ctCO2", 1, 5, 12933, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[95].bloodctO2content.totalO2", 1, 5, 12925, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].pH", "[1|1]", "o2CO2curves1.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 12915, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[95].bloodctCO2content.cdCO2p", 1, 5, 12935, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[95].bloodctO2content.cdO2p", 1, 5, 12926, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 12915, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 12915, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 12915, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[95].bloodctO2content.sO2", 1,\
 5, 12924, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[95].bloodctO2content.ceHb", 1, 5, 12927, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[95].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[96].bloodctO2content.sO2", 1,\
 5, 12955, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[96].bloodctCO2content.cHCO3", 1, 5, 12965, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[96].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[96].bloodctO2content.pO2", 1,\
 5, 12949, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[96].bloodctCO2content.ctCO2", 1, 5, 12964, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[96].bloodctO2content.totalO2", 1, 5, 12956, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].pH", "[1|1]", "o2CO2curves1.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 12946, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[96].bloodctCO2content.cdCO2p", 1, 5, 12966, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[96].bloodctO2content.cdO2p", 1, 5, 12957, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 12946, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 12946, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 12946, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[96].bloodctO2content.sO2", 1,\
 5, 12955, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[96].bloodctO2content.ceHb", 1, 5, 12958, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[96].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[97].bloodctO2content.sO2", 1,\
 5, 12986, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[97].bloodctCO2content.cHCO3", 1, 5, 12996, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[97].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[97].bloodctO2content.pO2", 1,\
 5, 12980, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[97].bloodctCO2content.ctCO2", 1, 5, 12995, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[97].bloodctO2content.totalO2", 1, 5, 12987, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].pH", "[1|1]", "o2CO2curves1.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 12977, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[97].bloodctCO2content.cdCO2p", 1, 5, 12997, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[97].bloodctO2content.cdO2p", 1, 5, 12988, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 12977, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 12977, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 12977, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[97].bloodctO2content.sO2", 1,\
 5, 12986, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[97].bloodctO2content.ceHb", 1, 5, 12989, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[97].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[98].bloodctO2content.sO2", 1,\
 5, 13017, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[98].bloodctCO2content.cHCO3", 1, 5, 13027, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[98].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[98].bloodctO2content.pO2", 1,\
 5, 13011, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[98].bloodctCO2content.ctCO2", 1, 5, 13026, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[98].bloodctO2content.totalO2", 1, 5, 13018, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].pH", "[1|1]", "o2CO2curves1.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 13008, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[98].bloodctCO2content.cdCO2p", 1, 5, 13028, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[98].bloodctO2content.cdO2p", 1, 5, 13019, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 13008, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 13008, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 13008, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[98].bloodctO2content.sO2", 1,\
 5, 13017, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[98].bloodctO2content.ceHb", 1, 5, 13020, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[98].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[99].bloodctO2content.sO2", 1,\
 5, 13048, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[99].bloodctCO2content.cHCO3", 1, 5, 13058, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[99].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[99].bloodctO2content.pO2", 1,\
 5, 13042, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[99].bloodctCO2content.ctCO2", 1, 5, 13057, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[99].bloodctO2content.totalO2", 1, 5, 13049, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].pH", "[1|1]", "o2CO2curves1.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 13039, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[99].bloodctCO2content.cdCO2p", 1, 5, 13059, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[99].bloodctO2content.cdO2p", 1, 5, 13050, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 13039, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 13039, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 13039, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[99].bloodctO2content.sO2", 1,\
 5, 13048, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[99].bloodctO2content.ceHb", 1, 5, 13051, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[99].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[100].bloodctO2content.sO2", 1,\
 5, 13079, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[100].bloodctCO2content.cHCO3", 1, 5, 13089, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[100].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[100].bloodctO2content.pO2", 1,\
 5, 13073, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[100].bloodctCO2content.ctCO2", 1, 5, 13088, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[100].bloodctO2content.totalO2", 1, 5, 13080, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].pH", "[1|1]", "o2CO2curves1.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 13070, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[100].bloodctCO2content.cdCO2p", 1, 5, 13090, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[100].bloodctO2content.cdO2p", 1, 5, 13081, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.pCO2", \
"[Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.FMetHb", "[1|%]",\
 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.sO2", "[1|%]", \
0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.pH", "[1|1]", \
0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 13070, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 13070, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 13070, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[100].bloodctO2content.sO2", 1,\
 5, 13079, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[100].bloodctO2content.ceHb", 1, 5, 13082, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[100].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].sO2", "[1|%]", "o2CO2curves1.ctO2_curve[101].bloodctO2content.sO2", 1,\
 5, 13110, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[101].bloodctCO2content.cHCO3", 1, 5, 13120, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].T", "[K|degC]", "bodyTemperature.k", 1,\
 7, 54, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[101].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].cDPG", "[mol/m3|mmol/l]", \
"modelSettings.cDPG", 1, 7, 12, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].FMetHb", "[1|%]", "modelSettings.FMetHb", 1,\
 7, 13, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].FHbF", "[1|%]", "modelSettings.FHbF", 1,\
 7, 15, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].pO2", "[Pa|mmHg]", "o2CO2curves1.ctO2_curve[101].bloodctO2content.pO2", 1,\
 5, 13104, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].pCO2", "[Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[101].bloodctCO2content.ctCO2", 1, 5, 13119, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[101].bloodctO2content.totalO2", 1, 5, 13111, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].BEox", "[mol/m3|mmol/l]", "BEox.k", 1,\
 7, 52, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "modelSettings.cAlb", 1, 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].pH", "[1|1]", "o2CO2curves1.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 13101, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[101].bloodctCO2content.cdCO2p", 1, 5, 13121, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctO2_curve[101].bloodctO2content.cdO2p", 1, 5, 13112, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].FHbCO", "[1|%]", "modelSettings.FCOHb", 1,\
 7, 14, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.pH", "[1|1]", 7.4,\
 0.0,14.0,7.0,0,704)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.pCO2", \
"[Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.pO2", "[Pa|mmHg]",\
 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.FHbF", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.FMetHb", "[1|%]",\
 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 9.309000000000001, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.sO2", "[1|%]", \
0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.pH", "[1|1]", \
0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "simplestTissue.venBlood.bloodctO2content.pCO2", 1,\
 5, 19, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cAlb", 1,\
 7, 10, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves1.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 13101, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox.k", 1, 7, 52, 0)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,640)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 9.309000000000001, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,640)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "bodyTemperature.k", 1, 7, 54, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "alvEq_2units_with_shunts_and_mixing1.alvEq1.inverseBlockConstraints1.u1", 1,\
 5, 71, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 13101, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves1.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 13101, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "modelSettings.cPi", 1,\
 7, 11, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves1.ctO2_curve[101].bloodctO2content.sO2", 1,\
 5, 13110, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves1.ctO2_curve[101].bloodctO2content.ceHb", 1, 5, 13113, 0)
DeclareAlias2("o2CO2curves1.ctO2_curve[101].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "modelSettings.cPi", 1, 7, 11, 0)
DeclareAlias2("o2CO2curves1.dctCO2_array[1]", "[mol/m3|mmol/l]", \
"o2CO2curves1.ctCO2_curve[1].bloodctCO2content.ctCO2", 1, 5, 6888, 0)
DeclareVariable("o2CO2curves1.dctCO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[10]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[11]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[12]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[13]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[14]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[15]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[16]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[17]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[18]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[19]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[20]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[21]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[22]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[23]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[24]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[25]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[26]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[27]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[28]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[29]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[30]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[31]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[32]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[33]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[34]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[35]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[36]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[37]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[38]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[39]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[40]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[41]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[42]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[43]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[44]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[45]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[46]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[47]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[48]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[49]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[50]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[51]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[52]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[53]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[54]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[55]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[56]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
EndNonAlias(17)
PreNonAliasNew(18)
StartNonAlias(18)
DeclareVariable("o2CO2curves1.dctCO2_array[57]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[58]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[59]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[60]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[61]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[62]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[63]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[64]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[65]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[66]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[67]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[68]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[69]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[70]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[71]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[72]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[73]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[74]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[75]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[76]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[77]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[78]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[79]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[80]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[81]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[82]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[83]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[84]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[85]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[86]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[87]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[88]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[89]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[90]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[91]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[92]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[93]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[94]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[95]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[96]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[97]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[98]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[99]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[100]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctCO2_array[101]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareAlias2("o2CO2curves1.dctO2_array[1]", "[mol/m3|mmol/l]", "o2CO2curves1.ctO2_curve[1].bloodctO2content.totalO2", 1,\
 5, 10011, 0)
DeclareVariable("o2CO2curves1.dctO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[10]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[11]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[12]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[13]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[14]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[15]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[16]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[17]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[18]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[19]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[20]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[21]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[22]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[23]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[24]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[25]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[26]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[27]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[28]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[29]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[30]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[31]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[32]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[33]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[34]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[35]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[36]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[37]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[38]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[39]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[40]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[41]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[42]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[43]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[44]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[45]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[46]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[47]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[48]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[49]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[50]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[51]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[52]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[53]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[54]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[55]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[56]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[57]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[58]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[59]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[60]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[61]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[62]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[63]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[64]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[65]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[66]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[67]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[68]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[69]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[70]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[71]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[72]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[73]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[74]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[75]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[76]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[77]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[78]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[79]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[80]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[81]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[82]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[83]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[84]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[85]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[86]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[87]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[88]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[89]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[90]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[91]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[92]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[93]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[94]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[95]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[96]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[97]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[98]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[99]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[100]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.dctO2_array[101]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[1]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[10]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[11]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[12]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[13]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[14]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[15]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[16]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[17]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[18]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[19]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[20]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[21]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[22]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[23]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[24]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[25]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[26]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[27]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[28]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[29]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[30]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[31]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[32]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[33]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[34]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[35]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[36]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[37]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[38]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[39]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[40]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[41]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[42]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[43]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[44]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[45]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[46]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[47]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[48]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[49]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[50]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[51]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[52]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[53]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[54]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[55]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[56]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[57]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[58]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[59]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[60]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[61]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[62]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[63]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[64]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[65]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[66]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[67]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[68]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[69]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[70]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[71]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[72]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[73]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[74]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[75]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[76]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[77]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[78]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[79]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[80]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[81]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[82]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[83]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[84]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[85]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[86]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[87]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[88]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[89]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[90]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[91]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[92]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[93]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[94]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[95]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[96]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[97]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[98]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[99]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[100]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctCO2_array[101]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[1]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[2]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[3]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[4]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[5]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[6]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[7]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[8]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[9]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[10]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[11]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[12]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[13]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[14]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[15]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[16]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[17]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[18]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[19]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[20]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[21]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[22]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[23]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[24]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[25]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[26]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[27]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[28]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[29]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[30]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[31]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[32]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[33]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[34]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[35]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[36]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[37]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[38]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[39]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[40]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[41]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[42]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[43]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[44]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[45]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[46]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[47]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[48]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[49]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[50]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[51]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[52]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[53]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[54]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[55]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[56]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[57]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[58]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[59]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[60]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[61]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[62]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[63]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[64]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[65]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[66]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[67]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[68]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[69]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[70]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[71]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[72]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[73]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[74]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[75]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[76]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[77]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[78]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[79]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[80]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[81]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[82]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[83]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[84]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[85]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[86]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[87]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[88]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[89]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[90]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[91]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[92]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[93]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[94]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[95]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[96]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[97]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[98]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[99]", "[mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[100]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.r_ctO2_array[101]", "[mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,640)
DeclareVariable("o2CO2curves1.ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 9.309000000000001, 1E-60,1E+60,0.0,0,513)
EndNonAlias(18)
PreNonAliasNew(19)
