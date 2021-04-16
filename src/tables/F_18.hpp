
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 18.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<18>() {
  // clang-format off
  return {{{2.70270270270270285273e-2, -2.56410256410256401360e-2, 1.21951219512195126182e-2, -3.87596899224806196171e-3, 9.25925925925925961263e-4, -1.77304964539007077051e-4, 2.83446712018140569963e-5},
           {2.45810905609476181011e-2, -2.33146635955106887317e-2, 1.10861554723930989114e-2, -3.52277558356221473512e-3, 8.41392192310806003031e-4, -1.61089569154625314234e-4, 2.57482777508821810016e-5},
           {2.23570455342595800219e-2, -2.11998292240565509859e-2, 1.00782333252793891709e-2, -3.20182483122001797921e-3, 7.64588893414868417744e-4, -1.46359412709920206751e-4, 2.33900507151674151552e-5},
           {2.03347181386436363926e-2, -1.92772507468279528930e-2, 9.16213203714354162965e-3, -2.91016843445907839177e-3, 6.94808014494762912761e-4, -1.32978263508695779705e-4, 2.12481146002924181431e-5},
           {1.84957723878767070491e-2, -1.75294153947485632783e-2, 8.32947147472163675064e-3, -2.64512810240312467094e-3, 6.31406478352445157433e-4, -1.20822401927099854521e-4, 1.93026056132011072106e-5},
           {1.68235423865114551434e-2, -1.59404085882904437976e-2, 7.57263761534700177019e-3, -2.40427079097013229186e-3, 5.73800181569200824783e-4, -1.09779469850862257895e-4, 1.75354864530969581230e-5},
           {1.53028799325662170916e-2, -1.44957678424362437081e-2, 6.88471240041127214432e-3, -2.18538621384692377525e-3, 5.21458579113883726429e-4, -9.97474260345005710572e-5, 1.59303781719407314035e-5},
           {1.39200160502110266425e-2, -1.31823500474275243782e-2, 6.25941002080854669992e-3, -1.98646641843943294256e-3, 4.73899766844172482417e-4, -9.06335976208143511952e-5, 1.44724075297454654560e-5},
           {1.26624351771749705381e-2, -1.19882108989076106853e-2, 5.69101904380474570705e-3, -1.80568723695494312738e-3, 4.30686016071711889538e-4, -8.23538189595166594511e-5, 1.31480684153232538620e-5},
           {1.15187608485186852858e-2, -1.09024953636623032904e-2, 5.17434984506409678673e-3, -1.64139144024600357186e-3, 3.91419718584947893755e-4, -7.48316496812248630605e-5, 1.19450960351149748835e-5},
           {1.04786518246015245004e-2, -9.91533816940703104093e-3, 4.70468685885795916829e-3, -1.49207343790919589460e-3, 3.55739704356877717815e-4, -6.79976647249402318474e-5, 1.08523526925142205479e-5},
           {9.53270770751067468562e-3, -9.01777339991608611891e-3, 4.27774520423812153885e-3, -1.35636538253381820802e-3, 3.23317897644802884193e-4, -6.17888096905587941602e-5, 9.85972408880809139578e-6},
           {8.67238317780680972868e-3, -8.20165236110409999470e-3, 3.88963128559537737322e-3, -1.23302454907075163815e-3, 2.93856280348122863091e-4, -5.61478154992034946837e-5, 8.95802517552405757608e-6},
           {7.88991006298991881529e-3, -7.45956896023631209347e-3, 3.53680700292376528140e-3, -1.12092187216257239794e-3, 2.67084134357869617139e-4, -5.10226668989955612558e-5, 8.13891467752263107944e-6},
           {7.17822652133888201159e-3, -6.78479190997578231193e-3, 3.21605724061591047302e-3, -1.01903153505346474525e-3, 2.42755537234932554933e-4, -4.63661198575021272117e-5, 7.39481748745315196100e-6},
           {6.53091269039967736026e-3, -6.17120313211942488063e-3, 2.92446033403796984765e-3, -9.26421513482429616511e-4, 2.20647087917180971571e-4, -4.21352633392379710502e-5, 6.71885420595941638700e-6},
           {5.94213220899873252601e-3, -5.61324179321804738602e-3, 2.65936124075758168264e-3, -8.42244986847204561882e-4, 2.00555841301086189721e-4, -3.82911213815566306494e-5, 6.10477716897743341096e-6},
           {5.40657907579275998772e-3, -5.10585345635222037641e-3, 2.41834716838264717972e-3, -7.65732536992277989032e-4, 1.82297432491092546757e-4, -3.47982917589347687834e-5, 5.54691236423918151375e-6},
           {4.91942935653658618145e-3, -4.64444388062978594234e-3, 2.19922543374655599796e-3, -6.96185062297738788822e-4, 1.65704373278126668037e-4, -3.16246178675702862225e-5, 5.04010669425537637399e-6},
           {4.47629729691186809687e-3, -4.22483704292214191922e-3, 2.00000334885902172899e-3, -6.32967341394946288527e-4, 1.50624505013829094882e-4, -2.87408907725887331720e-5, 4.57968009311602917792e-6},
           {4.07319543832619732765e-3, -3.84323699536416596434e-3, 1.81886994782373017689e-3, -5.75502186872218742322e-4, 1.36919593504373110797e-4, -2.61205786418965549072e-5, 4.16138204989026474671e-6},
           {3.70649837093983171299e-3, -3.49619320756950182141e-3, 1.65417938597960936450e-3, -5.23265134815321963403e-4, 1.24464052870746348005e-4, -2.37395810464766539836e-5, 3.78135213265425239746e-6},
           {3.37290979164757637535e-3, -3.18056907468784386128e-3, 1.50443585801046490757e-3, -4.75779621004708661199e-4, 1.13143786523494510859e-4, -2.15760058390913815976e-5, 3.43608414461539028639e-6},
           {3.06943256514613169172e-3, -2.89351330165286621532e-3, 1.36827989583240524143e-3, -4.32612599110636830875e-4, 1.02855134490404399026e-4, -1.96099665341179368600e-5, 3.12239357778426595435e-6},
           {2.79334151383404255542e-3, -2.63243390050982382228e-3, 1.24447591984069762944e-3, -3.93370560330721366279e-4, 9.35039173256395372315e-5, -1.78233983025664408767e-5, 2.83738806049256408681e-6},
           {2.54215868737794024879e-3, -2.39497456181701111680e-3, 1.13190092869647034035e-3, -3.57695917640395090638e-4, 8.50045677276934443000e-5, -1.61998908700170099256e-5, 2.57844052305478004626e-6},
           {2.31363088556703778292e-3, -2.17899318300896057896e-3, 1.02953422336688935577e-3, -3.25263721209971361486e-4, 7.72793418096058505520e-5, -1.47245367628854394957e-5, 2.34316483128741000571e-6},
           {2.10570922877893317721e-3, -1.98254235649459632784e-3, 9.36448070698107188845e-4, -2.95778674614045953943e-4, 7.02576027058190923525e-5, -1.33837934915662549481e-5, 2.12939366066975040734e-6},
           {1.91653058918481557574e-3, -1.80385163832505013119e-3, 8.51799220487416499682e-4, -2.68972424248519533397e-4, 6.38751698727690165420e-5, -1.21653583889473807900e-5, 1.93515840487235203857e-6},
           {1.74440071290537157198e-3, -1.64131143467096296713e-3, 7.74821197910379138966e-4, -2.44601096903561128319e-4, 5.80737280510891065483e-5, -1.10580549407601659849e-5, 1.75867093138893201259e-6},
           {1.58777887884766280568e-3, -1.49345835824994015509e-3, 7.04817300323648814227e-4, -2.22443062740980987500e-4, 5.28002904118696106232e-5, -1.00517295513267946124e-5, 1.59830701426371401114e-6},
           {1.44526395405164607803e-3, -1.35896192037954157035e-3, 6.41154233971320624240e-4, -2.02296903013186499774e-4, 4.80067109129326014959e-5, -9.13715778549660019060e-6, 1.45259128957058312815e-6},
           {1.31558171818289587791e-3, -1.23661243662515508285e-3, 5.83256332032412836038e-4, -1.83979563757596020681e-4, 4.36492413482658100444e-5, -8.30595921583453469946e-6, 1.32018359352010000496e-6},
           {1.19757334144386228675e-3, -1.12531003517923628571e-3, 5.30600300814413955094e-4, -1.67324678422777563301e-4, 3.96881289888678420838e-5, -7.55052008426429754331e-6, 1.19986655597868140902e-6},
           {1.09018491074704018499e-3, -1.02405466725212653499e-3, 4.82710445772566284963e-4, -1.52181043946676659373e-4, 3.60872510901749464886e-5, -6.86392306012612219866e-6, 1.09053433390222847938e-6},
           {9.92457908597311946192e-4, -9.31937027968871337623e-4, 4.39154333461966403952e-4, -1.38411236227685592592e-4, 3.28137828834788148431e-5, -6.23988344266508353344e-6, 9.91182379823934000954e-7},
           {9.03520557856088576097e-4, -8.48130304636495065650e-4, 3.99538849550749419325e-4, -1.25890352219188442423e-4, 2.98378959795029479829e-5, -5.67269121593827609995e-6, 9.00898150192779391250e-7},
           {8.22579953487166106937e-4, -7.71882676849433048416e-4, 3.63506616674901721162e-4, -1.14504867049607892424e-4, 2.71324843944791214132e-5, -5.15715841857894879600e-6, 8.18852667125735837228e-7},
           {7.48914909586593374735e-4, -7.02510499807684220784e-4, 3.30732739232509004648e-4, -1.04151595633775957196e-4, 2.46729156652886316551e-5, -4.68857134029185885934e-6, 7.44292855095126177244e-7},
           {6.81869456542632244346e-4, -6.39392108496544017519e-4, 3.00921845228260538378e-4, -9.47367492075430598676e-5, 2.24368047528940097487e-5, -4.26264710183887277349e-6, 6.76534581297522948045e-7},
           {6.20846929117476842123e-4, -5.81962186076561490029e-4, 2.73805398015734098235e-4, -8.61750780949176116473e-5, 2.04038086445551943232e-5, -3.87549421602652290812e-6, 6.14956335009624771140e-7},
           {5.65304591644478072847e-4, -5.29706645010300175916e-4, 2.49139253270761243907e-4, -7.83890928138454605922e-5, 1.85554397571692214605e-5, -3.52357676420888046018e-6, 5.58993487191202389484e-7},
           {5.14748751443015002335e-4, -4.82157974156412314111e-4, 2.26701438787047085182e-4, -7.13083563504001859048e-5, 1.68748964182815413897e-5, -3.20368185641505266964e-6, 5.08133077001191539811e-7},
           {4.68730316013008126413e-4, -4.38891009334927805884e-4, 2.06290136736119882098e-4, -6.48688410883896805596e-5, 1.53469088595136378417e-5, -2.91289007371493263309e-6, 4.61909076800920389092e-7},
           {4.26840753623464088783e-4, -3.99519088749969864937e-4, 1.87721849896612953245e-4, -5.90123444782921202081e-5, 1.39575993008093387051e-5, -2.64854861913413529309e-6, 4.19898091674256177379e-7},
           {3.88708420591645311976e-4, -3.63690558183174278851e-4, 1.70829735050082785709e-4, -5.36859580715644575254e-5, 1.26943548343579724479e-5, -2.40824692857805939026e-6, 3.81715453539807032460e-7},
           {3.53995221895350036835e-4, -3.31085594075474420536e-4, 1.55462088277712976326e-4, -4.88415850387478091841e-5, 1.15457119355224186255e-5, -2.18979451606035172603e-6, 3.47011673603079586011e-7},
           {3.22393574801132284241e-4, -3.01413315526177663737e-4, 1.41480968288569476828e-4, -4.44355017370013153071e-5, 1.05012515356849080872e-5, -1.99120084826584827365e-6, 3.15469220231022288659e-7},
           {2.93623647954033978325e-4, -2.74409158883252130533e-4, 1.28760945178478921009e-4, -4.04279592988756035932e-5, 9.55150368962616496326e-6, -1.81065706230574900818e-6, 2.86799592358852287232e-7},
           {2.67430850884935514527e-4, -2.49832491001863803669e-4, 1.17187963170833591548e-4, -3.67828215830612689123e-5, 8.68786095878171178751e-6, -1.64651935761896196717e-6, 2.60740661287782891285e-7},
           {2.43583551173011544043e-4, -2.27464439431594901567e-4, 1.06658306937336164557e-4, -3.34672361629347652682e-5, 7.90249971229872136573e-6, -1.49729390849761827506e-6, 2.37054256227928679993e-7},
           {2.21870998573962195091e-4, -2.07105919776563929995e-4, 9.70776620475659448922e-5, -3.04513353330843021126e-5, 7.18830862099714899111e-6, -1.36162315781149615951e-6, 2.15523971206589157517e-7},
           {2.02101437308706196336e-4, -1.88575842275129162105e-4, 8.83602609600602298141e-5, -2.77079643904511546096e-5, 6.53882368579973147422e-6, -1.23827336530683229905e-6, 1.95953173019464261261e-7},
           {1.84100389419358443071e-4, -1.71709481283587993977e-4, 8.04281067523444687020e-5, -2.52124346978304473828e-5, 5.94816920255513687232e-6, -1.12612329547902404116e-6, 1.78163191770370175607e-7},
           {1.67709093655282249526e-4, -1.56356992836366795463e-4, 7.32102675002603580810e-5, -2.29422992655658484009e-5, 5.41100411999732683300e-6, -1.02415394057440720830e-6, 1.61991677241123206674e-7},
           {1.52783085766071088409e-4, -1.42382066807322674260e-4, 6.66422348646138445593e-5, -2.08771487944584033822e-5, 4.92247329737192443875e-6, -9.31439183861816460332e-7, 1.47291105873303649871e-7},
           {1.39190907363441598648e-4, -1.29660701425392407230e-4, 6.06653410315785560276e-5, -1.89984263111085899603e-5, 4.47816321347869053320e-6, -8.47137317019376046577e-7, 1.33927424541956490039e-7},
           {1.26812931681984591243e-4, -1.18080089014223151467e-4, 5.52262286878691543600e-5, -1.72892586978652638432e-5, 4.07406171994865427832e-6, -7.70483333386887031714e-7, 1.21778818570998643917e-7},
           {1.15540295630226009832e-4, -1.07537602839873666204e-4, 5.02763691973812150578e-5, -1.57343035748481602503e-5, 3.70652146887571004599e-6, -7.00781926012887187056e-7, 1.10734592593014245767e-7},
           {1.05273928488213810756e-4, -9.79398758725024678670e-5, 4.57716245872548402004e-5, -1.43196101325779000788e-5, 3.37222667880196325883e-6, -6.37401125944730661761e-7, 1.00694153903001338156e-7},
           {9.59236684847033523440e-5, -8.92019631056377508256e-5, 4.16718493522292359149e-5, -1.30324926418948158102e-5, 3.06816293382809733185e-6, -5.79766522130537881233e-7, 9.15660889062341205110e-8},
           {8.74074592839860041579e-5, -8.12465798378416147489e-5, 3.79405284504101867433e-5, -1.18614154842598446167e-5, 2.79158973856976044521e-6, -5.27356009678638145617e-7, 8.32673241236002895674e-8},
           {7.96506191367861221195e-5, -7.40034090133339197189e-5, 3.45444481945273086003e-5, -1.07958886512835094078e-5, 2.54001557706787391405e-6, -4.79695018103197803332e-7, 7.57223640016005662849e-8},
           {7.25851761080613719747e-5, -6.74084713467740595256e-5, 3.14533970434631150693e-5, -9.82637275840023081941e-6, 2.31117524681991411538e-6, -4.36352175619437379572e-7, 6.88625984859688052741e-8},
           {6.61492633930026868467e-5, -6.14035525286839198008e-5, 2.86398935720596870089e-5, -8.94419270488215480770e-6, 2.10300926004443804678e-6, -3.96935369579458298743e-7, 6.26256739642143697950e-8},
           {6.02865692765087369978e-5, -5.59356823271723826345e-5, 2.60789391454669365481e-5, -8.14145919167572538718e-6, 1.91364512331652104882e-6, -3.61088166797602728712e-7, 5.69549217693266086473e-8},
           {5.49458367858770093707e-5, -5.09566608734504853631e-5, 2.37477930498737208000e-5, -7.41099738057754781414e-6, 1.74138032399338610586e-6, -3.28486560836460931116e-7, 5.17988389698797179492e-8},
           {5.00804085359219243283e-5, -4.64226278474343990749e-5, 2.16257680364347610442e-5, -6.74628204370846034445e-6, 1.58466686754755304553e-6, -2.98836016341956989756e-7, 4.71106166557988092443e-8},
           {4.56478126743054530667e-5, -4.22936706694478100721e-5, 1.96940444214578296955e-5, -6.14137861170013180795e-6, 1.44209722418450475765e-6, -2.71868783256405387533e-7, 4.28477113685983362421e-8},
           {4.16093862062721908928e-5, -3.85334681582284434504e-5, 1.79355010551590810127e-5, -5.59088958302567116048e-6, 1.31239155607519449711e-6, -2.47341456227470622735e-7, 3.89714557240756211620e-8},
           {3.79299323156087909710e-5, -3.51089664373572485855e-5, 1.63345616250860402124e-5, -5.08990580598251666518e-6, 1.19438610830049293866e-6, -2.25032756791671815896e-7, 3.54467046379469451817e-8},
           {3.45774086055735684650e-5, -3.19900841648106362323e-5, 1.48770549000599823443e-5, -4.63396218942496741224e-6, 1.08702265729380931789e-6, -2.04741517964438135460e-7, 3.22415138941236103453e-8},
           {3.15226434625644143283e-5, -2.91494444262637126630e-5, 1.35500876474860713981e-5, -4.21899743885615548266e-6, 9.89338920278362280494e-7, -1.86284852733764627045e-7, 2.93268480943042540471e-8},
           {2.87390779989521563719e-5, -2.65621308744780376026e-5, 1.23419290722874354957e-5, -3.84131745129816306878e-6, 9.00459838016768710358e-7, -1.69496489648550097226e-7, 2.66763152990841155519e-8},
           {2.62025312621144506296e-5, -2.42054659168010943078e-5, 1.12419057305967695729e-5, -3.49756203580356597914e-6, 8.19589651204227796447e-7, -1.54225260231411951989e-7, 2.42659259173784673548e-8},
           {2.38909866063585578887e-5, -2.20588089524951745104e-5, 1.02403059666490947556e-5, -3.18467465685985337033e-6, 7.46004698116675220144e-7, -1.40333724343427810291e-7, 2.20738736249160721013e-8},
           {2.17843973150301059463e-5, -2.01033728431248741926e-5, 9.32829300793600004924e-6, -2.89987492554973831670e-6, 6.79046867739080768276e-7, -1.27696920897802285167e-7, 2.00803362959602664211e-8},
           {1.98645097334010317474e-5, -1.83220569642231453683e-5, 8.49782593239937754392e-6, -2.64063358841934064843e-6, 6.18117648607651189361e-7, -1.16201232472652355839e-7, 1.82672951171498434827e-8},
           {1.81147023304901146003e-5, -1.66992953364322548439e-5, 7.74158779298290920519e-6, -2.40464978680349735345e-6, 5.62672719058523476746e-7, -1.05743353420627236977e-7, 1.66183702201341113277e-8},
           {1.65198392512247313685e-5, -1.52209184706470041187e-5, 7.05292024987787080056e-6, -2.18983038007270874306e-6, 5.12217029534985042673e-7, -9.62293520246262262868e-8, 1.51186713220639417270e-8},
           {1.50661370506050017371e-5, -1.38740276856168348157e-5, 6.42576411989190401610e-6, -1.99427114508979645173e-6, 4.66300332111072515450e-7, -8.75738181132513246846e-8, 1.37546620014081405318e-8},
           {1.37410434199632571758e-5, -1.26468807691216212285e-5, 5.85460530607632635605e-6, -1.81623968126942860473e-6, 4.24513116483133466408e-7, -7.96990883348322359818e-8, 1.25140363622756725642e-8},
           {1.25331268230984098886e-5, -1.15287879562497260529e-5, 5.33442561956078407812e-6, -1.65415986617722160719e-6, 3.86482915400349318430e-7, -7.25345420021501404558e-8, 1.13856069546054502737e-8},
           {1.14319760579827147643e-5, -1.05100172914099583359e-5, 4.86065804991064054217e-6, -1.50659772073009527667e-6, 3.51870945884561721754e-7, -6.60159610679575901517e-8, 1.03592029212956545003e-8},
           {1.04281088487761236511e-5, -9.58170852534913469723e-6, 4.42914608064777262880e-6, -1.37224855589549744127e-6, 3.20369055660186494634e-7, -6.00849483800348396438e-8, 9.42557743754507994211e-9},
           {9.51288865384778705402e-6, -8.73579477539537175754e-6, 4.03610668322860824950e-6, -1.24992528445195127888e-6, 2.91696947004795411850e-7, -5.46883988992805012782e-8, 8.57632359324307168914e-9},
           {8.67844894912881105128e-6, -7.96493124710374303041e-6, 3.67809665608908089983e-6, -1.13854779197405995864e-6, 2.65599652765808738690e-7, -4.97780190501413860801e-8, 7.80379794696509836745e-9},
           {7.91762431307225170846e-6, -7.26243037908262160604e-6, 3.35198200564903909810e-6, -1.03713327083894163872e-6, 2.41845241591981010337e-7, -4.53098898140343711342e-8, 7.10105105072782042481e-9},
           {7.22388770038135990588e-6, -6.62220283060406852266e-6, 3.05491009369545327438e-6, -9.44787429806329701480e-7, 2.20222731521198804237e-7, -4.12440695773749866071e-8, 6.46176430878441610630e-9},
           {6.59129334703626868760e-6, -6.03870378417576320523e-6, 2.78428430058543018526e-6, -8.60696499681571390716e-7, 2.00540192967771646790e-7, -3.75442331101029872111e-8, 5.88019259199183840086e-9},
           {6.01442479950373835894e-6, -5.50688408305316626944e-6, 2.53774097645533680675e-6, -7.84119962802372530346e-7, 1.82623023880395283005e-7, -3.41773433815488389728e-8, 5.35111208219552997830e-9},
           {5.48834760680901952341e-6, -5.02214576713282011879e-6, 2.31312847329844928679e-6, -7.14383940662604513476e-7, 1.66312381412169348556e-7, -3.11133532211659459871e-8, 4.86977286914373405440e-9},
           {5.00856625579764656820e-6, -4.58030161018576250081e-6, 2.10848806956928876537e-6, -6.50875179960025075206e-7, 1.51463755870904873718e-7, -2.83249341048380216020e-8, 4.43185586610745227751e-9},
           {4.57098496779395462448e-6, -4.17753829732266421221e-6, 1.92203661605938572226e-6, -5.93035582784003832399e-7, 1.37945674014556888396e-7, -2.57872295956750315345e-8, 4.03343365004722097381e-9},
           {4.17187200931440193018e-6, -3.81038291425528221769e-6, 1.75215074732240497232e-6, -5.40357231594003576078e-7, 1.25638519934883293432e-7, -2.34776311937235736342e-8, 3.67093486820089771907e-9},
           {3.80782720082832090968e-6, -3.47567244962874020539e-6, 1.59735251704787003208e-6, -4.92377864124767847091e-7, 1.14433462843176073464e-7, -2.13755745539159274528e-8, 3.34111188570058421351e-9},
           {3.47575233605904934867e-6, -3.17052603871509631927e-6, 1.45629632862067096725e-6, -4.48676757430902925294e-7, 1.04231482044960829985e-7, -1.94623542177529035711e-8, 3.04101137856418896296e-9},
           {3.17282425024158863596e-6, -2.89231970132554951826e-6, 1.32775704377508484991e-6, -4.08870983989122194891e-7, 9.49424802748504767472e-8, -1.77209551733742994423e-8, 2.76794760342267257746e-9},
           {2.89647029933245711775e-6, -2.63866334913892797867e-6, 1.21061916286327157601e-6, -3.72612006144645669262e-7, 8.64844773663703554762e-8, -1.61358997123733174869e-8, 2.51947809988715631424e-9},
           {2.64434603361581862263e-6, -2.40737985796005690627e-6, 1.10386697990570765794e-6, -3.39582578249931267442e-7, 7.87828769619235680762e-8, -1.46931081913725866405e-8, 2.29338160375737806754e-9},
           {2.41431486866017583896e-6, -2.19648601889704384165e-6, 1.00657562436247600955e-6, -3.09493928626978031372e-7, 7.17697996318222030491e-8, -1.33797724332842936094e-8, 2.08763796953039870323e-9},
           {2.20442957432764668089e-6, -2.00417519924858780381e-6, 9.17902909539442459579e-7, -2.82083196014297223009e-7, 6.53834763745610961068e-8, -1.21842406184919574823e-8, 1.90040991907268763514e-9},
           {2.01291541868260146197e-6, -1.82880155917298340618e-6, 8.37081914794582797762e-7, -2.57111097459382243834e-7, 5.95676970187770069804e-8, -1.10959126209770265343e-8, 1.73002645003969409871e-9},
           {1.83815481833345128766e-6, -1.66886568410767403577e-6, 7.63414235302904422953e-7, -2.34359806708078727384e-7, 5.42713085456405083349e-8, -1.01051448396327361149e-8, 1.57496775281883786113e-9},
           {1.67867336010250141087e-6, -1.52300150554751672283e-6, 6.96263839133387908209e-7, -2.13631024042737123477e-7, 4.94477588033292329044e-8, -9.20316366153499374805e-9, 1.43385149857459474673e-9},
           {1.53312707107413595704e-6, -1.38996439428549271100e-6, 6.35051476842536174581e-7, -1.94744220248732300943e-7, 4.50546814968754723030e-8, -8.38198677257055950724e-9, 1.30542037351522873148e-9},
           {1.40029082513017289922e-6, -1.26862032067512828203e-6, 5.79249593745903785886e-7, -1.77535038959594374850e-7, 4.10535187108326666286e-8, -7.63435160227813678225e-9, 1.18853074589524345210e-9},
           {1.27904778414230647515e-6, -1.15793598598377090379e-6, 5.28377699536318168916e-7, -1.61853843058920936172e-7, 3.74091775622837649631e-8, -6.95365025469385287631e-9, 1.08214236262076038327e-9},
           {1.16837978114530440959e-6, -1.05696983755573679335e-6, 4.81998154016235797167e-7, -1.47564392115424203260e-7, 3.40897178908315935527e-8, -6.33387033600530745442e-9, 9.85308981732097371747e-10},
           {1.06735856114313339225e-6, -9.64863888372247416271e-7, 4.39712331438915317450e-7, -1.34542639007722508426e-7, 3.10660681731870399877e-8, -5.76954114344841508308e-9, 8.97169855585378751920e-10},
           {9.75137802777997329755e-7, -8.80836268751813585914e-7, 4.01157129342607345426e-7, -1.22675634968543822392e-7, 2.83117671053755680848e-8, -5.25568472862106010884e-9, 8.16941987321765001157e-10},
           {8.90945850987275558303e-7, -8.04174444444767902580e-7, 3.66001790844382796123e-7, -1.11860533253633955819e-7, 2.58027285277443861589e-8, -4.78777139268340336458e-9, 7.43913090270209797938e-10},
           {8.14079097047206682610e-7, -7.34229041297562455569e-7, 3.33945012163475354460e-7, -1.02003682527706306512e-7, 2.35170275789936295070e-8, -4.36167921117256964309e-9, 6.77435186342512629802e-10},
           {7.43895948111006317539e-7, -6.70408222049501599540e-7, 3.04712309693408426221e-7, -9.30198018663052244296e-8, 2.14347061572976565277e-8, -3.97365722274814228334e-9, 6.16918785306723783460e-10},
           {6.79811333543936674834e-7, -6.12172565725195988349e-7, 2.78053623260777507649e-7, -8.48312300057936136380e-8, 1.95375959409787140389e-8, -3.62029194943926120824e-9, 5.61827592120262877542e-10},
           {6.21291700085102087744e-7, -5.59030404544254277209e-7, 2.53741134317282162393e-7, -7.73672421404796714114e-8, 1.78091573797333617022e-8, -3.29847694618879989094e-9, 5.11673694316056123989e-10},
           {5.67850452167597159431e-7, -5.10533577325572000798e-7, 2.31567279729514806542e-7, -7.05634281722154553290e-8, 1.62343332115369248941e-8, -3.00538510496122643673e-9, 4.66013185807799924409e-10},
           {5.19043797643496836441e-7, -4.66273562053496969253e-7, 2.11342943575402259657e-7, -6.43611268691269647780e-8, 1.47994151913767834375e-8, -2.73844346365005854338e-9, 4.24442187454224402758e-10},
           {4.74466962722960067971e-7, -4.25877953630190168711e-7, 1.92895810942804614644e-7, -5.87069108914755371018e-8, 1.34919228370827098709e-8, -2.49531029271620262595e-9, 3.86593228333471125595e-10},
           {4.33750743179154163380e-7, -3.89007255892818157568e-7, 1.76068869168913365934e-7, -5.35521180985382477379e-8, 1.23004931058179857385e-8, -2.27385425311757266473e-9, 3.52131954960520091791e-10},
           {3.96558361821721573597e-7, -3.55351959753139478814e-7, 1.60719043271751696350e-7, -4.88524249649672329162e-8, 1.12147800132520596087e-8, -2.07213543784161963205e-9, 3.20754138663100240619e-10}}};
  // clang-format on
}
} // namespace tables
