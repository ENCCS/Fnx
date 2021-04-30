
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 4.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<4>() {
  // clang-format off
  return {{{1.11111111111111104943e-1, -9.09090909090909116141e-2, 3.84615384615384636735e-2, -1.11111111111111098004e-2, 2.45098039215686271108e-3, -4.38596491228070129408e-4, 6.61375661375661420263e-5},
           {1.02393947071065319343e-1, -8.35405280181414772178e-2, 3.52709754089918434139e-2, -1.01732854981902588049e-2, 2.24130766690910573913e-3, -4.00671252623149029646e-4, 6.03683190612515016300e-5},
           {9.43826509214874820319e-2, -7.67827630385134740632e-2, 3.23495504320829782574e-2, -9.31564923173982921412e-3, 2.04975810193779549306e-3, -3.66053177346636806483e-4, 5.51058724734380074649e-5},
           {8.70187558423999030222e-2, -7.05843031664688397298e-2, 2.96742617911994743807e-2, -8.53127385818569679288e-3, 1.87475184409687423322e-3, -3.34451829302873321435e-4, 5.03054401130400202563e-5},
           {8.02487210501310610500e-2, -6.48980542694253675906e-2, 2.72240943300248554315e-2, -7.81383469687643023027e-3, 1.71484774391871897317e-3, -3.05602432116646967938e-4, 4.59262138720761841802e-5},
           {7.40235112058776345556e-2, -5.96809411402653283707e-2, 2.49798464151426286017e-2, -7.15755784684582539029e-3, 1.56873110431212476820e-3, -2.79263590389279428919e-4, 4.19310088540606956740e-5},
           {6.82982121200224334689e-2, -5.48935608218129658664e-2, 2.29239720607984052980e-2, -6.55717187315723541025e-3, 1.43520251701821860771e-3, -2.55215214231992268846e-4, 3.82859402255972185538e-5},
           {6.30316795924698997089e-2, -5.04998661005853777262e-2, 2.10404368982248755893e-2, -6.00786375743300564423e-3, 1.31316768980836544312e-3, -2.33256628871449670165e-4, 3.49601290034679394758e-5},
           {5.81862185063504525062e-2, -4.64668765249578036292e-2, 1.93145867679106915393e-2, -5.50523873421419982638e-3, 1.20162817609521669140e-3, -2.13204852758473251476e-4, 3.19254341771678886342e-5},
           {5.37272895450847942644e-2, -4.27644145362022082280e-2, 1.77330278215625490590e-2, -5.04528366852102262696e-3, 1.09967292653455816706e-3, -1.94893029099539881509e-4, 2.91562088011973541207e-5},
           {4.96232411331567410673e-2, -3.93648645134841643212e-2, 1.62835171192208631730e-2, -4.62433366069167368223e-3, 1.00647058939184043218e-3, -1.78168997085119146934e-4, 2.66290779046036549976e-5},
           {4.58450644109970259499e-2, -3.62429527276789328893e-2, 1.49548627969065071192e-2, -4.23904159253709299227e-3, 9.21262492997325745971e-4, -1.62893990321323075361e-4, 2.43227362591774030020e-5},
           {4.23661692459266908672e-2, -3.33755463754742270899e-2, 1.37368329620863351137e-2, -3.88635035430851243782e-3, 8.43356249575764535531e-4, -1.48941451092742297661e-4, 2.22177642241032278451e-5},
           {3.91621794557900845812e-2, -3.07414700261916216950e-2, 1.26200725488644742434e-2, -3.56346751515793005310e-3, 7.72119925163479285148e-4, -1.36195950104765810479e-4, 2.02964600453276859139e-5},
           {3.62107455812147038809e-2, -2.83213379604735429607e-2, 1.15960274327861646154e-2, -3.26784222088296683398e-3, 7.06976725265782328725e-4, -1.24552202282240541582e-4, 1.85426871338799462716e-5},
           {3.34913736877309325957e-2, -2.60974010137161975542e-2, 1.06568751670747304677e-2, -2.99714412197295493670e-3, 6.47400150404669420118e-4, -1.13914170046320456509e-4, 1.69417349801763117932e-5},
           {3.09852688115071772668e-2, -2.40534066590341356895e-2, 9.79546175855001803601e-3, -2.74924415248151534155e-3, 5.92909579800534702713e-4, -1.04194246260319860631e-4, 1.54801924821501502222e-5},
           {2.86751917833353089926e-2, -2.21744711756715166817e-2, 9.00524395289001820808e-3, -2.52219699619636670423e-3, 5.43066245158559069914e-4, -9.53125097351901042278e-5, 1.41458325749586836932e-5},
           {2.65453282757660731506e-2, -2.04469628500856155651e-2, 8.28023654574378854820e-3, -2.31422509109963049287e-3, 4.97469559923382998942e-4, -8.71960468221153004592e-5, 1.29275071500140516375e-5},
           {2.45811690188825031356e-2, -1.88583952492914486143e-2, 7.61496427889091481028e-3, -2.12370403633898316778e-3, 4.55753772454753575214e-4, -7.97783331993519740505e-5, 1.18150513420641395173e-5},
           {2.27694002219647854968e-2, -1.73973296902676100029e-2, 7.00441791954138030102e-3, -1.94914927797763554845e-3, 4.17584914389318418403e-4, -7.29986704879777146453e-5, 1.07991963458251926891e-5},
           {2.10978033220223168409e-2, -1.60532861060045141388e-2, 6.44401415631759739988e-3, -1.78920396076490757949e-3, 3.82658018014482451206e-4, -6.68016728113631137222e-5, 9.87148999898347871815e-6},
           {1.95551632565556486598e-2, -1.48166615787879533961e-2, 5.92955897776519056525e-3, -1.64262784316519393386e-3, 3.50694578811871506517e-4, -6.11367988502078724307e-5, 9.02422443691291946010e-6},
           {1.81311845276111160974e-2, -1.36786558751513850213e-2, 5.45721422868060499628e-3, -1.50828718198884313174e-3, 3.21440241451016338239e-4, -5.59579253427735628370e-5, 8.25037018681161159737e-6},
           {1.68164143877916200109e-2, -1.26312033751483625971e-2, 5.02346706637703602216e-3, -1.38514550126355860844e-3, 2.94662689447116482068e-4, -5.12229583420331771376e-5, 7.54351612570115758052e-6},
           {1.56021725369267713623e-2, -1.16669108416884385188e-2, 4.62510206346740827127e-3, -1.27225516754179567187e-3, 2.70149720457190615098e-4, -4.68934788710584140865e-5, 6.89781477836512824737e-6},
           {1.44804867710729805175e-2, -1.07790005241005758252e-2, 4.25917572603581959939e-3, -1.16874970072427825790e-3, 2.47707490792077069091e-4, -4.29344199180026179119e-5, 6.30793247828850160637e-6},
           {1.34440340738557501804e-2, -9.96125813425037531790e-3, 3.92299321638929932715e-3, -1.07383675575222501189e-3, 2.27158914181717125260e-4, -3.93137719851711293678e-5, 5.76900395741781849294e-6},
           {1.24860866842888100503e-2, -9.20798527381810200110e-3, 3.61408708810546583368e-3, -9.86791716235839184296e-4, 2.08342201160771069938e-4, -3.60023146553224598671e-5, 5.27659096947353479856e-6},
           {1.16004627154789076438e-2, -8.51395592808672392604e-3, 3.33019785797817160014e-3, -9.06951846293829961124e-4, 1.91109526652568468500e-4, -3.29733718647137494608e-5, 4.82664458695885425284e-6},
           {1.07814809353885734250e-2, -7.87437667510554675787e-3, 3.06925625485809407123e-3, -8.33710951623514999638e-4, 1.75325814432308857947e-4, -3.02025887784973786428e-5, 4.41547084423845758485e-6},
           {1.00239193543904953065e-2, -7.28485028967043504039e-3, 2.82936699942072785938e-3, -7.66514505144655095698e-4, 1.60867628154981240005e-4, -2.76677283517131613558e-5, 4.03969942839342868420e-6},
           {9.32297729498701363560e-3, -6.74134244945577294078e-3, 2.60879398169119825976e-3, -7.04855196500129969374e-4, 1.47622159548473530673e-4, -2.53484858299622978358e-5, 3.69625514625605192568e-6},
           {8.67424064704283050153e-3, -6.24015127608265260384e-3, 2.40594671482342479726e-3, -6.48268868287098275552e-4, 1.35486305205801072166e-4, -2.32263195994026281352e-5, 3.38233192032787116380e-6},
           {8.07365003742178087565e-3, -5.77787946712794101695e-3, 2.21936795427068447525e-3, -5.96330805164503813601e-4, 1.24365824169603636506e-4, -2.12842969373434556411e-5, 3.09536908840217435027e-6},
           {7.51747166624259968021e-3, -5.35140879626641759181e-3, 2.04772238118658064798e-3, -5.48652344965062867439e-4, 1.14174569193673850994e-4, -1.95069533436910378678e-5, 2.83302980184466572549e-6},
           {7.00227058326784862485e-3, -4.95787677807195924229e-3, 1.88978625774298782981e-3, -5.04877783657989884052e-4, 1.04833785196334374726e-4, -1.78801642509397077198e-5, 2.59318133581211841726e-6},
           {6.52488619739209282922e-3, -4.59465531164722669477e-3, 1.74443797012027940543e-3, -4.64681548486214175079e-4, 9.62714689944815430302e-5, -1.63910280173526110795e-5, 2.37387714137098542665e-6},
           {6.08240982996096669899e-3, -4.25933113335304376623e-3, 1.61064938228407334223e-3, -4.27765615860095215622e-4, 8.84217849300603607725e-5, -1.50277592053717912049e-5, 2.17334048466413175973e-6},
           {5.67216413887979952618e-3, -3.94968792360433831184e-3, 1.48747793037457454353e-3, -3.93857152648174814891e-4, 8.12245314771975316943e-5, -1.37795912359959894436e-5, 1.98994953209873725212e-6},
           {5.29168425529288107695e-3, -3.66368992611272028745e-3, 1.37405939365661073845e-3, -3.62706361382035807200e-4, 7.46246543523389107688e-5, -1.26366875906459572232e-5, 1.82222375311434603623e-6},
           {4.93870048815492172778e-3, -3.39946695019915402780e-3, 1.26960128356277219749e-3, -3.34084511603066072142e-4, 6.85718020452983717744e-5, -1.15900608056102696805e-5, 1.66881152354847330673e-6},
           {4.61112246438671706528e-3, -3.15530063797651947471e-3, 1.17337679745619163918e-3, -3.07782141138557264158e-4, 6.30199200495657905954e-5, -1.06314985711757421696e-5, 1.52847882304943750600e-6},
           {4.30702458360903133600e-3, -2.92961188840469262742e-3, 1.08471928838666810922e-3, -2.83607412516520302360e-4, 5.79268803986720227863e-5, -9.75349630858261851826e-6, 1.40009892948440668423e-6},
           {4.02463267677574589726e-3, -2.72094933953559913950e-3, 1.00301720635358822438e-3, -2.61384611025091936117e-4, 5.32541434147246035510e-5, -8.94919565354091017654e-6, 1.28264302193889568503e-6},
           {3.76231176746385674245e-3, -2.52797881877026746691e-3, 9.27709470457257546518e-4, -2.40952772104562718903e-4, 4.89664488480015639175e-5, -8.21232832568734380117e-6, 1.17517161177852516203e-6},
           {3.51855484320155167607e-3, -2.34947367871525883420e-3, 8.58281234849688325420e-4, -2.22164426838012915057e-4, 4.50315338350886656439e-5, -7.53716490949509848135e-6, 1.07682672841413640833e-6},
           {3.29197255209695864228e-3, -2.18430594331668181257e-3, 7.94260014616365709640e-4, -2.04884455289533462790e-4, 4.14198753296196370190e-5, -6.91846811417463540230e-6, 9.86824792940654185776e-7},
           {3.08128374723368007870e-3, -2.03143819542532175215e-3, 7.35212140659297205478e-4, -1.88989038335446012801e-4, 3.81044548661896967964e-5, -6.35145011839006945681e-6, 9.04450118765816655902e-7},
           {2.88530680788371025891e-3, -1.88991614286010693909e-3, 6.80739515333511516042e-4, -1.74364699451478818472e-4, 3.50605437062446518475e-5, -5.83173364049614918303e-6, 8.29048983759477208519e-7},
           {2.70295167260747740481e-3, -1.75886180543818231373e-3, 6.30476643036726445458e-4, -1.60907428664490198458e-4, 3.22655065863276726158e-5, -5.35531640678017897193e-6, 7.60024223385184968759e-7},
           {2.53321252481355238886e-3, -1.63746727037316947180e-3, 5.84087912185746161407e-4, -1.48521881557414262660e-4, 2.96986224454723747417e-5, -4.91853871914794357642e-6, 6.96830298766566560160e-7},
           {2.37516107638168199462e-3, -1.52498896794945790721e-3, 5.41265107052079632796e-4, -1.37120646836430895577e-4, 2.73409206511137750401e-5, -4.51805385007503110896e-6, 6.38968797731074600523e-7},
           {2.22794039955309620613e-3, -1.42074242349694715784e-3, 5.01725129790386512041e-4, -1.26623576535217323424e-4, 2.51750313728747387933e-5, -4.15080101668448606502e-6, 5.85984330598847205606e-7},
           {2.09075926149871957338e-3, -1.32409744545146303325e-3, 4.65207914692287766330e-4, -1.16957173447327218664e-4, 2.31850488720940267802e-5, -3.81398070771734906033e-6, 5.37460785877427545237e-7},
           {1.96288691982303030101e-3, -1.23447371272210901574e-3, 4.31474518249051145619e-4, -1.08054030848655341877e-4, 2.13564065830109894536e-5, -3.50503215712454981818e-6, 4.93017914113623177017e-7},
           {1.84364834077980761610e-3, -1.15133672772636916522e-3, 4.00305370022639315977e-4, -9.98523200015726496159e-5, 1.96757629600394226489e-5, -3.22161277620025507135e-6, 4.52308210968953357741e-7},
           {1.73241980519436844510e-3, -1.07419410432263505266e-3, 3.71498670617443141340e-4, -9.22953213243017439246e-5, 1.81308971553942771841e-5, -2.96157937275554139712e-6, 4.15014073149530868551e-7},
           {1.62862487003084875463e-3, -1.00259216249153613500e-3, 3.44868924225477364951e-4, -8.53309954667612932232e-5, 1.67106136732496143448e-5, -2.72297100094110427874e-6, 3.80845203157314600370e-7},
           {1.53173065623636562270e-3, -9.36112804013467469065e-4, 3.20245594295752780949e-4, -7.89115908604688459042e-5, 1.54046552213058519074e-5, -2.50399329909915708493e-6, 3.49536240957827038261e-7},
           {1.44124443595800770350e-3, -8.74370645579642009892e-4, 2.97471871862904082510e-4, -7.29932846079047050565e-5, 1.42036230487675545886e-5, -2.30300418557694045417e-6, 3.20844602598270247296e-7},
           {1.35671049448329210721e-3, -8.17010387775723165640e-4, 2.76403546969145313007e-4, -6.75358538485241349271e-5, 1.30989041218625726994e-5, -2.11850079387576381760e-6, 2.94548507576380705852e-7},
           {1.27770724431795919783e-3, -7.63704400206926983623e-4, 2.56907974434695813952e-4, -6.25023749866444704171e-5, 1.20826045446984529035e-5, -1.94910753893899545041e-6, 2.70445178369754201780e-7},
           {1.20384457070319100640e-3, -7.14150504706334001911e-4, 2.38863125981776300809e-4, -5.78589483928210098753e-5, 1.11474886849370907890e-5, -1.79356521588982631496e-6, 2.48349197001751421778e-7},
           {1.13476138960255917149e-3, -6.68069940097585799818e-4, 2.22156721402324343903e-4, -5.35744463969595299856e-5, 1.02869235109128072549e-5, -1.65072104119692893148e-6, 2.28091004856234202015e-7},
           {1.07012340077091848596e-3, -6.25205493381591646471e-4, 2.06685432085381950084e-4, -4.96202825800301381082e-5, 9.49482768982414536473e-6, -1.51951955414786592004e-6, 2.09515533170892478688e-7},
           {1.00962101996560906988e-3, -5.85319783495650571535e-4, 1.92354150791827939590e-4, -4.59702005434296293832e-5, 8.76562503586100460183e-6, -1.39899430371426079840e-6, 1.92480952748381031033e-7},
           {9.52967475686155706532e-4, -5.48193684962829824205e-4, 1.79075322086479234683e-4, -4.26000804922260220076e-5, 8.09420193291932399209e-6, -1.28826025246119147714e-6, 1.76857532435533545999e-7},
           {8.99897057042579732490e-4, -5.13624879819001033988e-4, 1.66768328314860459719e-4, -3.94877621120289580862e-5, 7.47586838920893705367e-6, -1.18650683514242468101e-6, 1.62526596842311903602e-7},
           {8.50163500464074179189e-4, -4.81426527183199731361e-4, 1.55358926448068244020e-4, -3.66128823502567436071e-5, 6.90632241085323326059e-6, -1.09299161508430066681e-6, 1.49379574611884896255e-7},
           {8.03538503977810130915e-4, -4.51426040731841128704e-4, 1.44778731517704729696e-4, -3.39567268322119280698e-5, 6.38161740876354817496e-6, -1.00703448644107462536e-6, 1.37317129318564250247e-7},
           {7.59810358720051470631e-4, -4.23463965155954893873e-4, 1.34964742727098496603e-4, -3.15020937516273763328e-5, 5.89813237787721309001e-6, -9.28012374946005404050e-7, 1.26248365767897339564e-7},
           {7.18782688195839674673e-4, -3.97392943429574906251e-4, 1.25858908657938971557e-4, -2.92331691751126151470e-5, 5.45254461048452289032e-6, -8.55354393924190389701e-7, 1.16090105109034448130e-7},
           {6.80273286585918635257e-4, -3.73076767402700376630e-4, 1.17407728295748560888e-4, -2.71354127910458217047e-5, 5.04180472602818432668e-6, -7.88537416110531065356e-7, 1.06766222749064047101e-7},
           {6.44113048116417728425e-4, -3.50389504859336948887e-4, 1.09561884875781511447e-4, -2.51954532166750371034e-5, 4.66311381861254735772e-6, -7.27082025261454093297e-7, 9.82070435873252582503e-8},
           {6.10144980163635115844e-4, -3.29214696754992171886e-4, 1.02275909805235969943e-4, -2.34009920532033149530e-5, 4.31390254066794795262e-6, -6.70548814691491775829e-7, 9.03487895693299259674e-8},
           {5.78223293368185752017e-4, -3.09444618873227757314e-4, 9.55078741501609807451e-5, -2.17407159480654797756e-5, 3.99181195692236658512e-6, -6.18535002732297894404e-7, 8.31330749989970879450e-8},
           {5.48212562584418248643e-4, -2.90979602621621352872e-4, 8.92191053880206851826e-5, -2.02042159870317994245e-5, 3.69467601717008008476e-6, -5.70671337726510740246e-7, 7.65064454482001881825e-8},
           {5.19986952996646825502e-4, -2.73727410127566433105e-4, 8.33739273212641998330e-5, -1.87819137967209446585e-5, 3.42050550941531770666e-6, -5.26619267554305535267e-7, 7.04199564675949337744e-8},
           {4.93429506197260087964e-4, -2.57602659197231256393e-4, 7.79394212250143823915e-5, -1.74649937910472954569e-5, 3.16747336691763050400e-6, -4.86068350866720488708e-7, 6.48287886354633370137e-8},
           {4.68431481446720762198e-4, -2.42526294069873529389e-4, 7.28852064645655277732e-5, -1.62453410435019763290e-5, 2.93390121357464540215e-6, -4.48733889185385701509e-7, 5.96918957847364986728e-8},
           {4.44891747725114131660e-4, -2.28425098237479141635e-4, 6.81832389670803708237e-5, -1.51154843113705895171e-5, 2.71824704203828191373e-6, -4.14354760839891834016e-7, 5.49716835250414976229e-8},
           {4.22716222542214483792e-4, -2.15231245909011604991e-4, 6.38076260678958976638e-5, -1.40685437783856636816e-5, 2.51909392805529827632e-6, -3.82691439367081765051e-7, 5.06337154289296631141e-8},
           {4.01817353800738386125e-4, -2.02881888981849123734e-4, 5.97344563762767567262e-5, -1.30981831192293397576e-5, 2.33513969282802921241e-6, -3.53524180504960730512e-7, 4.66464444815391525072e-8},
           {3.82113641308030719829e-4, -1.91318776642466104477e-4, 5.59416434192940118268e-5, -1.21985655230436001301e-5, 2.16518743277548087432e-6, -3.26651363290449501240e-7, 4.29809676027921803813e-8},
           {3.63529194807167977798e-4, -1.80487904956110002588e-4, 5.24087819266637005666e-5, -1.13643133439471670580e-5, 2.00813684300146898384e-6, -3.01887972026447664858e-7, 3.96108012426188326141e-8},
           {3.45993325651438384145e-4, -1.70339194022986516533e-4, 4.91170157146881609543e-5, -1.05904710747510882234e-5, 1.86297626710275545406e-6, -2.79064207030205115293e-7, 3.65116762242641081149e-8},
           {3.29440169478288137107e-4, -1.60826190477986337955e-4, 4.60489162146613940875e-5, -9.87247136583871859892e-6, 1.72877541172856790102e-6, -2.58024213121465861285e-7, 3.36613501699638430218e-8},
           {3.13808337451844409673e-4, -1.51905793293813915802e-4, 4.31883707709226384586e-5, -9.20610383473969012965e-6, 1.60467866958118920417e-6, -2.38624915764037526077e-7, 3.10394359885201534231e-8},
           {2.99040593838639269519e-4, -1.43538001014929480527e-4, 4.05204799068037410724e-5, -8.58748643347270766214e-6, 1.48989899936922122731e-6, -2.20734955646362153162e-7, 2.86272450368049853098e-8},
           {2.85083557860631544353e-4, -1.35685678703278148277e-4, 3.80314628235939051343e-5, -8.01303916043297777391e-6, 1.38371231563029508382e-6, -2.04233713282629475678e-7, 2.64076436880952376732e-8},
           {2.71887427934380376121e-4, -1.28314343017544576445e-4, 3.57085704588702229851e-5, -7.47945992161639679327e-6, 1.28545234536483535045e-6, -1.89010415942645225313e-7, 2.43649221504208737616e-8},
           {2.59405726556511339286e-4, -1.21391963976712557809e-4, 3.35400054865963396784e-5, -6.98370236244937769881e-6, 1.19450591209997700700e-6, -1.74963319882108815394e-7, 2.24846744787223500283e-8},
           {2.47595064234531353226e-4, -1.14888782077022096008e-4, 3.15148486927169373963e-5, -6.52295550656332457100e-6, 1.11030861136318378401e-6, -1.61998961450718921258e-7, 2.07536888164176245215e-8},
           {2.36414920989640213933e-4, -1.08777139539900622486e-4, 2.96229912069754071835e-5, -6.09462505163765951331e-6, 1.03234084461603857487e-6, -1.50031471208648318786e-7, 1.91598469857480073057e-8},
           {2.25827444075381642127e-4, -1.03031324567933520609e-4, 2.78550721147254936531e-5, -5.69631618504528041709e-6, 9.60124181505206736515e-7, -1.38981945687027608617e-7, 1.76920326227135633623e-8},
           {2.15797260663642167773e-4, -9.76274275771837343144e-5, 2.62024210119314543237e-5, -5.32581779357086755784e-6, 8.93218022852698987465e-7, -1.28777871889343221050e-7, 1.63400471221678112928e-8},
           {2.06291304348429698715e-4, -9.25432084578684237969e-5, 2.46570051026631798647e-5, -4.98108795202766829724e-6, 8.31216539152207102079e-7, -1.19352600051923465398e-7, 1.50945327223054600096e-8},
           {1.97278654408770937577e-4, -8.77579739921818363342e-5, 2.32113804714750942258e-5, -4.66024058525659510226e-6, 7.73745861481539630948e-7, -1.10644860566450084779e-7, 1.39469021158821284657e-8},
           {1.88730386855610985253e-4, -8.32524646285013041492e-5, 2.18586471933671657147e-5, -4.36153320682972218383e-6, 7.20461503700545937776e-7, -1.02598321318874966009e-7, 1.28892740285394964679e-8},
           {1.80619436364400613596e-4, -7.90087498758561523329e-5, 2.05924079717983376473e-5, -4.08335564586893264900e-6, 6.71045996595247531001e-7, -9.51611820201565644872e-8, 1.19144142530188573965e-8},
           {1.72920468265657089344e-4, -7.50101316418621264556e-5, 1.94067300206728559709e-5, -3.82421968079367662649e-6, 6.25206716266769820688e-7, -8.82858023975004095219e-8, 1.10156816722359559970e-8},
           {1.65609759830704072201e-4, -7.12410548917751033611e-5, 1.82961099295441246041e-5, -3.58274950558840321715e-6, 5.82673890561334549115e-7, -8.19283613827195586252e-8, 1.01869788445311428989e-8},
           {1.58665090149496347321e-4, -6.76870250562985659084e-5, 1.72554412726593632652e-5, -3.35767296038369471487e-6, 5.43198768707146856864e-7, -7.60485446791248336688e-8, 9.42270676123821417023e-9},
           {1.52065637952343080726e-4, -6.43345316616676101643e-5, 1.62799847420658829735e-5, -3.14781346382459460451e-6, 5.06551940576541964663e-7, -7.06092583120293386976e-8, 8.71772342034073709269e-9},
           {1.45791886777856617751e-4, -6.11709776976649733955e-5, 1.53653406029659120996e-5, -2.95208258989973610126e-6, 4.72521793137359036132e-7, -6.55763659723393270520e-8, 8.06730589068691603344e-9},
           {1.39825536935924538660e-4, -5.81846142779160197932e-5, 1.45074232859805108146e-5, -2.76947323666659017577e-6, 4.40913092705365245999e-7, -6.09184481494833426909e-8, 7.46711556926877158558e-9},
           {1.34149423757266492412e-4, -5.53644801823452279875e-5, 1.37024379460884587111e-5, -2.59905333866890928519e-6, 4.11545682568126076865e-7, -5.66065812206320325941e-8, 6.91316635967215393366e-9},
           {1.28747441660494518897e-4, -5.27003459043185484866e-5, 1.29468588318595579479e-5, -2.43996007883623979945e-6, 3.84253286427642025308e-7, -5.26141348191766344749e-8, 6.40179552318354837035e-9},
           {1.23604473603822044309e-4, -5.01826618549825647156e-5, 1.22374093213079898265e-5, -2.29139455931366440035e-6, 3.58882408911409034266e-7, -4.89165859480405911897e-8, 5.92963697539193107390e-9},
           {1.18706325521918107705e-4, -4.78025104048645057327e-5, 1.15710434923469206110e-5, -2.15261689402101872304e-6, 3.35291325135693217870e-7, -4.54913484337564586797e-8, 5.49359682062619188711e-9},
           {1.14039665379114460442e-4, -4.55515614681160848102e-5, 1.09449291065185251305e-5, -2.02294168881101219936e-6, 3.13349151976606780805e-7, -4.23176164364115697112e-8, 5.09083093438208038159e-9},
           {1.09591966498454377026e-4, -4.34220313580540236988e-5, 1.03564318944846878515e-5, -1.90173387790863924638e-6, 2.92934994319376075960e-7, -3.93762208395180034470e-8, 4.71872442016492602014e-9},
           {1.05351454852121287679e-4, -4.14066446640400421283e-5, 9.80310104076665604720e-6, -1.78840488789192520978e-6, 2.73937160118888430618e-7, -3.66494974434801492422e-8, 4.37487278203947644577e-9},
           {1.01307060022786231553e-4, -3.94985989194073143309e-5, 9.28265577348443301868e-6, -1.68240910283629041229e-6, 2.56252438619655037027e-7, -3.41211659774225997528e-8, 4.05706466775904278336e-9},
           {9.74483695675235626118e-5, -3.76915318482209970360e-5, 8.79297297243045465533e-6, -1.58324060640986469387e-6, 2.39785436554813693679e-7, -3.17762190274395725549e-8, 3.76326604975431076771e-9},
           {9.37655865363241561436e-5, -3.59794909952875546148e-5, 8.33207571577405462231e-6, -1.49043017869165253167e-6, 2.24447967575433115077e-7, -2.96008200555061256398e-8, 3.49160572259975014755e-9},
           {9.02494899160176757870e-5, -3.43569055591197908056e-5, 7.89812269208463761997e-6, -1.40354252730372779207e-6, 2.10158490556585083896e-7, -2.75822097529662845119e-8, 3.24036200593575830854e-9},
           {8.68913977877323786669e-5, -3.28185602616320399650e-5, 7.48939841023042660988e-6, -1.32217373411662757530e-6, 1.96841592788523417479e-7, -2.57086200362431733988e-8, 3.00795055129222435368e-9},
           {8.36831330019867890291e-5, -3.13595711012816448938e-5, 7.10430414509914182124e-6, -1.24594890031651560886e-6, 1.84427514392694294037e-7, -2.39691950507142088158e-8, 2.79291315991181472938e-9},
           {8.06169911902324592750e-5, -2.99753628482818909628e-5, 6.74134956203694095666e-6, -1.17451997402522524642e-6, 1.72851710605802276909e-7, -2.23539186020274660526e-8, 2.59390752657953428793e-9}}};
  // clang-format on
}
} // namespace tables
