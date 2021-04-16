
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 19.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<19>() {
  // clang-format off
  return {{{2.56410256410256401360e-2, -2.43902439024390252365e-2, 1.16279069767441858851e-2, -3.70370370370370384505e-3, 8.86524822695035439463e-4, -1.70068027210884341978e-4, 2.72331154684095853023e-5},
           {2.33146635955106887317e-2, -2.21723109447861978227e-2, 1.05683267506866442054e-2, -3.36556876924322401212e-3, 8.05447845773126489856e-4, -1.54489666505293072457e-4, 2.47348681608591614370e-5},
           {2.11998292240565509859e-2, -2.01564666505587783418e-2, 9.60547449366005480498e-3, -3.05835557365947367098e-3, 7.31797063549601087967e-4, -1.40340304291004477379e-4, 2.24660977539048799343e-5},
           {1.92772507468279528930e-2, -1.83242640742870832593e-2, 8.73050530337723604268e-3, -2.77923205797905165104e-3, 6.64891317543478844315e-4, -1.27488687601754515635e-4, 2.04057000384228613601e-5},
           {1.75294153947485632783e-2, -1.66589429494432735013e-2, 7.93538430720937444651e-3, -2.52562591340978062973e-3, 6.04112009635499177737e-4, -1.15815633679206629711e-4, 1.85345138855828793999e-5},
           {1.59404085882904437976e-2, -1.51452752306940035404e-2, 7.21281237291039687559e-3, -2.29520072627680329913e-3, 5.48897349254311248817e-4, -1.05212918718581755514e-4, 1.68351421564267809408e-5},
           {1.44957678424362437081e-2, -1.37694248008225442886e-2, 6.55615864154077132575e-3, -2.08583431645553490572e-3, 4.98737130172502841734e-4, -9.55822690316443816447e-5, 1.52917891343085644005e-5},
           {1.31823500474275243782e-2, -1.25188200416170933998e-2, 5.95939925531829926136e-3, -1.89559906737668992967e-3, 4.53167988104071742424e-4, -8.68344451784727825719e-5, 1.38901129543755341586e-5},
           {1.19882108989076106853e-2, -1.13820380876094914141e-2, 5.41706171086482959898e-3, -1.72274406428684755815e-3, 4.11769094797583283703e-4, -7.88884104919395197841e-5, 1.26170916452975736329e-5},
           {1.09024953636623032904e-2, -1.03486996901281935735e-2, 4.92417432073801071557e-3, -1.56567887433979157502e-3, 3.74158248406124315302e-4, -7.16705762106898493008e-5, 1.14609015264329910266e-5},
           {9.91533816940703104093e-3, -9.40937371771591833658e-3, 4.47622031372758768381e-3, -1.42295881742751087126e-3, 3.39988323624701145684e-4, -6.51141161550853198991e-5, 1.04108068197634127792e-5},
           {9.01777339991608611891e-3, -8.55549040847624307771e-3, 4.06909614760145484091e-3, -1.29327159057921153677e-3, 3.08944048452793930144e-4, -5.91583445328485449865e-5, 9.45705944133199815499e-6},
           {8.20165236110409999470e-3, -7.77926257119075474644e-3, 3.69907364721225534812e-3, -1.17542512139249145237e-3, 2.80739077496017425985e-4, -5.37481510531443386802e-5, 8.59080803257329169581e-6},
           {7.45956896023631209347e-3, -7.07361400584753056281e-3, 3.36276561648771741067e-3, -1.06833653743147846855e-3, 2.55113334494977785950e-4, -4.88334880651357898648e-5, 7.80401537873175413121e-6},
           {6.78479190997578231193e-3, -6.43211448123182094605e-3, 3.05709460516039423575e-3, -9.71022148939730219731e-4, 2.31830599287510629282e-4, -4.43689049247189049897e-5, 7.08938344034760231958e-6},
           {6.17120313211942488063e-3, -5.84892066807593969530e-3, 2.77926454044728895795e-3, -8.82588351668723886286e-4, 2.10676316696189834922e-4, -4.03131252357564966280e-5, 6.44028529528628835421e-6},
           {5.61324179321804738602e-3, -5.31872248151516336528e-3, 2.52673496054161379407e-3, -8.02223365204344758886e-4, 1.91455606907783160023e-4, -3.66286630138645970776e-5, 5.85070335367556334263e-6},
           {5.10585345635222037641e-3, -4.83669433676529435945e-3, 2.29719761097683418394e-3, -7.29189729964370187028e-4, 1.73991458794673823588e-4, -3.32814741854350873884e-5, 5.31517326700314679397e-6},
           {4.64444388062978594234e-3, -4.39845086749311199592e-3, 2.08855518689321636647e-3, -6.62817493112506672150e-4, 1.58123089337851410784e-4, -3.02406401655322565499e-5, 4.82873300607377626501e-6},
           {4.22483704292214191922e-3, -4.00000669771804345798e-3, 1.89890202418483908242e-3, -6.02498020055316379530e-4, 1.43704453862943652307e-4, -2.74780805586961716794e-5, 4.38687663103016190999e-6},
           {3.84323699536416596434e-3, -3.63773989564746035377e-3, 1.72650656061665644381e-3, -5.47678374017492443186e-4, 1.30602893209482784700e-4, -2.49682922993415867862e-5, 3.98551232066523596976e-6},
           {3.49619320756950182141e-3, -3.30835877195921872901e-3, 1.56979540444596599863e-3, -4.97856211482985392021e-4, 1.18697905232383266530e-4, -2.26881127959255135377e-5, 3.62092426820772156687e-6},
           {3.18056907468784386128e-3, -3.00887171602092981515e-3, 1.42733886301412609202e-3, -4.52575146093978043435e-4, 1.07880029195456901212e-4, -2.06165048676923408713e-5, 3.28973808702561196484e-6},
           {2.89351330165286621532e-3, -2.73655979166481048287e-3, 1.29783779733191060105e-3, -4.11420537961617596105e-4, 9.80498326705896741358e-5, -1.87343614667055940320e-5, 2.98888940260424299631e-6},
           {2.63243390050982382228e-3, -2.48895183968139525887e-3, 1.18011168099216409884e-3, -3.74015669302558148926e-4, 8.91169915128322111600e-5, -1.70243283629553853679e-5, 2.71559533702697272211e-6},
           {2.39497456181701111680e-3, -2.26380185739294068070e-3, 1.07308775292118538033e-3, -3.40018270910773777200e-4, 8.09994543500850496280e-5, -1.54706431383286777364e-5, 2.46732861929830872360e-6},
           {2.17899318300896057896e-3, -2.05906844673377871155e-3, 9.75791163629914138668e-4, -3.09117367238423402208e-4, 7.36226838144271957844e-5, -1.40589889877244583402e-5, 2.24179407945673042085e-6},
           {1.98254235649459632784e-3, -1.87289614139621437769e-3, 8.87336023842137861829e-4, -2.81030410823276369410e-4, 6.69189674578312798225e-5, -1.27763619640185024440e-5, 2.03690730675902576210e-6},
           {1.80385163832505013119e-3, -1.70359844097483299936e-3, 8.06917272745558654401e-4, -2.55500679491076066168e-4, 6.08267919447368971735e-5, -1.16109504292341113844e-5, 1.85077527248975339959e-6},
           {1.64131143467096296713e-3, -1.54964239582075827793e-3, 7.33803290710683384958e-4, -2.32294912204356426193e-4, 5.52902747038008316187e-5, -1.05520255883335912285e-5, 1.68167873634922287168e-6},
           {1.49345835824994015509e-3, -1.40963460064729762845e-3, 6.67329188222943016709e-4, -2.11201161647478442493e-4, 5.02586477566339747563e-5, -9.58984208558228364331e-6, 1.52805627207406034116e-6},
           {1.35896192037954157035e-3, -1.28230846794264124848e-3, 6.06890709039559499323e-4, -1.92026843651730405984e-4, 4.56857889274830009530e-5, -8.71554773742349749835e-6, 1.38848976310314399764e-6},
           {1.23661243662515508285e-3, -1.16651266406482567208e-3, 5.51938691272788116253e-4, -1.74596965393063240177e-4, 4.15297960791726701092e-5, -7.92110156112060002974e-6, 1.26169123286088605145e-6},
           {1.12531003517923628571e-3, -1.06120060162882791019e-3, 5.01974035268332717009e-4, -1.58752515955471368335e-4, 3.77526004213214877166e-5, -7.19919933587208845413e-6, 1.14649088671883930414e-6},
           {1.02405466725212653499e-3, -9.65420891545132569926e-4, 4.56543131840030005225e-4, -1.44349004360699785954e-4, 3.43196153006306109933e-5, -6.54320600341337002927e-6, 1.04182625403280015587e-6},
           {9.31937027968871337623e-4, -8.78308666923932807903e-4, 4.15233708683056831987e-4, -1.31255131533915259372e-4, 3.11994172133254151261e-5, -5.94709427894360400573e-6, 9.46732328942448385242e-7},
           {8.48130304636495065650e-4, -7.99077699101498838651e-4, 3.77671056657565354375e-4, -1.19351583918011791932e-4, 2.83634560796913804998e-5, -5.40538890115667592398e-6, 8.60332617960792217186e-7},
           {7.71882676849433048416e-4, -7.27013233349803442325e-4, 3.43514601148823704377e-4, -1.08529937577916485653e-4, 2.57857920928947448270e-5, -4.91311600275441481161e-6, 7.81831010858974541461e-7},
           {7.02510499807684220784e-4, -6.61465478465018009296e-4, 3.12454786901327885140e-4, -9.86916626611545266205e-5, 2.34428567014592951438e-5, -4.46575713057075685171e-6, 7.10504399047971484831e-7},
           {6.39392108496544017519e-4, -6.01843690456521076756e-4, 2.84210247622629179603e-4, -8.97472190115760389949e-5, 2.13132355091943613264e-5, -4.05920748778513747651e-6, 6.45695972644634018874e-7},
           {5.81962186076561490029e-4, -5.47610796031468196471e-4, 2.58525234284752848495e-4, -8.16152345782207772930e-5, 1.93774710801326128465e-5, -3.68973801005774862684e-6, 5.86809133750940053678e-7},
           {5.29706645010300175916e-4, -4.98278506541522487813e-4, 2.35167278441536395329e-4, -7.42217590286768858420e-5, 1.76178838210444006069e-5, -3.35396092314721412514e-6, 5.33301969231774564972e-7},
           {4.82157974156412314111e-4, -4.53402877574094170365e-4, 2.13925069051200557714e-4, -6.74995856731261655590e-5, 1.60184092820752633482e-5, -3.04879846200714902711e-6, 4.84682231502041208417e-7},
           {4.38891009334927805884e-4, -4.12580273472239764197e-4, 1.94606523265169041679e-4, -6.13876354380545513666e-5, 1.45644503685746631654e-5, -2.77145446080552201691e-6, 4.40502780577446004169e-7},
           {3.99519088749969864937e-4, -3.75443699793225906490e-4, 1.77037033434876374177e-4, -5.58303972032373548202e-5, 1.32427430956706760419e-5, -2.51938855004553706427e-6, 4.00357444949387785408e-7},
           {3.63690558183174278851e-4, -3.41659470100165571418e-4, 1.61057874214693379352e-4, -5.07774193374318897915e-5, 1.20412346428902977983e-5, -2.29029272123884219476e-6, 3.63877262753408351435e-7},
           {3.31085594075474420536e-4, -3.10924176555425952652e-4, 1.46524755116243441105e-4, -4.61828477420896745019e-5, 1.09489725803017569361e-5, -2.08207004161847762194e-6, 3.30727068249254693922e-7},
           {3.01413315526177663737e-4, -2.82961936577138953655e-4, 1.33306505211003945921e-4, -4.20050061427396323487e-5, 9.95600424132923967420e-6, -1.89281532138613383783e-6, 3.00602391852045446290e-7},
           {2.74409158883252130533e-4, -2.57521890356957842017e-4, 1.21283877896626810780e-4, -3.82060147585046598531e-5, 9.05328531152874419385e-6, -1.72079755415311361752e-6, 2.73226644878511624170e-7},
           {2.49832491001863803669e-4, -2.34375926341667183096e-4, 1.10348464749183806737e-4, -3.47514438351268471501e-5, 8.23259678809480962408e-6, -1.56444396772669724183e-6, 2.48348562827186484128e-7},
           {2.27464439431594901567e-4, -2.13316613874672329114e-4, 1.00401708488804302581e-4, -3.16099988491948854629e-5, 7.48646954248809095179e-6, -1.42232553736757197408e-6, 2.25739883421645332363e-7},
           {2.07105919776563929995e-4, -1.94155324095131889784e-4, 9.13540059992529131141e-5, -2.87532344839885959644e-5, 6.80811578905748100932e-6, -1.29314382723953499804e-6, 2.05193237833989237990e-7},
           {1.88575842275129162105e-4, -1.76720521920120459628e-4, 8.31238931713534706051e-5, -2.61552947431989258969e-5, 6.19136682653416128348e-6, -1.17571903811678556757e-6, 1.86520235492242805341e-7},
           {1.71709481283587993977e-4, -1.60856213504688937404e-4, 7.56373040934913489245e-5, -2.37926768102205474893e-5, 5.63061647739511999405e-6, -1.06897915062222089482e-6, 1.69549724678777433447e-7},
           {1.56356992836366795463e-4, -1.46420535000520716162e-4, 6.88268977966975485910e-5, -2.16440164799893073320e-5, 5.12076970287203540622e-6, -9.71950063446739345922e-7, 1.54126212764164790369e-7},
           {1.42382066807322674260e-4, -1.33284469729227689119e-4, 6.26314463833752135347e-5, -1.96898931894876977550e-5, 4.65719591930908251342e-6, -8.83746635239821793345e-7, 1.40108431407332163558e-7},
           {1.29660701425392407230e-4, -1.21330682063157112055e-4, 5.69952789333257698809e-5, -1.79126528539147621328e-5, 4.23568658509688012701e-6, -8.03564547251738781418e-7, 1.27368033402440460862e-7},
           {1.18080089014223151467e-4, -1.10452457375738308720e-4, 5.18677760935957915295e-5, -1.62962468797946171133e-5, 3.85241666693443473505e-6, -7.30672911425991863501e-7, 1.15788409078160910457e-7},
           {1.07537602839873666204e-4, -1.00552738394762430116e-4, 4.72029107245444841390e-5, -1.48260858755028401840e-5, 3.50390963006443551176e-6, -6.64407555558085474605e-7, 1.05263611267446669927e-7},
           {9.79398758725024678670e-5, -9.15432491745096804008e-5, 4.29588303977337002365e-5, -1.34889067152078530353e-5, 3.18700562972365341468e-6, -6.04164923418008002469e-7, 9.56973788758833605488e-8},
           {8.92019631056377508256e-5, -8.33436987044584718298e-5, 3.90974779256844491245e-5, -1.22726517353123893274e-5, 2.89883261065268930029e-6, -5.49396533437404643657e-7, 8.70022499937000806902e-8},
           {8.12465798378416147489e-5, -7.58810569008203734866e-5, 3.55842464527795338501e-5, -1.11663589542790417809e-5, 2.63678004839319051633e-6, -4.99603944741601657995e-7, 7.90987563290987440456e-8},
           {7.40034090133339197189e-5, -6.90888963890546172007e-5, 3.23876659538505299175e-5, -1.01600623082714956562e-5, 2.39847509051598880490e-6, -4.54334184009603344770e-7, 7.19146914964966039130e-8},
           {6.74084713467740595256e-5, -6.29067940869262301386e-5, 2.94791182752006924582e-5, -9.24470098727965646152e-6, 2.18176087809718663316e-6, -4.13175590915812805175e-7, 6.53844463796363966010e-8},
           {6.14035525286839198008e-5, -5.72797871441193740178e-5, 2.68325781146464661172e-5, -8.41203704017775218712e-6, 1.98467684789729144077e-6, -3.75754043785286165830e-7, 5.94484054127102827999e-8},
           {5.59356823271723826345e-5, -5.21578782909338730962e-5, 2.44243775750271778556e-5, -7.65458049326608419528e-6, 1.80544083398801343180e-6, -3.41729530615959625414e-7, 5.40523981884892898549e-8},
           {5.09566608734504853631e-5, -4.74955860997474415999e-5, 2.22329921417326442895e-5, -6.96552129597354442345e-6, 1.64243280418230449676e-6, -3.10793033819278307695e-7, 4.91472013162303717958e-8},
           {4.64226278474343990749e-5, -4.32515360728695220883e-5, 2.02388461311253818804e-5, -6.33866747019021218213e-6, 1.49418008170978489584e-6, -2.82663699934792855466e-7, 4.46880859186455133792e-8},
           {4.22936706694478100721e-5, -3.93880888429156593910e-5, 1.84241358351003954238e-5, -5.76838889673801903061e-6, 1.35934391628202693766e-6, -2.57086268211589990983e-7, 4.06344065808146961402e-8},
           {3.85334681582284434504e-5, -3.58710021103181620253e-5, 1.67726687490770143285e-5, -5.24956622430077798842e-6, 1.23670728113735295486e-6, -2.33828734344453713737e-7, 3.69492279485576728508e-8},
           {3.51089664373572485855e-5, -3.26691232501720804247e-5, 1.52697174179475508426e-5, -4.77754443320197175464e-6, 1.12516378395835897360e-6, -2.12680227827681657855e-7, 3.35989855230400991684e-8},
           {3.19900841648106362323e-5, -2.97541098001199646886e-5, 1.39018865682749022367e-5, -4.34809062917523727156e-6, 1.02370758982219067730e-6, -1.93449083364741662072e-7, 3.05531775155290960983e-8},
           {2.91494444262637126630e-5, -2.71001752949721427962e-5, 1.26569923165684664480e-5, -3.95735568111344912197e-6, 9.31424263668823055817e-7, -1.75961088565825524283e-7, 2.77840849141944372843e-8},
           {2.65621308744780376026e-5, -2.46838581445748709913e-5, 1.15239523538944909004e-5, -3.60183935206707484143e-6, 8.47482448242750539071e-7, -1.60057891794504693312e-7, 2.52665171763543395711e-8},
           {2.42054659168010943078e-5, -2.24838114611935391458e-5, 1.04926861074106983609e-5, -3.27835860481691118579e-6, 7.71126301157059733477e-7, -1.45595555504270797512e-7, 2.29775811970283184366e-8},
           {2.20588089524951745104e-5, -2.04806119332981895111e-5, 9.55402397057956011099e-6, -2.98401879246670088058e-6, 7.01668621717138945576e-7, -1.32443241749496432608e-7, 2.08964714202962878541e-8},
           {2.01033728431248741926e-5, -1.86565860158720000985e-5, 8.69962477664921495011e-6, -2.71618747095632307310e-6, 6.38484604489011346428e-7, -1.20482017775761598527e-7, 1.90042791557805380833e-8},
           {1.83220569642231453683e-5, -1.69956518647987550878e-5, 7.92190076525802279234e-6, -2.47247059443060475745e-6, 5.81006162363261765962e-7, -1.09603770702899047661e-7, 1.72838193403900230400e-8},
           {1.66992953364322548439e-5, -1.54831755859658184104e-5, 7.21394936041049248386e-6, -2.25069087623409390698e-6, 5.28716767103136171651e-7, -9.97102213208046679660e-8, 1.57194731469498123051e-8},
           {1.52209184706470041187e-5, -1.41058404997557416011e-5, 6.56949114021812707621e-6, -2.04886811813994017069e-6, 4.81146760123131104964e-7, -9.07120279323836569794e-8, 1.42970449879855176112e-8},
           {1.38740276856168348157e-5, -1.28515282397838080322e-5, 5.98281343526938977871e-6, -1.86520132844429006180e-6, 4.37869090566256583718e-7, -8.25279720084488365735e-8, 1.30036325961079321024e-8},
           {1.26468807691216212285e-5, -1.17092106121526527121e-5, 5.44871904380828602594e-6, -1.69805246593253386563e-6, 3.98495441674161153439e-7, -7.50842181736540320763e-8, 1.18275089833860897256e-8},
           {1.15287879562497260529e-5, -1.06688512391215681562e-5, 4.96247959853166503334e-6, -1.54593166160139727372e-6, 3.62672710010750689044e-7, -6.83136417276327016420e-8, 1.07580151919321230090e-8},
           {1.05100172914099583359e-5, -9.72131609982128108434e-6, 4.51979316219028583000e-6, -1.40748378353824688702e-6, 3.30079805339787937523e-7, -6.21552175277739170754e-8, 9.78546284767030941029e-9},
           {9.58170852534913469723e-6, -8.85829216129554525760e-6, 4.11674566768649274732e-6, -1.28147622264074597854e-6, 3.00424741900174184984e-7, -5.65534646252704763439e-8, 8.90104561985277913619e-9},
           {8.73579477539537175754e-6, -8.07221336645721649901e-6, 3.74977585335585383665e-6, -1.16678778801918164740e-6, 2.73441994496402466687e-7, -5.14579415594584268261e-8, 8.09675877115756913013e-9},
           {7.96493124710374303041e-6, -7.35619331217816179965e-6, 3.41564337592217987592e-6, -1.06239861106323495476e-6, 2.48890095250706903931e-7, -4.68227876817905868960e-8, 7.36532605792530908265e-9},
           {7.26243037908262160604e-6, -6.70396401129807819621e-6, 3.11139981251682533968e-6, -9.67380966367924041347e-7, 2.26549449070171849054e-7, -4.26063063043669192401e-8, 6.70013330795352762212e-9},
           {6.62220283060406852266e-6, -6.10982018739090654877e-6, 2.83436228941898931620e-6, -8.80890926084795216947e-7, 2.06220347886874933036e-7, -3.87705858527064933291e-8, 6.09516806490178855430e-9},
           {6.03870378417576320523e-6, -5.56856860117086037052e-6, 2.58208949904471438391e-6, -8.02160771871086587161e-7, 1.87721165550514936056e-7, -3.52811555519510304051e-8, 5.54496474433977813440e-9},
           {5.50688408305316626944e-6, -5.07548195291067361350e-6, 2.35235988840711780280e-6, -7.30492095521581132018e-7, 1.70886716907744181629e-7, -3.21066724931731798698e-8, 5.04455479731302971549e-9},
           {5.02214576713282011879e-6, -4.62625694659689857359e-6, 2.14315182198781375219e-6, -6.65249525648677394222e-7, 1.55566766105829703466e-7, -2.92186372148624026720e-8, 4.58942142347943492644e-9},
           {4.58030161018576250081e-6, -4.21697613913857753074e-6, 1.95262553988007543738e-6, -6.05855023483619494874e-7, 1.41624670524190117936e-7, -2.65911351966447136651e-8, 4.17545841781219699357e-9},
           {4.17753829732266421221e-6, -3.84407323211877144451e-6, 1.77910674835201160308e-6, -5.51782696058227553584e-7, 1.28936147978375134511e-7, -2.42006019002833258429e-8, 3.79893277296080652653e-9},
           {3.81038291425528221769e-6, -3.50430149464480994464e-6, 1.62107169478201093999e-6, -5.02554079739533173726e-7, 1.17388155968617868171e-7, -2.20256092092053846600e-8, 3.45645069396380437678e-9},
           {3.47567244962874020539e-6, -3.19470503409574006415e-6, 1.47713359237430354127e-6, -4.57733851372704293857e-7, 1.06877872769579643882e-7, -2.00466713142035052810e-8, 3.14492671343675288782e-9},
           {3.17052603871509631927e-6, -2.91259265724134193450e-6, 1.34603027229270877588e-6, -4.16925928179843319939e-7, 9.73117710887645079293e-8, -1.82460682713851329506e-8, 2.86155562390694000763e-9},
           {2.89231970132554951826e-6, -2.65551408755016969982e-6, 1.22661295196736658467e-6, -3.79769921099401906989e-7, 8.86047758668714872851e-8, -1.66076856205360338104e-8, 2.60378696989753145770e-9},
           {2.63866334913892797867e-6, -2.42123832572654315202e-6, 1.11783601843393700779e-6, -3.45937909465481421905e-7, 8.06794985618665841260e-8, -1.51168685993229362311e-8, 2.36930186591843146790e-9},
           {2.40737985796005690627e-6, -2.20773395981141531589e-6, 1.01874773474979380233e-6, -3.15131507847694272305e-7, 7.34655409568629216218e-8, -1.37602896225442667509e-8, 2.15599192791695307541e-9},
           {2.19648601889704384165e-6, -2.01315124872495201911e-6, 9.28481785880934147056e-7, -2.87079198527288812196e-7, 6.68988621664214581208e-8, -1.25258278171823913922e-8, 1.96194012517686030167e-9},
           {2.00417519924858780381e-6, -1.83580581907888491916e-6, 8.46249588042891669026e-7, -2.61533905498244384427e-7, 6.09212030924597758311e-8, -1.14024595144361258108e-8, 1.78540337730905906451e-9},
           {1.82880155917298340618e-6, -1.67416382958916559552e-6, 7.71333292378146837380e-7, -2.38270788075108027922e-7, 5.54795631048851326715e-8, -1.03801587002381654194e-8, 1.62479673701477441311e-9},
           {1.66886568410767403577e-6, -1.52682847060580884591e-6, 7.03079420124236208621e-7, -2.17085234182562033340e-7, 5.05257241981636789202e-8, -9.44980651691302758038e-9, 1.47867901387061490830e-9},
           {1.52300150554751672283e-6, -1.39252767826677581642e-6, 6.40893072128211396900e-7, -1.97791035213316931618e-7, 4.60158183076749654315e-8, -8.60310899144756889395e-9, 1.34573970761935548019e-9},
           {1.38996439428549271100e-6, -1.27010295368507234916e-6, 5.84232660746196902830e-7, -1.80218725987501889212e-7, 4.19099338628528008449e-8, -7.83252224109137114813e-9, 1.22478713147285494958e-9},
           {1.26862032067512828203e-6, -1.15849918749180757177e-6, 5.32605116878783151019e-7, -1.64214074843330666515e-7, 3.81717580113906822569e-8, -7.13118447537146112621e-9, 1.11473761685537794651e-9},
           {1.15793598598377090379e-6, -1.05675539907263633783e-6, 4.85561529176762808515e-7, -1.49636710249135059853e-7, 3.47682512734692668631e-8, -6.49285417572456229962e-9, 1.01460570093768010209e-9},
           {1.05696983755573679335e-6, -9.63996308032471594334e-7, 4.42693176346272662718e-7, -1.36358871563326374211e-7, 3.16693516800265380993e-8, -5.91185389039258340330e-9, 9.23495207326133530014e-10},
           {9.64863888372247416271e-7, -8.79424662877830634899e-7, 4.03627917023167551748e-7, -1.24264272692748159951e-7, 2.88477057172420754154e-8, -5.38301913351227251152e-9, 8.40591138460194088470e-10},
           {8.80836268751813585914e-7, -8.02314258685214690852e-7, 3.68026904905631520116e-7, -1.13247068421502272339e-7, 2.62784236431052997170e-8, -4.90165192393058959335e-9, 7.65152305711228006138e-10},
           {8.04174444444767902580e-7, -7.32003581688765592246e-7, 3.35581599760901893925e-7, -1.03210914110977544636e-7, 2.39388569634170151685e-8, -4.46347854162125878763e-9, 6.96504629934787635737e-10},
           {7.34229041297562455569e-7, -6.67890024326950708920e-7, 3.06011047583118932770e-7, -9.40681103159745180282e-8, 2.18083960558628482154e-8, -4.06461111805507598561e-9, 6.34035051369208067714e-10},
           {6.70408222049501599540e-7, -6.09424619386816852441e-7, 2.79059405598915686524e-7, -8.57388246291906261106e-8, 1.98682861137407105895e-8, -3.70151271184034270076e-9, 5.77185993352550897297e-10},
           {6.12172565725195988349e-7, -5.56107246521555015298e-7, 2.54493690017380840914e-7, -7.81503837639148561556e-8, 1.81014597471963056276e-8, -3.37096555272157705846e-9, 5.25450329398859106253e-10},
           {5.59030404544254277209e-7, -5.07482268634564324787e-7, 2.32101726421439027469e-7, -7.12366295189334468089e-8, 1.64923847309439978003e-8, -3.07004216589633653714e-9, 4.78366807780163766795e-10},
           {5.10533577325572000798e-7, -4.63134559459029613083e-7, 2.11690284516646379222e-7, -6.49373328461476995762e-8, 1.50269255248061313564e-8, -2.79607911484679954646e-9, 4.35515891945124158823e-10},
           {4.66273562053496969253e-7, -4.22685887150804519314e-7, 1.93083380607380920804e-7, -5.91976607655071337501e-8, 1.36922173182502918897e-8, -2.54665312472534610636e-9, 3.96515978907138665492e-10},
           {4.25877953630190168711e-7, -3.85791621885609229289e-7, 1.76120732674426611305e-7, -5.39676913483308394837e-8, 1.24765514635810135434e-8, -2.31955937000082644338e-9, 3.61019961189254718202e-10},
           {3.89007255892818157568e-7, -3.52137738337826731867e-7, 1.60656354295614756448e-7, -4.92019724232719429542e-8, 1.13692712655878633237e-8, -2.11279172976312044735e-9, 3.28712101052025562798e-10},
           {3.55351959753139478814e-7, -3.21438086543503392700e-7, 1.46557274894901711984e-7, -4.48591200530082384350e-8, 1.03606771892080977466e-8, -1.92452483197860165051e-9, 2.99305188582512438636e-10}}};
  // clang-format on
}
} // namespace tables
