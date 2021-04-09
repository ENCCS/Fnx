#pragma once

#include "types.hpp"

namespace tables {
template <> inline constexpr Table pretabulated<2>() noexcept {
  // clang-format off
  return {{{2.000000000000000e-01, -1.428571428571428e-01, 5.555555555555555e-02, -1.515151515151515e-02, 3.205128205128205e-03, -5.555555555555556e-04, 8.169934640522877e-05},
           {1.862550047926215e-01, -1.321880296357389e-01, 5.119697353553266e-02, -1.392342133635691e-02, 2.939247950749319e-03, -5.086642749095129e-04, 7.471025556363686e-05},
           {1.735345370549858e-01, -1.223548304923681e-01, 4.719132546074373e-02, -1.279712717308558e-02, 2.695795869340248e-03, -4.657824615869915e-04, 6.832527006459317e-05},
           {1.617584351224091e-01, -1.132899248838797e-01, 4.350937792119995e-02, -1.176405052774481e-02, 2.472855149266623e-03, -4.265636929092849e-04, 6.249172813656247e-05},
           {1.508530154442877e-01, -1.049312889822492e-01, 4.012436052506554e-02, -1.081634237823756e-02, 2.268674527502071e-03, -3.906917348438215e-04, 5.716159146395730e-05},
           {1.407505368259127e-01, -9.722202441693015e-02, 3.701175560293882e-02, -9.946823523377555e-03, 2.081653867928553e-03, -3.578778923422914e-04, 5.229103681040416e-05},
           {1.313887097549671e-01, -9.010992723400761e-02, 3.414910606001122e-02, -9.148926803635493e-03, 1.910331005066533e-03, -3.278585936578617e-04, 4.784008390060728e-05},
           {1.227102469671166e-01, -8.354709360298106e-02, 3.151583979623494e-02, -8.416644350097563e-03, 1.753369741518739e-03, -3.003931878716503e-04, 4.377225632694550e-05},
           {1.146624517366961e-01, -7.748955910391175e-02, 2.909310925317523e-02, -7.744479420826300e-03, 1.609548897325891e-03, -2.752619367107099e-04, 4.005427253650722e-05},
           {1.071968406812385e-01, -7.189696870310740e-02, 2.686364477254240e-02, -7.127402422700369e-03, 1.477752318463545e-03, -2.522641834260511e-04, 3.665576421781861e-05},
           {1.002687981450174e-01, -6.673227477682227e-02, 2.481162056657837e-02, -6.560810752247362e-03, 1.356959759935072e-03, -2.312166830345837e-04, 3.354901964639467e-05},
           {9.383725947918738e-02, -6.196146077175330e-02, 2.292253220549852e-02, -6.040492121279822e-03, 1.246238566408876e-03, -2.119520796268546e-04, 3.070874976657751e-05},
           {8.786442076660679e-02, -5.755328830034660e-02, 2.118308462296335e-02, -5.562591062579039e-03, 1.144736080173861e-03, -1.943175177154256e-04, 2.811187498585880e-05},
           {8.231547274993320e-02, -5.347906565986670e-02, 1.958108972789505e-02, -5.123578337698604e-03, 1.051672712405373e-03, -1.781733757578965e-04, 2.573733083878263e-05},
           {7.715835691384190e-02, -4.971243593842966e-02, 1.810537279060735e-02, -4.720222993412257e-03, 9.663356193988470e-04, -1.633921110441483e-04, 2.356589084219274e-05},
           {7.236354184782504e-02, -4.622918303023180e-02, 1.674568684386547e-02, -4.349566835619366e-03, 8.880729305895610e-04, -1.498572060986478e-04, 2.158000501348898e-05},
           {6.790381817643767e-02, -4.300705402735405e-02, 1.549263440575359e-02, -4.008901109839022e-03, 8.162884798791682e-04, -1.374622076240758e-04, 1.976365266001781e-05},
           {6.375411049039417e-02, -4.002559658801066e-02, 1.433759589166765e-02, -3.695745195945253e-03, 7.504369960741682e-04, -1.261098498098183e-04, 1.810220817195197e-05},
           {5.989130484579273e-02, -3.726601000204920e-02, 1.327266413788304e-02, -3.407827141680935e-03, 6.900197121453155e-04, -1.157112545549815e-04, 1.658231866411277e-05},
           {5.629409052106062e-02, -3.471100878491264e-02, 1.229058450944125e-02, -3.143065874881909e-03, 6.345803565742429e-04, -1.061852018169492e-04, 1.519179241515844e-05},
           {5.294281483297645e-02, -3.234469773206740e-02, 1.138470011098239e-02, -2.899554948377934e-03, 5.837014932951150e-04, -9.745746389888176e-05, 1.391949714631062e-05},
           {4.981934991525344e-02, -3.015245745792508e-02, 1.054890166101116e-02, -2.675547684334085e-03, 5.370011796931330e-04, -8.946019803824536e-05, 1.275526726714941e-05},
           {4.690697045650066e-02, -2.812083952731124e-02, 9.777581628277824e-03, -2.469443596464659e-03, 4.941299148137658e-04, -8.213139215825967e-05, 1.168981929372904e-05},
           {4.419024147967926e-02, -2.623747036425926e-02, 9.065592263805560e-03, -2.279775979191897e-03, 4.547678523900504e-04, -7.541435909944215e-05, 1.071467471503388e-05},
           {4.165491532313674e-02, -2.449096319297318e-02, 8.408207193895810e-03, -2.105200562524727e-03, 4.186222555314197e-04, -6.925727506317791e-05, 9.822089648237215e-06},
           {3.928783705457012e-02, -2.287083732979037e-02, 7.801086268463385e-03, -1.944485140281406e-03, 3.854251719556173e-04, -6.361275837708975e-05, 9.004990681906344e-06},
           {3.707685761441961e-02, -2.136744420341619e-02, 7.240243385536491e-03, -1.796500087350096e-03, 3.549313105029849e-04, -5.843748503621391e-05, 8.256916359735898e-06},
           {3.501075404475801e-02, -1.997189953408154e-02, 6.722017036927874e-03, -1.660209689041729e-03, 3.269161013657749e-04, -5.369183778761123e-05, 7.571963806057234e-06},
           {3.307915621420123e-02, -1.867602115103361e-02, 6.243043342144406e-03, -1.534664212303017e-03, 3.011739240087888e-04, -4.933958581179197e-05, 6.944740038692366e-06},
           {3.127247949916350e-02, -1.747227197231212e-02, 5.800231357739455e-03, -1.418992654681121e-03, 2.775164881648475e-04, -4.534759231469148e-05, 6.370317555085607e-06},
           {2.958186292732056e-02, -1.635370771145648e-02, 5.390740467694288e-03, -1.312396112517591e-03, 2.557713545715077e-04, -4.168554758117575e-05, 5.844193814410291e-06},
           {2.799911233079239e-02, -1.531392891296841e-02, 5.011959677195249e-03, -1.214141714945073e-03, 2.357805832850607e-04, -3.832572525723275e-05, 5.362254271832707e-06},
           {2.651664809465072e-02, -1.434703695232615e-02, 4.661488647493507e-03, -1.123557074909296e-03, 2.173994984742665e-04, -3.524275982500650e-05, 4.920738651615784e-06},
           {2.512745712120141e-02, -1.344759366738895e-02, 4.337120323521414e-03, -1.040025212680442e-03, 2.004955595686187e-04, -3.241344341435489e-05, 4.516210173526697e-06},
           {2.382504866236808e-02, -1.261058431639917e-02, 4.036825018710891e-03, -9.629799111879902e-04, 1.849473295225570e-04, -2.981654025822519e-05, 4.145527472320119e-06},
           {2.260341370166703e-02, -1.183138358371667e-02, 3.758735833121299e-03, -8.919014660444028e-04, 1.706435317655483e-04, -2.743261724825314e-05, 3.805818973122460e-06},
           {2.145698759394741e-02, -1.110572437811729e-02, 3.501135291633925e-03, -8.263127963453265e-04, 1.574821881452490e-04, -2.524388918289949e-05, 3.494459506544476e-06},
           {2.038061569548794e-02, -1.042966919014869e-02, 3.262443098696046e-03, -7.657758852745376e-04, 1.453698308433566e-04, -2.323407742431069e-05, 3.209048966482714e-06},
           {1.936952173938751e-02, -9.799583794838416e-03, 3.041204914980483e-03, -7.098885222255071e-04, 1.342207818570061e-04, -2.138828079300476e-05, 2.947392831002011e-06},
           {1.841927873163863e-02, -9.212113104152403e-03, 2.836082069439900e-03, -6.582813206007230e-04, 1.239564941978812e-04, -1.969285763240874e-05, 2.707484382573250e-06},
           {1.752578216199305e-02, -8.664158990153886e-03, 2.645842127646440e-03, -6.106149876854532e-04, 1.145049494713842e-04, -1.813531806910178e-05, 2.487488478411294e-06},
           {1.668522534086594e-02, -8.152859914947371e-03, 2.469350244077461e-03, -5.665778250331923e-04, 1.058001069635643e-04, -1.670422558015330e-05, 2.285726734843278e-06},
           {1.589407668921381e-02, -7.675572217332303e-03, 2.305561232193359e-03, -5.258834396627531e-04, 9.778139978801594e-05, -1.538910705692786e-05, 2.100664001652192e-06},
           {1.514905882268739e-02, -7.229852918748372e-03, 2.153512291804516e-03, -4.882686480674488e-04, 9.039327403222234e-05, -1.418037062582601e-05, 1.930896013289066e-06},
           {1.444712928451414e-02, -6.813443922670713e-03, 2.012316338387872e-03, -4.534915565892664e-04, 8.358476719613231e-05, -1.306923055125459e-05, 1.775138113824151e-06},
           {1.378546279361284e-02, -6.424257492202432e-03, 1.881155883731928e-03, -4.213298031283778e-04, 7.730912253810479e-05, -1.204763860522813e-05, 1.632214961600052e-06},
           {1.316143488547553e-02, -6.060362900298267e-03, 1.759277421600776e-03, -3.915789464525432e-04, 7.152343623747403e-05, -1.110822134190064e-05, 1.501051127836288e-06},
           {1.257260683345996e-02, -5.719974155915319e-03, 1.645986276048480e-03, -3.640509905527803e-04, 6.618833455136381e-05, -1.024422276447667e-05, 1.380662510987320e-06},
           {1.201671174739396e-02, -5.401438717494766e-03, 1.540641873616840e-03, -3.385730325708869e-04, 6.126767838827474e-05, -9.449451916772295e-06, 1.270148495539655e-06},
           {1.149164175487659e-02, -5.103227112597815e-03, 1.442653403941855e-03, -3.149860238100178e-04, 5.672829294445929e-05, -8.718234972573937e-06, 1.168684790208155e-06},
           {1.099543617843430e-02, -4.823923389308605e-03, 1.351475836303738e-03, -2.931436342396970e-04, 5.253972025306053e-05, -8.045371433224508e-06, 1.075516886210922e-06},
           {1.052627062881345e-02, -4.562216331230553e-03, 1.266606262406776e-03, -2.729112117288615e-04, 4.867399268214550e-05, -7.426094077870710e-06, 9.899540815157450e-07},
           {1.008244694121943e-02, -4.316891373590037e-03, 1.187580538190841e-03, -2.541648279915762e-04, 4.510542558767328e-05, -6.856032341821542e-06, 9.113640217037917e-07},
           {9.662383887297302e-03, -4.086823163167576e-03, 1.113970199776548e-03, -2.367904039161578e-04, 4.181042748253220e-05, -6.331178826760865e-06, 8.391677124291576e-07},
           {9.264608601134743e-03, -3.870968709542691e-03, 1.045379630749360e-03, -2.206829075752438e-04, 3.876732622435730e-05, -5.847858672366360e-06, 7.728349624031340e-07},
           {8.887748662598279e-03, -3.668361079502486e-03, 9.814434599115152e-04, -2.057456187870182e-04, 3.595620985408759e-05, -5.402701542432766e-06, 7.118802194336995e-07},
           {8.530524785925950e-03, -3.478103590459539e-03, 9.218241703899037e-04, -1.918894546210614e-04, 3.335878083521993e-05, -4.992616000078630e-06, 6.558587653346470e-07},
           {8.191744065729470e-03, -3.299364462383867e-03, 8.662099025971842e-04, -1.790323507204391e-04, 3.095822255145359e-05, -4.614766066215086e-06, 6.043632385131422e-07},
           {7.870293736438317e-03, -3.131371891104808e-03, 8.143124350154244e-04, -1.670986937485894e-04, 2.873907701878977e-05, -4.266549773338065e-06, 5.570204557749871e-07},
           {7.565135404777048e-03, -2.973409508908210e-03, 7.658653281181825e-04, -1.560188006689112e-04, 2.668713285797939e-05, -3.945579543023441e-06, 5.134885073768613e-07},
           {7.275299718131819e-03, -2.824812201166063e-03, 7.206222179790035e-04, -1.457284409299403e-04, 2.478932265524200e-05, -3.649664230395234e-06, 4.734541016255848e-07},
           {6.999881434657724e-03, -2.684962250311708e-03, 6.783552472416459e-04, -1.361683979626205e-04, 2.303362891409544e-05, -3.376792692426206e-06, 4.366301373954189e-07},
           {6.738034863727612e-03, -2.553285780834060e-03, 6.388536221589794e-04, -1.272840667011544e-04, 2.140899786955798e-05, -3.125118749332223e-06, 4.027534848232816e-07},
           {6.488969647845858e-03, -2.429249481127016e-03, 6.019222853515956e-04, -1.190250841177223e-04, 1.990526049848135e-05, -2.892947419641051e-06, 3.715829561645696e-07},
           {6.251946859466484e-03, -2.312357580012383e-03, 5.673806948012794e-04, -1.113449900162642e-04, 1.851306011686035e-05, -2.678722319847974e-06, 3.428974503637599e-07},
           {6.026275388281041e-03, -2.202149057571358e-03, 5.350617003854591e-04, -1.042009155635986e-04, 1.722378600711516e-05, -2.481014129001507e-06, 3.164942563274715e-07},
           {5.811308596493567e-03, -2.098195071584846e-03, 5.048105099828043e-04, -9.755329724927506e-05, 1.602951256598566e-05, -2.298510027171481e-06, 2.921875011953667e-07},
           {5.606441221392710e-03, -2.000096582409708e-03, 4.764837378430777e-04, -9.136561416047160e-05, 1.492294350720659e-05, -2.130004024611300e-06, 2.698067310973105e-07},
           {5.411106506177091e-03, -1.907482160517697e-03, 4.499485285212897e-04, -8.560414663650013e-05, 1.389736069290503e-05, -1.974388105601447e-06, 2.491956129736310e-07},
           {5.224773541502485e-03, -1.820005962207532e-03, 4.250817502320368e-04, -8.023775453053323e-05, 1.294657720400567e-05, -1.830644117512835e-06, 2.302107470284406e-07},
           {5.046944801608438e-03, -1.737345860177692e-03, 4.017692519889049e-04, -7.523767345530681e-05, 1.206489429314205e-05, -1.697836341610595e-06, 2.127205802921181e-07},
           {4.877153860158517e-03, -1.659201716727233e-03, 3.799051793600257e-04, -7.057732752599248e-05, 1.124706189392487e-05, -1.575104687581369e-06, 1.966044125959071e-07},
           {4.714963272101427e-03, -1.585293788342395e-03, 3.593913440979198e-04, -6.623215723826246e-05, 1.048824238816158e-05, -1.461658458755630e-06, 1.817514870161506e-07},
           {4.559962608938319e-03, -1.515361251335464e-03, 3.401366432929593e-04, -6.217946123378336e-05, 9.783977357979041e-06, -1.356770639552290e-06, 1.680601575342726e-07},
           {4.411766635772701e-03, -1.449160839036078e-03, 3.220565240582088e-04, -5.839825080988949e-05, 9.130157072981790e-06, -1.259772660833752e-06, 1.554371272870849e-07},
           {4.270013619430570e-03, -1.386465581800336e-03, 3.050724900818175e-04, -5.486911612583203e-05, 8.522992483769664e-06, -1.170049602660166e-06, 1.437967513555983e-07},
           {4.134363757776198e-03, -1.327063641805290e-03, 2.891116466840929e-04, -5.157410314553797e-05, 7.958989512513415e-06, -1.087035797403274e-06, 1.330603985640789e-07},
           {4.004497721119558e-03, -1.270757235240975e-03, 2.741062812922090e-04, -4.849660043693686e-05, 7.434925449001718e-06, -1.010210799351589e-06, 1.231558672390026e-07},
           {3.880115297320195e-03, -1.217361635103924e-03, 2.599934764983234e-04, -4.562123502126106e-05, 6.947827276772016e-06, -9.390956898360469e-07, 1.140168503138439e-07},
           {3.760934132844312e-03, -1.166704248339398e-03, 2.467147530986300e-04, -4.293377653287186e-05, 6.494951768751197e-06, -8.732496895523646e-07, 1.055824455639210e-07},
           {3.646688562631942e-03, -1.118623761578576e-03, 2.342157407233603e-04, -4.042104901164557e-05, 6.073767205380457e-06, -8.122670521750985e-07, 9.779670711915478e-08},
           {3.537128522183095e-03, -1.072969350175101e-03, 2.224458738625570e-04, -3.807084970624651e-05, 5.681936580590026e-06, -7.557742155685288e-07, 9.060823473460934e-08},
           {3.432018535780053e-03, -1.029599945666350e-03, 2.113581112711073e-04, -3.587187431816860e-05, 5.317302172324656e-06, -7.034271889192832e-07, 8.396979760184327e-08},
           {3.331136775230824e-03, -9.883835571714572e-04, 2.009086769003691e-04, -3.381364816364151e-05, 4.977871364689728e-06, -6.549091559614668e-07, 7.783798976093428e-08},
           {3.234274183949567e-03, -9.491966425933935e-04, 1.910568206540153e-04, -3.188646277374433e-05, 4.661803618274498e-06, -6.099282761521796e-07, 7.217291442584932e-08},
           {3.141233661586476e-03, -9.119235258189271e-04, 1.817645974035839e-04, -3.008131749268498e-05, 4.367398493888639e-06, -5.682156671973579e-07, 6.693789476671558e-08},
           {3.051829304785046e-03, -8.764558564103299e-04, 1.729966628257191e-04, -2.838986567049774e-05, 4.093084642890679e-06, -5.295235537375542e-07, 6.209920890342515e-08},
           {2.965885699981270e-03, -8.426921085585484e-04, 1.647200847391440e-04, -2.680436507966439e-05, 3.837409684555116e-06, -4.936235682919358e-07, 5.762584705761892e-08},
           {2.883237264469478e-03, -8.105371163211327e-04, 1.569041687259222e-04, -2.531763221563565e-05, 3.599030897576885e-06, -4.603051917369843e-07, 5.348928898603962e-08},
           {2.803727632245372e-03, -7.799016424013971e-04, 1.495202969193195e-04, -2.392300016915489e-05, 3.376706658900308e-06, -4.293743216736350e-07, 4.966329997897399e-08},
           {2.727209081400323e-03, -7.507019779397198e-04, 1.425417789303157e-04, -2.261427978387969e-05, 3.169288568632824e-06, -4.006519580216487e-07, 4.612374385434314e-08},
           {2.653542000083851e-03, -7.228595709851186e-04, 1.359437139671902e-04, -2.138572383625743e-05, 2.975714204905852e-06, -3.739729960808199e-07, 4.284841151216119e-08},
           {2.582594388275266e-03, -6.963006814966988e-04, 1.297028632782556e-04, -2.023199399611874e-05, 2.795000457216359e-06, -3.491851181224686e-07, 3.981686373666586e-08},
           {2.514241392811982e-03, -6.709560608914925e-04, 1.237975321172656e-04, -1.914813034617034e-05, 2.626237391059744e-06, -3.261477753281661e-07, 3.701028704543944e-08},
           {2.448364873312550e-03, -6.467606543088372e-04, 1.182074604948201e-04, -1.812952325665010e-05, 2.468582600581283e-06, -3.047312525818829e-07, 3.441136148720128e-08},
           {2.384852996808362e-03, -6.236533239028490e-04, 1.129137220376908e-04, -1.717188742798891e-05, 2.321256009560456e-06, -2.848158092522640e-07, 3.200413938350688e-08},
           {2.323599859060146e-03, -6.015765916046822e-04, 1.078986303318210e-04, -1.627123792953062e-05, 2.183535084327621e-06, -2.662908896785433e-07, 2.977393409508996e-08},
           {2.264505130685137e-03, -5.804763999161073e-04, 1.031456521742148e-04, -1.542386807631140e-05, 2.054750425221931e-06, -2.490543976013833e-07, 2.770721797174023e-08},
           {2.207473726359115e-03, -5.603018894062969e-04, 9.863932720438541e-05, -1.462632899869696e-05, 1.934281705956257e-06, -2.330120292628296e-07, 2.579152871605130e-08},
           {2.152415495485113e-03, -5.410051916853239e-04, 9.436519342780551e-05, -1.387541077141688e-05, 1.821553932780597e-06, -2.180766603414861e-07, 2.401538345668487e-08},
           {2.099244932838488e-03, -5.225412367214986e-04, 9.030971818220029e-05, -1.316812497930936e-05, 1.716033997649861e-06, -2.041677822934466e-07, 2.236819988650825e-08},
           {2.047880907807046e-03, -5.048675734559382e-04, 8.646023413282853e-05, -1.250168860697702e-05, 1.617227501722738e-06, -1.912109840396838e-07, 2.084022387555899e-08},
           {1.998246410945446e-03, -4.879442027472118e-04, 8.280487991535201e-05, -1.187350914862918e-05, 1.524675827462010e-06, -1.791374752794200e-07, 1.942246301871114e-08},
           {1.950268316656168e-03, -4.717334217521912e-04, 7.933254507474819e-05, -1.128117084271643e-05, 1.437953439388281e-06, -1.678836480191847e-07, 1.810662562357156e-08},
           {1.903877160895288e-03, -4.561996789167335e-04, 7.603281897617154e-05, -1.072242194361127e-05, 1.356665395172157e-06, -1.573906731912298e-07, 1.688506468588474e-08},
           {1.859006932880784e-03, -4.413094388121042e-04, 7.289594338892828e-05, -1.019516294961082e-05, 1.280445050247159e-06, -1.476041294949867e-07, 1.575072643791197e-08},
           {1.815594879854573e-03, -4.270310561104424e-04, 6.991276846796224e-05, -9.697435712985998e-06, 1.208951940498375e-06, -1.384736618333295e-07, 1.469710309017883e-08},
           {1.773581324017507e-03, -4.133346580455299e-04, 6.707471187863323e-05, -9.227413363724206e-06, 1.141869828840705e-06, -1.299526669334455e-07, 1.371818941893754e-08},
           {1.732909490819417e-03, -4.001920347539782e-04, 6.437372083024725e-05, -8.783390984053087e-06, 1.078904902654962e-06, -1.219980039418120e-07, 1.280844288092140e-08},
           {1.693525347844532e-03, -3.875765369370136e-04, 6.180223680191100e-05, -8.363776975830423e-06, 1.019784110108998e-06, -1.145697279656832e-07, 1.196274696371363e-08},
           {1.655377453586435e-03, -3.754629803246340e-04, 5.935316276095903e-05, -7.967085067477414e-06, 9.642536243622429e-07, -1.076308447010509e-07, 1.117637750452310e-08},
           {1.618416815456636e-03, -3.638275564623128e-04, 5.701983268955720e-05, -7.591926911352675e-06, 9.120774255432099e-07, -1.011470844405506e-07, 1.044497173255355e-08},
           {1.582596756417007e-03, -3.526477493758648e-04, 5.479598324922717e-05, -7.237005226342334e-06, 8.630359912070567e-07, -9.508669389543190e-08, 9.764499810645865e-09},
           {1.547872789669090e-03, -3.419022577028176e-04, 5.267572742606061e-05, -6.901107444006670e-06, 8.169250867305542e-07, -8.942024439459620e-08, 9.131238670629608e-09},
           {1.514202500872976e-03, -3.315709219088731e-04, 5.065353001139310e-05, -6.583099819901217e-06, 7.735546477903691e-07, -8.412045514181449e-08, 8.541747953988497e-09},
           {1.481545437405104e-03, -3.216346562359525e-04, 4.872418478376176e-05, -6.281921974703497e-06, 7.327477477025376e-07, -7.916203032049320e-08, 7.992847885160450e-09},
           {1.449863004198445e-03, -3.120753850541377e-04, 4.688279326816209e-05, -5.996581832547927e-06, 6.943396429811715e-07, -7.452150893458266e-08, 7.481598919181109e-09},
           {1.419118365740042e-03, -3.028759833136524e-04, 4.512474495800884e-05, -5.726150926519966e-06, 6.581768910070530e-07, -7.017712636518638e-08, 7.005283018552836e-09},
           {1.389276353830188e-03, -2.940202208150795e-04, 4.344569889386618e-05, -5.469760043605339e-06, 6.241165341858687e-07, -6.610868670583135e-08, 6.561386426284112e-09},
           {1.360303380734642e-03, -2.854927100363800e-04, 4.184156650099339e-05, -5.226595183546939e-06, 5.920253454249284e-07, -6.229744501582577e-08, 6.147583813089809e-09},
           {1.332167357386482e-03, -2.772788572741289e-04, 4.030849559511622e-05, -4.995893808046979e-06, 5.617791301697447e-07, -5.872599870126125e-08, 5.761723686860074e-09}}};
  // clang-format on
}
} // namespace tables
