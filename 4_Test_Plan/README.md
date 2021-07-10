# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01|Display of Menu| None | Menu<br>(1).Finding GST <br>(2).Checking GST<br>(3).Checking shop license<br> (4).Exit | PASS | Scenario|
|  H_02|Find the GST of the product |1.Product name for which GST has to be found | GST percentage of the product given |PASS|Requirement based |
|  H_03|Checking the GST of the given product|1.Product name for which GST has to be checked <br> 2.GST percentage charged by the shopkeeper | Displays whether correctly charged or not |SUCCESS|Requirement based |
| H_04| Checking the shop's license | 1.GST license number of the shop | Displays whether the shop is registered under GST or not |SUCCESS| Requirement based |
|H_05| Check if the quit option works well| Integer '4' from the user|Exit out of the program|SUCCESS|Scenario|



## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01|H_02|In finding the GST the range goes from 0% to 28% with(5%,12%,18%) as well added in the database | Giving any product | Exact percent of the GST that should be charged | SUCCESS |Requirement based |
|  L_02|H_02|Checking the GST of the product with respect to the GST charged by the shopkeepers | Product and the GST charged |GST charged rightly or not |SUCCESS|Requirement based|
|  L_03 |H_02|Checking the shop's license | Shop's GST number |The shop registered under GST or not | SUCCESS |Requirement based|
