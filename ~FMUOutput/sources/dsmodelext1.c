#include <moutil.c>
PreNonAliasDef(6)
PreNonAliasDef(7)
PreNonAliasDef(8)
PreNonAliasDef(9)
PreNonAliasDef(10)
StartNonAlias(5)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[36].bloodctO2content.pH", 1, 5, 4426, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[36].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[36].bloodctO2content.pH", 1,\
 5, 4426, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[36].bloodctO2content.pH", 1,\
 5, 4426, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[36].bloodctO2content.sO2", 1,\
 5, 4435, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[36].bloodctO2content.ceHb", 1, 5, 4438, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[36].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].sO2", "[1|%]", "o2CO2curves.ctO2_curve[37].bloodctO2content.sO2", 1,\
 5, 4464, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[37].bloodctCO2content.cHCO3", 1, 5, 4474, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[37].bloodctO2content.pO2", 1,\
 5, 4458, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[37].bloodctCO2content.ctCO2", 1, 5, 4473, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[37].bloodctO2content.totalO2", 1, 5, 4465, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].pH", "[1|1]", "o2CO2curves.ctO2_curve[37].bloodctO2content.pH", 1,\
 5, 4455, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[37].bloodctCO2content.cdCO2p", 1, 5, 4475, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[37].bloodctO2content.cdO2p", 1, 5, 4466, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[37].bloodctO2content.pH", 1, 5, 4455, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[37].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[37].bloodctO2content.pH", 1,\
 5, 4455, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[37].bloodctO2content.pH", 1,\
 5, 4455, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[37].bloodctO2content.sO2", 1,\
 5, 4464, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[37].bloodctO2content.ceHb", 1, 5, 4467, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[37].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].sO2", "[1|%]", "o2CO2curves.ctO2_curve[38].bloodctO2content.sO2", 1,\
 5, 4493, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[38].bloodctCO2content.cHCO3", 1, 5, 4503, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[38].bloodctO2content.pO2", 1,\
 5, 4487, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[38].bloodctCO2content.ctCO2", 1, 5, 4502, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[38].bloodctO2content.totalO2", 1, 5, 4494, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].pH", "[1|1]", "o2CO2curves.ctO2_curve[38].bloodctO2content.pH", 1,\
 5, 4484, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[38].bloodctCO2content.cdCO2p", 1, 5, 4504, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[38].bloodctO2content.cdO2p", 1, 5, 4495, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[38].bloodctO2content.pH", 1, 5, 4484, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[38].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[38].bloodctO2content.pH", 1,\
 5, 4484, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[38].bloodctO2content.pH", 1,\
 5, 4484, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[38].bloodctO2content.sO2", 1,\
 5, 4493, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[38].bloodctO2content.ceHb", 1, 5, 4496, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[38].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].sO2", "[1|%]", "o2CO2curves.ctO2_curve[39].bloodctO2content.sO2", 1,\
 5, 4522, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[39].bloodctCO2content.cHCO3", 1, 5, 4532, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[39].bloodctO2content.pO2", 1,\
 5, 4516, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[39].bloodctCO2content.ctCO2", 1, 5, 4531, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[39].bloodctO2content.totalO2", 1, 5, 4523, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].pH", "[1|1]", "o2CO2curves.ctO2_curve[39].bloodctO2content.pH", 1,\
 5, 4513, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[39].bloodctCO2content.cdCO2p", 1, 5, 4533, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[39].bloodctO2content.cdO2p", 1, 5, 4524, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[39].bloodctO2content.pH", 1, 5, 4513, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[39].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[39].bloodctO2content.pH", 1,\
 5, 4513, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[39].bloodctO2content.pH", 1,\
 5, 4513, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[39].bloodctO2content.sO2", 1,\
 5, 4522, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[39].bloodctO2content.ceHb", 1, 5, 4525, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[39].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].sO2", "[1|%]", "o2CO2curves.ctO2_curve[40].bloodctO2content.sO2", 1,\
 5, 4551, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[40].bloodctCO2content.cHCO3", 1, 5, 4561, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[40].bloodctO2content.pO2", 1,\
 5, 4545, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[40].bloodctCO2content.ctCO2", 1, 5, 4560, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[40].bloodctO2content.totalO2", 1, 5, 4552, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].pH", "[1|1]", "o2CO2curves.ctO2_curve[40].bloodctO2content.pH", 1,\
 5, 4542, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[40].bloodctCO2content.cdCO2p", 1, 5, 4562, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[40].bloodctO2content.cdO2p", 1, 5, 4553, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[40].bloodctO2content.pH", 1, 5, 4542, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[40].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[40].bloodctO2content.pH", 1,\
 5, 4542, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[40].bloodctO2content.pH", 1,\
 5, 4542, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[40].bloodctO2content.sO2", 1,\
 5, 4551, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[40].bloodctO2content.ceHb", 1, 5, 4554, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[40].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].sO2", "[1|%]", "o2CO2curves.ctO2_curve[41].bloodctO2content.sO2", 1,\
 5, 4580, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[41].bloodctCO2content.cHCO3", 1, 5, 4590, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[41].bloodctO2content.pO2", 1,\
 5, 4574, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[41].bloodctCO2content.ctCO2", 1, 5, 4589, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[41].bloodctO2content.totalO2", 1, 5, 4581, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].pH", "[1|1]", "o2CO2curves.ctO2_curve[41].bloodctO2content.pH", 1,\
 5, 4571, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[41].bloodctCO2content.cdCO2p", 1, 5, 4591, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[41].bloodctO2content.cdO2p", 1, 5, 4582, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[41].bloodctO2content.pH", 1, 5, 4571, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[41].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[41].bloodctO2content.pH", 1,\
 5, 4571, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[41].bloodctO2content.pH", 1,\
 5, 4571, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[41].bloodctO2content.sO2", 1,\
 5, 4580, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[41].bloodctO2content.ceHb", 1, 5, 4583, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[41].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].sO2", "[1|%]", "o2CO2curves.ctO2_curve[42].bloodctO2content.sO2", 1,\
 5, 4609, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[42].bloodctCO2content.cHCO3", 1, 5, 4619, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[42].bloodctO2content.pO2", 1,\
 5, 4603, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[42].bloodctCO2content.ctCO2", 1, 5, 4618, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[42].bloodctO2content.totalO2", 1, 5, 4610, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].pH", "[1|1]", "o2CO2curves.ctO2_curve[42].bloodctO2content.pH", 1,\
 5, 4600, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[42].bloodctCO2content.cdCO2p", 1, 5, 4620, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[42].bloodctO2content.cdO2p", 1, 5, 4611, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[42].bloodctO2content.pH", 1, 5, 4600, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[42].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[42].bloodctO2content.pH", 1,\
 5, 4600, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[42].bloodctO2content.pH", 1,\
 5, 4600, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[42].bloodctO2content.sO2", 1,\
 5, 4609, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[42].bloodctO2content.ceHb", 1, 5, 4612, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[42].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].sO2", "[1|%]", "o2CO2curves.ctO2_curve[43].bloodctO2content.sO2", 1,\
 5, 4638, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[43].bloodctCO2content.cHCO3", 1, 5, 4648, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[43].bloodctO2content.pO2", 1,\
 5, 4632, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[43].bloodctCO2content.ctCO2", 1, 5, 4647, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[43].bloodctO2content.totalO2", 1, 5, 4639, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].pH", "[1|1]", "o2CO2curves.ctO2_curve[43].bloodctO2content.pH", 1,\
 5, 4629, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[43].bloodctCO2content.cdCO2p", 1, 5, 4649, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[43].bloodctO2content.cdO2p", 1, 5, 4640, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[43].bloodctO2content.pH", 1, 5, 4629, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[43].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[43].bloodctO2content.pH", 1,\
 5, 4629, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[43].bloodctO2content.pH", 1,\
 5, 4629, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[43].bloodctO2content.sO2", 1,\
 5, 4638, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[43].bloodctO2content.ceHb", 1, 5, 4641, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[43].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].sO2", "[1|%]", "o2CO2curves.ctO2_curve[44].bloodctO2content.sO2", 1,\
 5, 4667, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[44].bloodctCO2content.cHCO3", 1, 5, 4677, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[44].bloodctO2content.pO2", 1,\
 5, 4661, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[44].bloodctCO2content.ctCO2", 1, 5, 4676, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[44].bloodctO2content.totalO2", 1, 5, 4668, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].pH", "[1|1]", "o2CO2curves.ctO2_curve[44].bloodctO2content.pH", 1,\
 5, 4658, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[44].bloodctCO2content.cdCO2p", 1, 5, 4678, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[44].bloodctO2content.cdO2p", 1, 5, 4669, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[44].bloodctO2content.pH", 1, 5, 4658, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[44].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[44].bloodctO2content.pH", 1,\
 5, 4658, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[44].bloodctO2content.pH", 1,\
 5, 4658, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[44].bloodctO2content.sO2", 1,\
 5, 4667, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[44].bloodctO2content.ceHb", 1, 5, 4670, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[44].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].sO2", "[1|%]", "o2CO2curves.ctO2_curve[45].bloodctO2content.sO2", 1,\
 5, 4696, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[45].bloodctCO2content.cHCO3", 1, 5, 4706, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[45].bloodctO2content.pO2", 1,\
 5, 4690, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[45].bloodctCO2content.ctCO2", 1, 5, 4705, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[45].bloodctO2content.totalO2", 1, 5, 4697, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].pH", "[1|1]", "o2CO2curves.ctO2_curve[45].bloodctO2content.pH", 1,\
 5, 4687, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[45].bloodctCO2content.cdCO2p", 1, 5, 4707, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[45].bloodctO2content.cdO2p", 1, 5, 4698, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[45].bloodctO2content.pH", 1, 5, 4687, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[45].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[45].bloodctO2content.pH", 1,\
 5, 4687, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[45].bloodctO2content.pH", 1,\
 5, 4687, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[45].bloodctO2content.sO2", 1,\
 5, 4696, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[45].bloodctO2content.ceHb", 1, 5, 4699, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[45].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].sO2", "[1|%]", "o2CO2curves.ctO2_curve[46].bloodctO2content.sO2", 1,\
 5, 4725, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[46].bloodctCO2content.cHCO3", 1, 5, 4735, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[46].bloodctO2content.pO2", 1,\
 5, 4719, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[46].bloodctCO2content.ctCO2", 1, 5, 4734, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[46].bloodctO2content.totalO2", 1, 5, 4726, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].pH", "[1|1]", "o2CO2curves.ctO2_curve[46].bloodctO2content.pH", 1,\
 5, 4716, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[46].bloodctCO2content.cdCO2p", 1, 5, 4736, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[46].bloodctO2content.cdO2p", 1, 5, 4727, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[46].bloodctO2content.pH", 1, 5, 4716, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[46].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[46].bloodctO2content.pH", 1,\
 5, 4716, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[46].bloodctO2content.pH", 1,\
 5, 4716, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[46].bloodctO2content.sO2", 1,\
 5, 4725, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[46].bloodctO2content.ceHb", 1, 5, 4728, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[46].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].sO2", "[1|%]", "o2CO2curves.ctO2_curve[47].bloodctO2content.sO2", 1,\
 5, 4754, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[47].bloodctCO2content.cHCO3", 1, 5, 4764, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[47].bloodctO2content.pO2", 1,\
 5, 4748, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[47].bloodctCO2content.ctCO2", 1, 5, 4763, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[47].bloodctO2content.totalO2", 1, 5, 4755, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].pH", "[1|1]", "o2CO2curves.ctO2_curve[47].bloodctO2content.pH", 1,\
 5, 4745, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[47].bloodctCO2content.cdCO2p", 1, 5, 4765, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[47].bloodctO2content.cdO2p", 1, 5, 4756, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[47].bloodctO2content.pH", 1, 5, 4745, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[47].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[47].bloodctO2content.pH", 1,\
 5, 4745, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[47].bloodctO2content.pH", 1,\
 5, 4745, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[47].bloodctO2content.sO2", 1,\
 5, 4754, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[47].bloodctO2content.ceHb", 1, 5, 4757, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[47].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].sO2", "[1|%]", "o2CO2curves.ctO2_curve[48].bloodctO2content.sO2", 1,\
 5, 4783, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[48].bloodctCO2content.cHCO3", 1, 5, 4793, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[48].bloodctO2content.pO2", 1,\
 5, 4777, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[48].bloodctCO2content.ctCO2", 1, 5, 4792, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[48].bloodctO2content.totalO2", 1, 5, 4784, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].pH", "[1|1]", "o2CO2curves.ctO2_curve[48].bloodctO2content.pH", 1,\
 5, 4774, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[48].bloodctCO2content.cdCO2p", 1, 5, 4794, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[48].bloodctO2content.cdO2p", 1, 5, 4785, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[48].bloodctO2content.pH", 1, 5, 4774, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[48].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[48].bloodctO2content.pH", 1,\
 5, 4774, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[48].bloodctO2content.pH", 1,\
 5, 4774, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[48].bloodctO2content.sO2", 1,\
 5, 4783, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[48].bloodctO2content.ceHb", 1, 5, 4786, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[48].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].sO2", "[1|%]", "o2CO2curves.ctO2_curve[49].bloodctO2content.sO2", 1,\
 5, 4812, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[49].bloodctCO2content.cHCO3", 1, 5, 4822, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[49].bloodctO2content.pO2", 1,\
 5, 4806, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[49].bloodctCO2content.ctCO2", 1, 5, 4821, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[49].bloodctO2content.totalO2", 1, 5, 4813, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].pH", "[1|1]", "o2CO2curves.ctO2_curve[49].bloodctO2content.pH", 1,\
 5, 4803, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[49].bloodctCO2content.cdCO2p", 1, 5, 4823, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[49].bloodctO2content.cdO2p", 1, 5, 4814, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[49].bloodctO2content.pH", 1, 5, 4803, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[49].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[49].bloodctO2content.pH", 1,\
 5, 4803, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[49].bloodctO2content.pH", 1,\
 5, 4803, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[49].bloodctO2content.sO2", 1,\
 5, 4812, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[49].bloodctO2content.ceHb", 1, 5, 4815, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[49].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].sO2", "[1|%]", "o2CO2curves.ctO2_curve[50].bloodctO2content.sO2", 1,\
 5, 4841, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[50].bloodctCO2content.cHCO3", 1, 5, 4851, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[50].bloodctO2content.pO2", 1,\
 5, 4835, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[50].bloodctCO2content.ctCO2", 1, 5, 4850, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[50].bloodctO2content.totalO2", 1, 5, 4842, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].pH", "[1|1]", "o2CO2curves.ctO2_curve[50].bloodctO2content.pH", 1,\
 5, 4832, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[50].bloodctCO2content.cdCO2p", 1, 5, 4852, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[50].bloodctO2content.cdO2p", 1, 5, 4843, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[50].bloodctO2content.pH", 1, 5, 4832, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[50].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[50].bloodctO2content.pH", 1,\
 5, 4832, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[50].bloodctO2content.pH", 1,\
 5, 4832, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[50].bloodctO2content.sO2", 1,\
 5, 4841, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[50].bloodctO2content.ceHb", 1, 5, 4844, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[50].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].sO2", "[1|%]", "o2CO2curves.ctO2_curve[51].bloodctO2content.sO2", 1,\
 5, 4870, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[51].bloodctCO2content.cHCO3", 1, 5, 4880, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[51].bloodctO2content.pO2", 1,\
 5, 4864, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[51].bloodctCO2content.ctCO2", 1, 5, 4879, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[51].bloodctO2content.totalO2", 1, 5, 4871, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].pH", "[1|1]", "o2CO2curves.ctO2_curve[51].bloodctO2content.pH", 1,\
 5, 4861, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[51].bloodctCO2content.cdCO2p", 1, 5, 4881, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[51].bloodctO2content.cdO2p", 1, 5, 4872, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[51].bloodctO2content.pH", 1, 5, 4861, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[51].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[51].bloodctO2content.pH", 1,\
 5, 4861, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[51].bloodctO2content.pH", 1,\
 5, 4861, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[51].bloodctO2content.sO2", 1,\
 5, 4870, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[51].bloodctO2content.ceHb", 1, 5, 4873, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[51].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].sO2", "[1|%]", "o2CO2curves.ctO2_curve[52].bloodctO2content.sO2", 1,\
 5, 4899, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[52].bloodctCO2content.cHCO3", 1, 5, 4909, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[52].bloodctO2content.pO2", 1,\
 5, 4893, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[52].bloodctCO2content.ctCO2", 1, 5, 4908, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[52].bloodctO2content.totalO2", 1, 5, 4900, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].pH", "[1|1]", "o2CO2curves.ctO2_curve[52].bloodctO2content.pH", 1,\
 5, 4890, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[52].bloodctCO2content.cdCO2p", 1, 5, 4910, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[52].bloodctO2content.cdO2p", 1, 5, 4901, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[52].bloodctO2content.pH", 1, 5, 4890, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[52].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[52].bloodctO2content.pH", 1,\
 5, 4890, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[52].bloodctO2content.pH", 1,\
 5, 4890, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[52].bloodctO2content.sO2", 1,\
 5, 4899, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[52].bloodctO2content.ceHb", 1, 5, 4902, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[52].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].sO2", "[1|%]", "o2CO2curves.ctO2_curve[53].bloodctO2content.sO2", 1,\
 5, 4928, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[53].bloodctCO2content.cHCO3", 1, 5, 4938, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[53].bloodctO2content.pO2", 1,\
 5, 4922, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[53].bloodctCO2content.ctCO2", 1, 5, 4937, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[53].bloodctO2content.totalO2", 1, 5, 4929, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].pH", "[1|1]", "o2CO2curves.ctO2_curve[53].bloodctO2content.pH", 1,\
 5, 4919, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[53].bloodctCO2content.cdCO2p", 1, 5, 4939, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[53].bloodctO2content.cdO2p", 1, 5, 4930, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[53].bloodctO2content.pH", 1, 5, 4919, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[53].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[53].bloodctO2content.pH", 1,\
 5, 4919, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[53].bloodctO2content.pH", 1,\
 5, 4919, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[53].bloodctO2content.sO2", 1,\
 5, 4928, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[53].bloodctO2content.ceHb", 1, 5, 4931, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[53].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].sO2", "[1|%]", "o2CO2curves.ctO2_curve[54].bloodctO2content.sO2", 1,\
 5, 4957, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[54].bloodctCO2content.cHCO3", 1, 5, 4967, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[54].bloodctO2content.pO2", 1,\
 5, 4951, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[54].bloodctCO2content.ctCO2", 1, 5, 4966, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[54].bloodctO2content.totalO2", 1, 5, 4958, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].pH", "[1|1]", "o2CO2curves.ctO2_curve[54].bloodctO2content.pH", 1,\
 5, 4948, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[54].bloodctCO2content.cdCO2p", 1, 5, 4968, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[54].bloodctO2content.cdO2p", 1, 5, 4959, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[54].bloodctO2content.pH", 1, 5, 4948, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[54].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[54].bloodctO2content.pH", 1,\
 5, 4948, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[54].bloodctO2content.pH", 1,\
 5, 4948, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[54].bloodctO2content.sO2", 1,\
 5, 4957, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[54].bloodctO2content.ceHb", 1, 5, 4960, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[54].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].sO2", "[1|%]", "o2CO2curves.ctO2_curve[55].bloodctO2content.sO2", 1,\
 5, 4986, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[55].bloodctCO2content.cHCO3", 1, 5, 4996, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[55].bloodctO2content.pO2", 1,\
 5, 4980, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[55].bloodctCO2content.ctCO2", 1, 5, 4995, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[55].bloodctO2content.totalO2", 1, 5, 4987, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].pH", "[1|1]", "o2CO2curves.ctO2_curve[55].bloodctO2content.pH", 1,\
 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[55].bloodctCO2content.cdCO2p", 1, 5, 4997, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[55].bloodctO2content.cdO2p", 1, 5, 4988, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[55].bloodctO2content.pH", 1, 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[55].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[55].bloodctO2content.pH", 1,\
 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[55].bloodctO2content.pH", 1,\
 5, 4977, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[55].bloodctO2content.sO2", 1,\
 5, 4986, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[55].bloodctO2content.ceHb", 1, 5, 4989, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[55].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].sO2", "[1|%]", "o2CO2curves.ctO2_curve[56].bloodctO2content.sO2", 1,\
 5, 5015, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[56].bloodctCO2content.cHCO3", 1, 5, 5025, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[56].bloodctO2content.pO2", 1,\
 5, 5009, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[56].bloodctCO2content.ctCO2", 1, 5, 5024, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[56].bloodctO2content.totalO2", 1, 5, 5016, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].pH", "[1|1]", "o2CO2curves.ctO2_curve[56].bloodctO2content.pH", 1,\
 5, 5006, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[56].bloodctCO2content.cdCO2p", 1, 5, 5026, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[56].bloodctO2content.cdO2p", 1, 5, 5017, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[56].bloodctO2content.pH", 1, 5, 5006, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.temp",\
 "temperature in Kelvinss [K|degC]", 288.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.BEox",\
 "Base Excess (in fully oxygenated blood) in mmol/l [mol/m3|mmol/l]", 1E-60, \
1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.cPi",\
 "Phosphate concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[56].vanSlykeEquation.vanSlykeEquation.sO2",\
 "O2 hemoglobin saturation [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.temp", \
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[56].bloodctO2content.pH", 1,\
 5, 5006, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[56].bloodctO2content.pH", 1,\
 5, 5006, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[56].bloodctO2content.sO2", 1,\
 5, 5015, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[56].bloodctO2content.ceHb", 1, 5, 5018, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[56].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].sO2", "[1|%]", "o2CO2curves.ctO2_curve[57].bloodctO2content.sO2", 1,\
 5, 5044, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[57].bloodctCO2content.cHCO3", 1, 5, 5054, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[57].bloodctO2content.pO2", 1,\
 5, 5038, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[57].bloodctCO2content.ctCO2", 1, 5, 5053, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[57].bloodctO2content.totalO2", 1, 5, 5045, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].pH", "[1|1]", "o2CO2curves.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 5035, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[57].bloodctCO2content.cdCO2p", 1, 5, 5055, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[57].bloodctO2content.cdO2p", 1, 5, 5046, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.pH", "[1|1]", 7.4, \
0.0,14.0,7.0,0,577)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.pCO2", "[Pa|mmHg]",\
 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.T", "[K|degC]", \
310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.pO2", "[Pa|mmHg]", \
0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.FCOHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.FHbF", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.FMetHb", "[1|%]", \
0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.cDPG", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.ctHb", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.sO2", "[1|%]", 0.0,\
 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.totalO2", \
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.cdO2p", \
"dissolved O2 concentration in plasma [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctO2content.ceHb", \
"effective concentration of hemoglobin [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.pCO2", \
"pCO2 in Pa [Pa|mmHg]", 5330, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.pH", "[1|1]", 0.0,\
 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.T", \
"temperature (in Kelvins) [K|degC]", 310.15, 0.0,1E+100,1.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.ctHb", \
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.sO2", \
"O2 hemoglobin saturation  [1|%]", 0.0, 0.0,0.0,0.01,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.ctCO2", \
"total blood CO2 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.cHCO3", \
"plasma HCO3 concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,\
0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].bloodctCO2content.cdCO2p", \
"plasma CO2 dissolved concentration (in mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,\
1E+60,0.0,0,513)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.pCO2", \
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[57].bloodctO2content.pH", 1, 5, 5035, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[57].vanSlykeEquation.vanSlykeEquation.cAlb",\
 "albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,\
0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 5035, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[57].bloodctO2content.pH", 1,\
 5, 5035, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[57].bloodctO2content.sO2", 1,\
 5, 5044, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[57].bloodctO2content.ceHb", 1, 5, 5047, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[57].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].sO2", "[1|%]", "o2CO2curves.ctO2_curve[58].bloodctO2content.sO2", 1,\
 5, 5073, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[58].bloodctCO2content.cHCO3", 1, 5, 5083, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pO2", 1,\
 5, 5067, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctCO2content.ctCO2", 1, 5, 5082, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctO2content.totalO2", 1, 5, 5074, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].pH", "[1|1]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 5064, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctCO2content.cdCO2p", 1, 5, 5084, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[58].bloodctO2content.cdO2p", 1, 5, 5075, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1, 5, 5064, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[58].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 5064, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[58].bloodctO2content.pH", 1,\
 5, 5064, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[58].bloodctO2content.sO2", 1,\
 5, 5073, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[58].bloodctO2content.ceHb", 1, 5, 5076, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[58].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].sO2", "[1|%]", "o2CO2curves.ctO2_curve[59].bloodctO2content.sO2", 1,\
 5, 5102, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[59].bloodctCO2content.cHCO3", 1, 5, 5112, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pO2", 1,\
 5, 5096, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctCO2content.ctCO2", 1, 5, 5111, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctO2content.totalO2", 1, 5, 5103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].pH", "[1|1]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 5093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctCO2content.cdCO2p", 1, 5, 5113, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[59].bloodctO2content.cdO2p", 1, 5, 5104, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1, 5, 5093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[59].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 5093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[59].bloodctO2content.pH", 1,\
 5, 5093, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[59].bloodctO2content.sO2", 1,\
 5, 5102, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[59].bloodctO2content.ceHb", 1, 5, 5105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[59].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].sO2", "[1|%]", "o2CO2curves.ctO2_curve[60].bloodctO2content.sO2", 1,\
 5, 5131, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[60].bloodctCO2content.cHCO3", 1, 5, 5141, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pO2", 1,\
 5, 5125, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctCO2content.ctCO2", 1, 5, 5140, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctO2content.totalO2", 1, 5, 5132, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].pH", "[1|1]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 5122, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctCO2content.cdCO2p", 1, 5, 5142, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[60].bloodctO2content.cdO2p", 1, 5, 5133, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1, 5, 5122, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[60].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 5122, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[60].bloodctO2content.pH", 1,\
 5, 5122, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[60].bloodctO2content.sO2", 1,\
 5, 5131, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[60].bloodctO2content.ceHb", 1, 5, 5134, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[60].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].sO2", "[1|%]", "o2CO2curves.ctO2_curve[61].bloodctO2content.sO2", 1,\
 5, 5160, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[61].bloodctCO2content.cHCO3", 1, 5, 5170, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pO2", 1,\
 5, 5154, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctCO2content.ctCO2", 1, 5, 5169, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctO2content.totalO2", 1, 5, 5161, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].pH", "[1|1]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 5151, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctCO2content.cdCO2p", 1, 5, 5171, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[61].bloodctO2content.cdO2p", 1, 5, 5162, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1, 5, 5151, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[61].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 5151, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[61].bloodctO2content.pH", 1,\
 5, 5151, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[61].bloodctO2content.sO2", 1,\
 5, 5160, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[61].bloodctO2content.ceHb", 1, 5, 5163, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[61].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].sO2", "[1|%]", "o2CO2curves.ctO2_curve[62].bloodctO2content.sO2", 1,\
 5, 5189, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[62].bloodctCO2content.cHCO3", 1, 5, 5199, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pO2", 1,\
 5, 5183, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctCO2content.ctCO2", 1, 5, 5198, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctO2content.totalO2", 1, 5, 5190, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].pH", "[1|1]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 5180, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctCO2content.cdCO2p", 1, 5, 5200, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[62].bloodctO2content.cdO2p", 1, 5, 5191, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1, 5, 5180, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[62].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 5180, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[62].bloodctO2content.pH", 1,\
 5, 5180, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[62].bloodctO2content.sO2", 1,\
 5, 5189, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[62].bloodctO2content.ceHb", 1, 5, 5192, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[62].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].sO2", "[1|%]", "o2CO2curves.ctO2_curve[63].bloodctO2content.sO2", 1,\
 5, 5218, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[63].bloodctCO2content.cHCO3", 1, 5, 5228, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pO2", 1,\
 5, 5212, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctCO2content.ctCO2", 1, 5, 5227, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctO2content.totalO2", 1, 5, 5219, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].pH", "[1|1]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 5209, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctCO2content.cdCO2p", 1, 5, 5229, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[63].bloodctO2content.cdO2p", 1, 5, 5220, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1, 5, 5209, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[63].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 5209, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[63].bloodctO2content.pH", 1,\
 5, 5209, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[63].bloodctO2content.sO2", 1,\
 5, 5218, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[63].bloodctO2content.ceHb", 1, 5, 5221, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[63].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].sO2", "[1|%]", "o2CO2curves.ctO2_curve[64].bloodctO2content.sO2", 1,\
 5, 5247, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[64].bloodctCO2content.cHCO3", 1, 5, 5257, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pO2", 1,\
 5, 5241, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctCO2content.ctCO2", 1, 5, 5256, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctO2content.totalO2", 1, 5, 5248, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].pH", "[1|1]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 5238, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctCO2content.cdCO2p", 1, 5, 5258, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[64].bloodctO2content.cdO2p", 1, 5, 5249, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1, 5, 5238, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[64].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 5238, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[64].bloodctO2content.pH", 1,\
 5, 5238, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[64].bloodctO2content.sO2", 1,\
 5, 5247, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[64].bloodctO2content.ceHb", 1, 5, 5250, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[64].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].sO2", "[1|%]", "o2CO2curves.ctO2_curve[65].bloodctO2content.sO2", 1,\
 5, 5276, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[65].bloodctCO2content.cHCO3", 1, 5, 5286, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pO2", 1,\
 5, 5270, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctCO2content.ctCO2", 1, 5, 5285, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctO2content.totalO2", 1, 5, 5277, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].pH", "[1|1]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 5267, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctCO2content.cdCO2p", 1, 5, 5287, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[65].bloodctO2content.cdO2p", 1, 5, 5278, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1, 5, 5267, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[65].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 5267, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[65].bloodctO2content.pH", 1,\
 5, 5267, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[65].bloodctO2content.sO2", 1,\
 5, 5276, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[65].bloodctO2content.ceHb", 1, 5, 5279, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[65].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].sO2", "[1|%]", "o2CO2curves.ctO2_curve[66].bloodctO2content.sO2", 1,\
 5, 5305, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[66].bloodctCO2content.cHCO3", 1, 5, 5315, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pO2", 1,\
 5, 5299, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctCO2content.ctCO2", 1, 5, 5314, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctO2content.totalO2", 1, 5, 5306, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].pH", "[1|1]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 5296, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctCO2content.cdCO2p", 1, 5, 5316, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[66].bloodctO2content.cdO2p", 1, 5, 5307, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1, 5, 5296, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[66].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 5296, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[66].bloodctO2content.pH", 1,\
 5, 5296, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[66].bloodctO2content.sO2", 1,\
 5, 5305, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[66].bloodctO2content.ceHb", 1, 5, 5308, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[66].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].sO2", "[1|%]", "o2CO2curves.ctO2_curve[67].bloodctO2content.sO2", 1,\
 5, 5334, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[67].bloodctCO2content.cHCO3", 1, 5, 5344, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pO2", 1,\
 5, 5328, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctCO2content.ctCO2", 1, 5, 5343, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctO2content.totalO2", 1, 5, 5335, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].pH", "[1|1]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 5325, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctCO2content.cdCO2p", 1, 5, 5345, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[67].bloodctO2content.cdO2p", 1, 5, 5336, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1, 5, 5325, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[67].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 5325, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[67].bloodctO2content.pH", 1,\
 5, 5325, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[67].bloodctO2content.sO2", 1,\
 5, 5334, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[67].bloodctO2content.ceHb", 1, 5, 5337, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[67].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].sO2", "[1|%]", "o2CO2curves.ctO2_curve[68].bloodctO2content.sO2", 1,\
 5, 5363, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[68].bloodctCO2content.cHCO3", 1, 5, 5373, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pO2", 1,\
 5, 5357, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctCO2content.ctCO2", 1, 5, 5372, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctO2content.totalO2", 1, 5, 5364, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].pH", "[1|1]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 5354, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctCO2content.cdCO2p", 1, 5, 5374, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[68].bloodctO2content.cdO2p", 1, 5, 5365, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1, 5, 5354, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[68].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 5354, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[68].bloodctO2content.pH", 1,\
 5, 5354, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[68].bloodctO2content.sO2", 1,\
 5, 5363, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[68].bloodctO2content.ceHb", 1, 5, 5366, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[68].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].sO2", "[1|%]", "o2CO2curves.ctO2_curve[69].bloodctO2content.sO2", 1,\
 5, 5392, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[69].bloodctCO2content.cHCO3", 1, 5, 5402, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pO2", 1,\
 5, 5386, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctCO2content.ctCO2", 1, 5, 5401, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctO2content.totalO2", 1, 5, 5393, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].pH", "[1|1]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 5383, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctCO2content.cdCO2p", 1, 5, 5403, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[69].bloodctO2content.cdO2p", 1, 5, 5394, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
EndNonAlias(5)
PreNonAliasNew(6)
StartNonAlias(6)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1, 5, 5383, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[69].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 5383, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[69].bloodctO2content.pH", 1,\
 5, 5383, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[69].bloodctO2content.sO2", 1,\
 5, 5392, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[69].bloodctO2content.ceHb", 1, 5, 5395, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[69].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].sO2", "[1|%]", "o2CO2curves.ctO2_curve[70].bloodctO2content.sO2", 1,\
 5, 5421, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[70].bloodctCO2content.cHCO3", 1, 5, 5431, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pO2", 1,\
 5, 5415, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctCO2content.ctCO2", 1, 5, 5430, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctO2content.totalO2", 1, 5, 5422, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].pH", "[1|1]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 5412, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctCO2content.cdCO2p", 1, 5, 5432, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[70].bloodctO2content.cdO2p", 1, 5, 5423, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1, 5, 5412, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[70].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 5412, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[70].bloodctO2content.pH", 1,\
 5, 5412, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[70].bloodctO2content.sO2", 1,\
 5, 5421, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[70].bloodctO2content.ceHb", 1, 5, 5424, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[70].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].sO2", "[1|%]", "o2CO2curves.ctO2_curve[71].bloodctO2content.sO2", 1,\
 5, 5450, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[71].bloodctCO2content.cHCO3", 1, 5, 5460, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pO2", 1,\
 5, 5444, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctCO2content.ctCO2", 1, 5, 5459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctO2content.totalO2", 1, 5, 5451, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].pH", "[1|1]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 5441, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctCO2content.cdCO2p", 1, 5, 5461, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[71].bloodctO2content.cdO2p", 1, 5, 5452, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1, 5, 5441, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[71].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 5441, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[71].bloodctO2content.pH", 1,\
 5, 5441, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[71].bloodctO2content.sO2", 1,\
 5, 5450, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[71].bloodctO2content.ceHb", 1, 5, 5453, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[71].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].sO2", "[1|%]", "o2CO2curves.ctO2_curve[72].bloodctO2content.sO2", 1,\
 5, 5479, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[72].bloodctCO2content.cHCO3", 1, 5, 5489, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pO2", 1,\
 5, 5473, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctCO2content.ctCO2", 1, 5, 5488, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctO2content.totalO2", 1, 5, 5480, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].pH", "[1|1]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 5470, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctCO2content.cdCO2p", 1, 5, 5490, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[72].bloodctO2content.cdO2p", 1, 5, 5481, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1, 5, 5470, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[72].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 5470, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[72].bloodctO2content.pH", 1,\
 5, 5470, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[72].bloodctO2content.sO2", 1,\
 5, 5479, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[72].bloodctO2content.ceHb", 1, 5, 5482, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[72].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].sO2", "[1|%]", "o2CO2curves.ctO2_curve[73].bloodctO2content.sO2", 1,\
 5, 5508, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[73].bloodctCO2content.cHCO3", 1, 5, 5518, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pO2", 1,\
 5, 5502, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctCO2content.ctCO2", 1, 5, 5517, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctO2content.totalO2", 1, 5, 5509, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].pH", "[1|1]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 5499, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctCO2content.cdCO2p", 1, 5, 5519, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[73].bloodctO2content.cdO2p", 1, 5, 5510, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1, 5, 5499, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[73].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 5499, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[73].bloodctO2content.pH", 1,\
 5, 5499, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[73].bloodctO2content.sO2", 1,\
 5, 5508, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[73].bloodctO2content.ceHb", 1, 5, 5511, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[73].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].sO2", "[1|%]", "o2CO2curves.ctO2_curve[74].bloodctO2content.sO2", 1,\
 5, 5537, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[74].bloodctCO2content.cHCO3", 1, 5, 5547, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pO2", 1,\
 5, 5531, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctCO2content.ctCO2", 1, 5, 5546, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctO2content.totalO2", 1, 5, 5538, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].pH", "[1|1]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 5528, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctCO2content.cdCO2p", 1, 5, 5548, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[74].bloodctO2content.cdO2p", 1, 5, 5539, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1, 5, 5528, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[74].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 5528, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[74].bloodctO2content.pH", 1,\
 5, 5528, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[74].bloodctO2content.sO2", 1,\
 5, 5537, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[74].bloodctO2content.ceHb", 1, 5, 5540, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[74].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].sO2", "[1|%]", "o2CO2curves.ctO2_curve[75].bloodctO2content.sO2", 1,\
 5, 5566, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[75].bloodctCO2content.cHCO3", 1, 5, 5576, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pO2", 1,\
 5, 5560, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctCO2content.ctCO2", 1, 5, 5575, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctO2content.totalO2", 1, 5, 5567, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].pH", "[1|1]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 5557, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctCO2content.cdCO2p", 1, 5, 5577, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[75].bloodctO2content.cdO2p", 1, 5, 5568, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1, 5, 5557, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[75].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 5557, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[75].bloodctO2content.pH", 1,\
 5, 5557, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[75].bloodctO2content.sO2", 1,\
 5, 5566, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[75].bloodctO2content.ceHb", 1, 5, 5569, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[75].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].sO2", "[1|%]", "o2CO2curves.ctO2_curve[76].bloodctO2content.sO2", 1,\
 5, 5595, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[76].bloodctCO2content.cHCO3", 1, 5, 5605, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pO2", 1,\
 5, 5589, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctCO2content.ctCO2", 1, 5, 5604, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctO2content.totalO2", 1, 5, 5596, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].pH", "[1|1]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 5586, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctCO2content.cdCO2p", 1, 5, 5606, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[76].bloodctO2content.cdO2p", 1, 5, 5597, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1, 5, 5586, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[76].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 5586, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[76].bloodctO2content.pH", 1,\
 5, 5586, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[76].bloodctO2content.sO2", 1,\
 5, 5595, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[76].bloodctO2content.ceHb", 1, 5, 5598, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[76].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].sO2", "[1|%]", "o2CO2curves.ctO2_curve[77].bloodctO2content.sO2", 1,\
 5, 5624, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[77].bloodctCO2content.cHCO3", 1, 5, 5634, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pO2", 1,\
 5, 5618, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctCO2content.ctCO2", 1, 5, 5633, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctO2content.totalO2", 1, 5, 5625, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].pH", "[1|1]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 5615, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctCO2content.cdCO2p", 1, 5, 5635, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[77].bloodctO2content.cdO2p", 1, 5, 5626, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1, 5, 5615, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[77].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 5615, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[77].bloodctO2content.pH", 1,\
 5, 5615, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[77].bloodctO2content.sO2", 1,\
 5, 5624, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[77].bloodctO2content.ceHb", 1, 5, 5627, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[77].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].sO2", "[1|%]", "o2CO2curves.ctO2_curve[78].bloodctO2content.sO2", 1,\
 5, 5653, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[78].bloodctCO2content.cHCO3", 1, 5, 5663, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pO2", 1,\
 5, 5647, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctCO2content.ctCO2", 1, 5, 5662, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctO2content.totalO2", 1, 5, 5654, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].pH", "[1|1]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 5644, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctCO2content.cdCO2p", 1, 5, 5664, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[78].bloodctO2content.cdO2p", 1, 5, 5655, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1, 5, 5644, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[78].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 5644, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[78].bloodctO2content.pH", 1,\
 5, 5644, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[78].bloodctO2content.sO2", 1,\
 5, 5653, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[78].bloodctO2content.ceHb", 1, 5, 5656, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[78].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].sO2", "[1|%]", "o2CO2curves.ctO2_curve[79].bloodctO2content.sO2", 1,\
 5, 5682, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[79].bloodctCO2content.cHCO3", 1, 5, 5692, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pO2", 1,\
 5, 5676, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctCO2content.ctCO2", 1, 5, 5691, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctO2content.totalO2", 1, 5, 5683, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].pH", "[1|1]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 5673, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctCO2content.cdCO2p", 1, 5, 5693, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[79].bloodctO2content.cdO2p", 1, 5, 5684, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1, 5, 5673, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[79].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 5673, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[79].bloodctO2content.pH", 1,\
 5, 5673, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[79].bloodctO2content.sO2", 1,\
 5, 5682, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[79].bloodctO2content.ceHb", 1, 5, 5685, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[79].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].sO2", "[1|%]", "o2CO2curves.ctO2_curve[80].bloodctO2content.sO2", 1,\
 5, 5711, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[80].bloodctCO2content.cHCO3", 1, 5, 5721, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pO2", 1,\
 5, 5705, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctCO2content.ctCO2", 1, 5, 5720, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctO2content.totalO2", 1, 5, 5712, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].pH", "[1|1]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 5702, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctCO2content.cdCO2p", 1, 5, 5722, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[80].bloodctO2content.cdO2p", 1, 5, 5713, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1, 5, 5702, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[80].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 5702, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[80].bloodctO2content.pH", 1,\
 5, 5702, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[80].bloodctO2content.sO2", 1,\
 5, 5711, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[80].bloodctO2content.ceHb", 1, 5, 5714, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[80].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].sO2", "[1|%]", "o2CO2curves.ctO2_curve[81].bloodctO2content.sO2", 1,\
 5, 5740, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[81].bloodctCO2content.cHCO3", 1, 5, 5750, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pO2", 1,\
 5, 5734, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctCO2content.ctCO2", 1, 5, 5749, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctO2content.totalO2", 1, 5, 5741, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].pH", "[1|1]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 5731, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctCO2content.cdCO2p", 1, 5, 5751, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[81].bloodctO2content.cdO2p", 1, 5, 5742, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1, 5, 5731, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[81].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 5731, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[81].bloodctO2content.pH", 1,\
 5, 5731, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[81].bloodctO2content.sO2", 1,\
 5, 5740, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[81].bloodctO2content.ceHb", 1, 5, 5743, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[81].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].sO2", "[1|%]", "o2CO2curves.ctO2_curve[82].bloodctO2content.sO2", 1,\
 5, 5769, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[82].bloodctCO2content.cHCO3", 1, 5, 5779, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pO2", 1,\
 5, 5763, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctCO2content.ctCO2", 1, 5, 5778, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctO2content.totalO2", 1, 5, 5770, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].pH", "[1|1]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 5760, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctCO2content.cdCO2p", 1, 5, 5780, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[82].bloodctO2content.cdO2p", 1, 5, 5771, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1, 5, 5760, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[82].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 5760, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[82].bloodctO2content.pH", 1,\
 5, 5760, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[82].bloodctO2content.sO2", 1,\
 5, 5769, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[82].bloodctO2content.ceHb", 1, 5, 5772, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[82].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].sO2", "[1|%]", "o2CO2curves.ctO2_curve[83].bloodctO2content.sO2", 1,\
 5, 5798, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[83].bloodctCO2content.cHCO3", 1, 5, 5808, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pO2", 1,\
 5, 5792, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctCO2content.ctCO2", 1, 5, 5807, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctO2content.totalO2", 1, 5, 5799, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].pH", "[1|1]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 5789, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctCO2content.cdCO2p", 1, 5, 5809, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[83].bloodctO2content.cdO2p", 1, 5, 5800, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1, 5, 5789, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[83].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 5789, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[83].bloodctO2content.pH", 1,\
 5, 5789, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[83].bloodctO2content.sO2", 1,\
 5, 5798, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[83].bloodctO2content.ceHb", 1, 5, 5801, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[83].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].sO2", "[1|%]", "o2CO2curves.ctO2_curve[84].bloodctO2content.sO2", 1,\
 5, 5827, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[84].bloodctCO2content.cHCO3", 1, 5, 5837, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pO2", 1,\
 5, 5821, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctCO2content.ctCO2", 1, 5, 5836, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctO2content.totalO2", 1, 5, 5828, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].pH", "[1|1]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 5818, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctCO2content.cdCO2p", 1, 5, 5838, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[84].bloodctO2content.cdO2p", 1, 5, 5829, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1, 5, 5818, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[84].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 5818, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[84].bloodctO2content.pH", 1,\
 5, 5818, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[84].bloodctO2content.sO2", 1,\
 5, 5827, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[84].bloodctO2content.ceHb", 1, 5, 5830, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[84].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].sO2", "[1|%]", "o2CO2curves.ctO2_curve[85].bloodctO2content.sO2", 1,\
 5, 5856, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[85].bloodctCO2content.cHCO3", 1, 5, 5866, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pO2", 1,\
 5, 5850, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctCO2content.ctCO2", 1, 5, 5865, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctO2content.totalO2", 1, 5, 5857, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].pH", "[1|1]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 5847, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctCO2content.cdCO2p", 1, 5, 5867, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[85].bloodctO2content.cdO2p", 1, 5, 5858, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1, 5, 5847, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[85].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 5847, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[85].bloodctO2content.pH", 1,\
 5, 5847, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[85].bloodctO2content.sO2", 1,\
 5, 5856, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[85].bloodctO2content.ceHb", 1, 5, 5859, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[85].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].sO2", "[1|%]", "o2CO2curves.ctO2_curve[86].bloodctO2content.sO2", 1,\
 5, 5885, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[86].bloodctCO2content.cHCO3", 1, 5, 5895, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pO2", 1,\
 5, 5879, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctCO2content.ctCO2", 1, 5, 5894, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctO2content.totalO2", 1, 5, 5886, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].pH", "[1|1]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctCO2content.cdCO2p", 1, 5, 5896, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[86].bloodctO2content.cdO2p", 1, 5, 5887, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1, 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[86].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[86].bloodctO2content.pH", 1,\
 5, 5876, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[86].bloodctO2content.sO2", 1,\
 5, 5885, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[86].bloodctO2content.ceHb", 1, 5, 5888, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[86].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].sO2", "[1|%]", "o2CO2curves.ctO2_curve[87].bloodctO2content.sO2", 1,\
 5, 5914, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[87].bloodctCO2content.cHCO3", 1, 5, 5924, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pO2", 1,\
 5, 5908, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctCO2content.ctCO2", 1, 5, 5923, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctO2content.totalO2", 1, 5, 5915, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].pH", "[1|1]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 5905, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctCO2content.cdCO2p", 1, 5, 5925, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[87].bloodctO2content.cdO2p", 1, 5, 5916, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1, 5, 5905, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[87].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 5905, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[87].bloodctO2content.pH", 1,\
 5, 5905, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[87].bloodctO2content.sO2", 1,\
 5, 5914, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[87].bloodctO2content.ceHb", 1, 5, 5917, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[87].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].sO2", "[1|%]", "o2CO2curves.ctO2_curve[88].bloodctO2content.sO2", 1,\
 5, 5943, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[88].bloodctCO2content.cHCO3", 1, 5, 5953, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pO2", 1,\
 5, 5937, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctCO2content.ctCO2", 1, 5, 5952, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctO2content.totalO2", 1, 5, 5944, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].pH", "[1|1]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 5934, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctCO2content.cdCO2p", 1, 5, 5954, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[88].bloodctO2content.cdO2p", 1, 5, 5945, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1, 5, 5934, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[88].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 5934, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[88].bloodctO2content.pH", 1,\
 5, 5934, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[88].bloodctO2content.sO2", 1,\
 5, 5943, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[88].bloodctO2content.ceHb", 1, 5, 5946, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[88].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].sO2", "[1|%]", "o2CO2curves.ctO2_curve[89].bloodctO2content.sO2", 1,\
 5, 5972, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[89].bloodctCO2content.cHCO3", 1, 5, 5982, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pO2", 1,\
 5, 5966, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctCO2content.ctCO2", 1, 5, 5981, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctO2content.totalO2", 1, 5, 5973, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].pH", "[1|1]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 5963, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctCO2content.cdCO2p", 1, 5, 5983, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[89].bloodctO2content.cdO2p", 1, 5, 5974, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1, 5, 5963, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[89].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 5963, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[89].bloodctO2content.pH", 1,\
 5, 5963, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[89].bloodctO2content.sO2", 1,\
 5, 5972, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[89].bloodctO2content.ceHb", 1, 5, 5975, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[89].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].sO2", "[1|%]", "o2CO2curves.ctO2_curve[90].bloodctO2content.sO2", 1,\
 5, 6001, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[90].bloodctCO2content.cHCO3", 1, 5, 6011, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pO2", 1,\
 5, 5995, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctCO2content.ctCO2", 1, 5, 6010, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctO2content.totalO2", 1, 5, 6002, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].pH", "[1|1]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 5992, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctCO2content.cdCO2p", 1, 5, 6012, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[90].bloodctO2content.cdO2p", 1, 5, 6003, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1, 5, 5992, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[90].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 5992, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[90].bloodctO2content.pH", 1,\
 5, 5992, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[90].bloodctO2content.sO2", 1,\
 5, 6001, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[90].bloodctO2content.ceHb", 1, 5, 6004, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[90].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].sO2", "[1|%]", "o2CO2curves.ctO2_curve[91].bloodctO2content.sO2", 1,\
 5, 6030, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[91].bloodctCO2content.cHCO3", 1, 5, 6040, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pO2", 1,\
 5, 6024, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctCO2content.ctCO2", 1, 5, 6039, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctO2content.totalO2", 1, 5, 6031, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].pH", "[1|1]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 6021, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctCO2content.cdCO2p", 1, 5, 6041, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[91].bloodctO2content.cdO2p", 1, 5, 6032, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1, 5, 6021, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[91].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 6021, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[91].bloodctO2content.pH", 1,\
 5, 6021, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[91].bloodctO2content.sO2", 1,\
 5, 6030, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[91].bloodctO2content.ceHb", 1, 5, 6033, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[91].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].sO2", "[1|%]", "o2CO2curves.ctO2_curve[92].bloodctO2content.sO2", 1,\
 5, 6059, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[92].bloodctCO2content.cHCO3", 1, 5, 6069, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pO2", 1,\
 5, 6053, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctCO2content.ctCO2", 1, 5, 6068, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctO2content.totalO2", 1, 5, 6060, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].pH", "[1|1]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 6050, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctCO2content.cdCO2p", 1, 5, 6070, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[92].bloodctO2content.cdO2p", 1, 5, 6061, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1, 5, 6050, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[92].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 6050, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[92].bloodctO2content.pH", 1,\
 5, 6050, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[92].bloodctO2content.sO2", 1,\
 5, 6059, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[92].bloodctO2content.ceHb", 1, 5, 6062, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[92].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].sO2", "[1|%]", "o2CO2curves.ctO2_curve[93].bloodctO2content.sO2", 1,\
 5, 6088, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[93].bloodctCO2content.cHCO3", 1, 5, 6098, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pO2", 1,\
 5, 6082, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctCO2content.ctCO2", 1, 5, 6097, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctO2content.totalO2", 1, 5, 6089, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].pH", "[1|1]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 6079, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctCO2content.cdCO2p", 1, 5, 6099, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[93].bloodctO2content.cdO2p", 1, 5, 6090, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1, 5, 6079, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[93].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 6079, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[93].bloodctO2content.pH", 1,\
 5, 6079, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[93].bloodctO2content.sO2", 1,\
 5, 6088, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[93].bloodctO2content.ceHb", 1, 5, 6091, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[93].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].sO2", "[1|%]", "o2CO2curves.ctO2_curve[94].bloodctO2content.sO2", 1,\
 5, 6117, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[94].bloodctCO2content.cHCO3", 1, 5, 6127, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pO2", 1,\
 5, 6111, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctCO2content.ctCO2", 1, 5, 6126, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctO2content.totalO2", 1, 5, 6118, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].pH", "[1|1]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 6108, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctCO2content.cdCO2p", 1, 5, 6128, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[94].bloodctO2content.cdO2p", 1, 5, 6119, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1, 5, 6108, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[94].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 6108, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[94].bloodctO2content.pH", 1,\
 5, 6108, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[94].bloodctO2content.sO2", 1,\
 5, 6117, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[94].bloodctO2content.ceHb", 1, 5, 6120, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[94].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].sO2", "[1|%]", "o2CO2curves.ctO2_curve[95].bloodctO2content.sO2", 1,\
 5, 6146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[95].bloodctCO2content.cHCO3", 1, 5, 6156, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pO2", 1,\
 5, 6140, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctCO2content.ctCO2", 1, 5, 6155, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctO2content.totalO2", 1, 5, 6147, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].pH", "[1|1]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 6137, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctCO2content.cdCO2p", 1, 5, 6157, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[95].bloodctO2content.cdO2p", 1, 5, 6148, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1, 5, 6137, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[95].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 6137, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[95].bloodctO2content.pH", 1,\
 5, 6137, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[95].bloodctO2content.sO2", 1,\
 5, 6146, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[95].bloodctO2content.ceHb", 1, 5, 6149, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[95].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].sO2", "[1|%]", "o2CO2curves.ctO2_curve[96].bloodctO2content.sO2", 1,\
 5, 6175, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[96].bloodctCO2content.cHCO3", 1, 5, 6185, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pO2", 1,\
 5, 6169, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctCO2content.ctCO2", 1, 5, 6184, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctO2content.totalO2", 1, 5, 6176, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].pH", "[1|1]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 6166, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctCO2content.cdCO2p", 1, 5, 6186, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[96].bloodctO2content.cdO2p", 1, 5, 6177, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1, 5, 6166, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[96].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 6166, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[96].bloodctO2content.pH", 1,\
 5, 6166, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[96].bloodctO2content.sO2", 1,\
 5, 6175, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[96].bloodctO2content.ceHb", 1, 5, 6178, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[96].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].sO2", "[1|%]", "o2CO2curves.ctO2_curve[97].bloodctO2content.sO2", 1,\
 5, 6204, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[97].bloodctCO2content.cHCO3", 1, 5, 6214, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pO2", 1,\
 5, 6198, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctCO2content.ctCO2", 1, 5, 6213, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctO2content.totalO2", 1, 5, 6205, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].pH", "[1|1]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 6195, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctCO2content.cdCO2p", 1, 5, 6215, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[97].bloodctO2content.cdO2p", 1, 5, 6206, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1, 5, 6195, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[97].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 6195, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[97].bloodctO2content.pH", 1,\
 5, 6195, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[97].bloodctO2content.sO2", 1,\
 5, 6204, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[97].bloodctO2content.ceHb", 1, 5, 6207, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[97].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].sO2", "[1|%]", "o2CO2curves.ctO2_curve[98].bloodctO2content.sO2", 1,\
 5, 6233, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[98].bloodctCO2content.cHCO3", 1, 5, 6243, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pO2", 1,\
 5, 6227, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctCO2content.ctCO2", 1, 5, 6242, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctO2content.totalO2", 1, 5, 6234, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].pH", "[1|1]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 6224, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctCO2content.cdCO2p", 1, 5, 6244, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[98].bloodctO2content.cdO2p", 1, 5, 6235, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1, 5, 6224, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[98].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 6224, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[98].bloodctO2content.pH", 1,\
 5, 6224, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[98].bloodctO2content.sO2", 1,\
 5, 6233, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[98].bloodctO2content.ceHb", 1, 5, 6236, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[98].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].sO2", "[1|%]", "o2CO2curves.ctO2_curve[99].bloodctO2content.sO2", 1,\
 5, 6262, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[99].bloodctCO2content.cHCO3", 1, 5, 6272, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].T", "[K|degC]", "temp_curve.k", 1, 7, 106,\
 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pO2", 1,\
 5, 6256, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctCO2content.ctCO2", 1, 5, 6271, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctO2content.totalO2", 1, 5, 6263, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].pH", "[1|1]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 6253, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctCO2content.cdCO2p", 1, 5, 6273, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[99].bloodctO2content.cdO2p", 1, 5, 6264, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.pH", "plasma pH at given temperature [1|1]",\
 "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1, 5, 6253, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[99].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 6253, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[99].bloodctO2content.pH", 1,\
 5, 6253, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[99].bloodctO2content.sO2", 1,\
 5, 6262, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[99].bloodctO2content.ceHb", 1, 5, 6265, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[99].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].sO2", "[1|%]", "o2CO2curves.ctO2_curve[100].bloodctO2content.sO2", 1,\
 5, 6291, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[100].bloodctCO2content.cHCO3", 1, 5, 6301, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].T", "[K|degC]", "temp_curve.k", 1, 7,\
 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pO2", 1,\
 5, 6285, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctCO2content.ctCO2", 1, 5, 6300, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctO2content.totalO2", 1, 5, 6292, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].pH", "[1|1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6282, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctCO2content.cdCO2p", 1, 5, 6302, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[100].bloodctO2content.cdO2p", 1, 5, 6293, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6282, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[100].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6282, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[100].bloodctO2content.pH", 1,\
 5, 6282, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[100].bloodctO2content.sO2", 1,\
 5, 6291, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[100].bloodctO2content.ceHb", 1, 5, 6294, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[100].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].sO2", "[1|%]", "o2CO2curves.ctO2_curve[101].bloodctO2content.sO2", 1,\
 5, 6320, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cHCO3", "outgoing concentration of HCO3 [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[101].bloodctCO2content.cHCO3", 1, 5, 6330, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].T", "[K|degC]", "temp_curve.k", 1, 7,\
 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctHb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1, 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cDPG", "[mol/m3|mmol/l]", \
"o2CO2curves.modelSettings.cDPG", 1, 7, 94, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].FMetHb", "[1|%]", "o2CO2curves.modelSettings.FMetHb", 1,\
 7, 95, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].FHbF", "[1|%]", "o2CO2curves.modelSettings.FHbF", 1,\
 7, 97, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].pO2", "[Pa|mmHg]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pO2", 1,\
 5, 6314, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].pCO2", "[Pa|mmHg]", "PCO2_curve.k", 1,\
 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctCO2content.ctCO2", 1, 5, 6329, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctO2content.totalO2", 1, 5, 6321, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].BEox", "[mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctAlb", "concentration of total haemoglobin in whole blood (8.4) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cAlb", 1, 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].pH", "[1|1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6311, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cdO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctCO2content.cdCO2p", 1, 5, 6331, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].cdCO2", "[mol/m3|mmol/l]", \
"o2CO2curves.ctO2_curve[101].bloodctO2content.cdO2p", 1, 5, 6322, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].FHbCO", "[1|%]", "o2CO2curves.modelSettings.FCOHb", 1,\
 7, 96, 0)
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
"[mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"hemoglobin concentration (mmol/l) [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"pCO2 at given temperature in Pa [Pa|mmHg]", "PCO2_curve.k", 1, 7, 103, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.ctHb", \
"hemoglobin concentration in mmol/l [mol/m3|mmol/l]", "o2CO2curves.pO2pCO2.bloodctO2content.ctHb", 1,\
 5, 459, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.cAlb", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cAlb", 1,\
 7, 92, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.pH", \
"plasma pH at given temperature [1|1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6311, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.BEox", \
"BEox in mmol/l [mol/m3|mmol/l]", "BEox_curve.k", 1, 7, 105, 0)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.pCO2",\
 "pCO2 at given temperature in Pa [Pa|mmHg]", 0.0, 0.0,0.0,133.322387415,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.pH",\
 "pH at given temperature [1|1]", 0.0, 0.0,14.0,7.0,0,513)
DeclareVariable("o2CO2curves.ctO2_curve[101].vanSlykeEquation.vanSlykeEquation.ctHb",\
 "hemoglobin concentration in mmol/l [mol/m3|mmol/l]", 1E-60, 1E-60,1E+60,0.0,0,513)
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
"temperature in Kelvins [K|degC]", "temp_curve.k", 1, 7, 106, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.u1",\
 "Input signal 1 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.u2",\
 "Input signal 2 (u1 = u2) [mol/m3]", "o2CO2curves.ctCO2_curve[100].vanSlykeEquation.inverseBlockConstraints1.u1", 1,\
 5, 3381, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.y1",\
 "Output signal 1 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6311, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.inverseBlockConstraints1.y2",\
 "Output signal 2 (y1 = y2) [1]", "o2CO2curves.ctO2_curve[101].bloodctO2content.pH", 1,\
 5, 6311, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.cPi", \
"albumin concentration in plasma (mmol/l) [mol/m3|mmol/l]", "o2CO2curves.modelSettings.cPi", 1,\
 7, 93, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].vanSlykeEquation.sO2", \
"O2 hemoglobin saturation [1|%]", "o2CO2curves.ctO2_curve[101].bloodctO2content.sO2", 1,\
 5, 6320, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ceHb", "effiective concentration of hemoglobin (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.ctO2_curve[101].bloodctO2content.ceHb", 1, 5, 6323, 0)
DeclareAlias2("o2CO2curves.ctO2_curve[101].ctPi", "concentration of phosphate  (mmol/l) [mol/m3|mmol/l]",\
 "o2CO2curves.modelSettings.cPi", 1, 7, 93, 0)
DeclareAlias2("o2CO2curves.dctCO2_array[1]", "[mol/m3|mmol/l]", "o2CO2curves.ctCO2_curve[1].bloodctCO2content.ctCO2", 1,\
 5, 499, 0)
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
EndNonAlias(6)
PreNonAliasNew(7)
StartNonAlias(7)
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
 5, 3421, 0)
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
DeclareParameter("PCO2_curve.k", "Constant Pressure output value [Pa|mmHg]", 103,\
 4666.283559525, 0.0,0.0,133.322387415,0,560)
DeclareAlias2("PCO2_curve.y", "Pressure constant [Pa|mmHg]", "PCO2_curve.k", 1, 7,\
 103, 0)
DeclareParameter("PO2_curve.k", "Constant Pressure output value [Pa|mmHg]", 104,\
 3333.059685375, 0.0,0.0,133.322387415,0,560)
DeclareAlias2("PO2_curve.y", "Pressure constant [Pa|mmHg]", "PO2_curve.k", 1, 7,\
 104, 0)
DeclareParameter("BEox_curve.k", "Constant Concentration output value [mol/m3|mmol/l]",\
 105, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("BEox_curve.y", "Concentration constant [mol/m3|mmol/l]", \
"BEox_curve.k", 1, 7, 105, 0)
DeclareParameter("temp_curve.k", "Constant Temperature output value [K|degC]", 106,\
 310.15, 0.0,1E+100,1.0,0,560)
DeclareAlias2("temp_curve.y", "Temperature constant [K|degC]", "temp_curve.k", 1,\
 7, 106, 0)
DeclareParameter("Hb_g_per_dl_curve.k", "Constant output value", 107, 15, \
0.0,0.0,0.0,0,560)
DeclareAlias2("Hb_g_per_dl_curve.y", "Connector of Real output signal", \
"Hb_g_per_dl_curve.k", 1, 7, 107, 0)
EndNonAlias(7)
PreNonAliasNew(8)
