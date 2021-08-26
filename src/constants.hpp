#pragma once

template <int32_t order> constexpr double TS_13{};

/**@{ Thresholds beyond which the finite sum upward recursion yields relative
 * errors <= 1.0e-13 */
/** Threshold for Boys function of order 1 */
template <> inline constexpr double TS_13<1>{0.0083359539129440802909810};
/** Threshold for Boys function of order 2 */
template <> inline constexpr double TS_13<2>{0.1483677058333275256943842};
/** Threshold for Boys function of order 3 */
template <> inline constexpr double TS_13<3>{0.4468891297665036527315762};
/** Threshold for Boys function of order 4 */
template <> inline constexpr double TS_13<4>{0.8422551749252363128972224};
/** Threshold for Boys function of order 5 */
template <> inline constexpr double TS_13<5>{1.2987498970390662893975220};
/** Threshold for Boys function of order 6 */
template <> inline constexpr double TS_13<6>{1.7982063155907441940850110};
/** Threshold for Boys function of order 7 */
template <> inline constexpr double TS_13<7>{2.3306728683535954184097800};
/** Threshold for Boys function of order 8 */
template <> inline constexpr double TS_13<8>{2.8901038705608355002121170};
/** Threshold for Boys function of order 9 */
template <> inline constexpr double TS_13<9>{3.4724184675192165228430210};
/** Threshold for Boys function of order 10 */
template <> inline constexpr double TS_13<10>{4.0746011964882191724360590};
/** Threshold for Boys function of order 11 */
template <> inline constexpr double TS_13<11>{4.6942731133656686228949190};
/** Threshold for Boys function of order 12 */
template <> inline constexpr double TS_13<12>{5.3294795254653956293754380};
/** Threshold for Boys function of order 13 */
template <> inline constexpr double TS_13<13>{5.9785775458091405455211740};
/** Threshold for Boys function of order 14 */
template <> inline constexpr double TS_13<14>{6.6401695502402973508932960};
/** Threshold for Boys function of order 15 */
template <> inline constexpr double TS_13<15>{7.3130582336632937600288150};
/** Threshold for Boys function of order 16 */
template <> inline constexpr double TS_13<16>{7.9962127322635060446370520};
/** Threshold for Boys function of order 17 */
template <> inline constexpr double TS_13<17>{8.6887413898241819368477650};
/** Threshold for Boys function of order 18 */
template <> inline constexpr double TS_13<18>{9.3898692705262431756785280};
/** Threshold for Boys function of order 19 */
template <> inline constexpr double TS_13<19>{10.0989194732002313395711600};
/** Threshold for Boys function of order 20 */
template <> inline constexpr double TS_13<20>{10.8152976306961921000006500};
/** Threshold for Boys function of order 21 */
template <> inline constexpr double TS_13<21>{11.5384790930459151404748400};
/** Threshold for Boys function of order 22 */
template <> inline constexpr double TS_13<22>{12.2679983518110252462708700};
/** Threshold for Boys function of order 23 */
template <> inline constexpr double TS_13<23>{13.0034403148974800081488300};
/** Threshold for Boys function of order 24 */
template <> inline constexpr double TS_13<24>{13.7444330953929901225250500};
/** Threshold for Boys function of order 25 */
template <> inline constexpr double TS_13<25>{14.4906420321716611898394100};
/** Threshold for Boys function of order 26 */
template <> inline constexpr double TS_13<26>{15.2417647102876093867525600};
/** Threshold for Boys function of order 27 */
template <> inline constexpr double TS_13<27>{15.9975267931685717536422700};
/** Threshold for Boys function of order 28 */
template <> inline constexpr double TS_13<28>{16.7576785155530562167119100};
/**@}*/

template <int32_t order> constexpr double TS_14{};

/**@{ Thresholds beyond which the finite sum upward recursion yields relative
 * errors <= 1.0e-14 */
/** Threshold for Boys function of order 1 */
template <> inline constexpr double TS_14<1>{0.0842289602844362981561397};
/** Threshold for Boys function of order 2 */
template <> inline constexpr double TS_14<2>{0.5003451750053743607295222};
/** Threshold for Boys function of order 3 */
template <> inline constexpr double TS_14<3>{1.0583694968977321096560450};
/** Threshold for Boys function of order 4 */
template <> inline constexpr double TS_14<4>{1.6750158810668407917253280};
/** Threshold for Boys function of order 5 */
template <> inline constexpr double TS_14<5>{2.3265075887772442495988270};
/** Threshold for Boys function of order 6 */
template <> inline constexpr double TS_14<6>{3.0037376825087475888478400};
/** Threshold for Boys function of order 7 */
template <> inline constexpr double TS_14<7>{3.7019853047433407630701530};
/** Threshold for Boys function of order 8 */
template <> inline constexpr double TS_14<8>{4.4181037270685214832573930};
/** Threshold for Boys function of order 9 */
template <> inline constexpr double TS_14<9>{5.1496628738776405176627610};
/** Threshold for Boys function of order 10 */
template <> inline constexpr double TS_14<10>{5.8946681974842429889185320};
/** Threshold for Boys function of order 11 */
template <> inline constexpr double TS_14<11>{6.6514528311865436355181700};
/** Threshold for Boys function of order 12 */
template <> inline constexpr double TS_14<12>{7.4186193647985479735843880};
/** Threshold for Boys function of order 13 */
template <> inline constexpr double TS_14<13>{8.1949957283110543224954200};
/** Threshold for Boys function of order 14 */
template <> inline constexpr double TS_14<14>{8.9795969896727078690907210};
/** Threshold for Boys function of order 15 */
template <> inline constexpr double TS_14<15>{9.7715921148436764561194670};
/** Threshold for Boys function of order 16 */
template <> inline constexpr double TS_14<16>{10.5702758553146870652322300};
/** Threshold for Boys function of order 17 */
template <> inline constexpr double TS_14<17>{11.3750456107774717507044800};
/** Threshold for Boys function of order 18 */
template <> inline constexpr double TS_14<18>{12.1853827365098142636077300};
/** Threshold for Boys function of order 19 */
template <> inline constexpr double TS_14<19>{13.0008375922732696942855200};
/** Threshold for Boys function of order 20 */
template <> inline constexpr double TS_14<20>{13.8210176239508920073901800};
/** Threshold for Boys function of order 21 */
template <> inline constexpr double TS_14<21>{14.6455778499282601817043400};
/** Threshold for Boys function of order 22 */
template <> inline constexpr double TS_14<22>{15.4742132333089567029346000};
/** Threshold for Boys function of order 23 */
template <> inline constexpr double TS_14<23>{16.3066525276783553323323000};
/** Threshold for Boys function of order 24 */
template <> inline constexpr double TS_14<24>{17.1426532757364654146174500};
/** Threshold for Boys function of order 25 */
template <> inline constexpr double TS_14<25>{17.9819977138635616649749200};
/** Threshold for Boys function of order 26 */
template <> inline constexpr double TS_14<26>{18.8244893930083095108100100};
/** Threshold for Boys function of order 27 */
template <> inline constexpr double TS_14<27>{19.6699503700489401311293700};
/** Threshold for Boys function of order 28 */
template <> inline constexpr double TS_14<28>{20.5182188569208513606976000};
/**@}*/

template <int32_t order> constexpr double TS_15{};

/**@{ Thresholds beyond which the finite sum upward recursion yields relative
 * errors <= 1.0e-15 */
/** Threshold for Boys function of order 1 */
template <> inline constexpr double TS_15<1>{0.9790139040220137789788757};
/** Threshold for Boys function of order 2 */
template <> inline constexpr double TS_15<2>{2.1017070305855924703549480};
/** Threshold for Boys function of order 3 */
template <> inline constexpr double TS_15<3>{3.1445397188199003877102450};
/** Threshold for Boys function of order 4 */
template <> inline constexpr double TS_15<4>{4.1596325783127538486945790};
/** Threshold for Boys function of order 5 */
template <> inline constexpr double TS_15<5>{5.1647541030693416502563210};
/** Threshold for Boys function of order 6 */
template <> inline constexpr double TS_15<6>{6.1662708147482573174081310};
/** Threshold for Boys function of order 7 */
template <> inline constexpr double TS_15<7>{7.1665138135123299470676790};
/** Threshold for Boys function of order 8 */
template <> inline constexpr double TS_15<8>{8.1663337431398378811955660};
/** Threshold for Boys function of order 9 */
template <> inline constexpr double TS_15<9>{9.1660347430929746224688570};
/** Threshold for Boys function of order 10 */
template <> inline constexpr double TS_15<10>{10.1657208555644035148649800};
/** Threshold for Boys function of order 11 */
template <> inline constexpr double TS_15<11>{11.1654242318177621008175600};
/** Threshold for Boys function of order 12 */
template <> inline constexpr double TS_15<12>{12.1651521021988257881092300};
/** Threshold for Boys function of order 13 */
template <> inline constexpr double TS_15<13>{13.1649036844718511223338900};
/** Threshold for Boys function of order 14 */
template <> inline constexpr double TS_15<14>{14.1646760858562882757562900};
/** Threshold for Boys function of order 15 */
template <> inline constexpr double TS_15<15>{15.1644662407825723109250900};
/** Threshold for Boys function of order 16 */
template <> inline constexpr double TS_15<16>{16.1642714595624443809025000};
/** Threshold for Boys function of order 17 */
template <> inline constexpr double TS_15<17>{17.1640895153669329492643500};
/** Threshold for Boys function of order 18 */
template <> inline constexpr double TS_15<18>{18.1639185951486175659590700};
/** Threshold for Boys function of order 19 */
template <> inline constexpr double TS_15<19>{19.1637572235597897195541300};
/** Threshold for Boys function of order 20 */
template <> inline constexpr double TS_15<20>{20.1636041927913716725512300};
/** Threshold for Boys function of order 21 */
template <> inline constexpr double TS_15<21>{21.1634585056448626119282300};
/** Threshold for Boys function of order 22 */
template <> inline constexpr double TS_15<22>{22.1633193312972751485743300};
/** Threshold for Boys function of order 23 */
template <> inline constexpr double TS_15<23>{23.1631859713558954194004500};
/** Threshold for Boys function of order 24 */
template <> inline constexpr double TS_15<24>{24.1630578337965419349846800};
/** Threshold for Boys function of order 25 */
template <> inline constexpr double TS_15<25>{25.1629344128275676292202600};
/** Threshold for Boys function of order 26 */
template <> inline constexpr double TS_15<26>{26.1628152731982740150813500};
/** Threshold for Boys function of order 27 */
template <> inline constexpr double TS_15<27>{27.1627000378561825211132500};
/** Threshold for Boys function of order 28 */
template <> inline constexpr double TS_15<28>{28.1625883781476762000404200};
/**@}*/
