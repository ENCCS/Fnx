
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 9.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<9>() {
  // clang-format off
  return {{{5.26315789473684181310e-2, -4.76190476190476164042e-2, 2.17391304347826080923e-2, -6.66666666666666622720e-3, 1.54320987654320979088e-3, -2.87356321839080455782e-4, 4.48028673835125447640e-5},
           {4.80805503147778770523e-2, -4.34651897241010790052e-2, 1.98289154254079127981e-2, -6.07724294400372941349e-3, 1.40604657595830490925e-3, -2.61698466042582008478e-4, 4.07864152237905506159e-5},
           {4.39263812815964202474e-2, -3.96762281808753641821e-2, 1.80875484005010092603e-2, -5.54019722711015811384e-3, 1.28112822797312201836e-3, -2.38340388512528516185e-4, 3.71312463389489145842e-5},
           {4.01342195163447990058e-2, -3.62199168813888139340e-2, 1.65000281895393355325e-2, -5.05085445474765838691e-3, 1.16735746739103966006e-3, -2.17075252606608459652e-4, 3.38047647899992104214e-5},
           {3.66722918539976391883e-2, -3.30668739878948528266e-2, 1.50526923188454495040e-2, -4.60495846484404794396e-3, 1.06373560890457986676e-3, -1.97714880568004321279e-4, 3.07773235087079207167e-5},
           {3.35116308467135262661e-2, -3.01903263749236996927e-2, 1.37330970803821589277e-2, -4.19863433082431208865e-3, 9.69353746292228807616e-4, -1.80088065706091352784e-4, 2.80219568674507340644e-5},
           {3.06258257078390744299e-2, -2.75658769624299963830e-2, 1.25299083820847693971e-2, -3.82835409470457009931e-3, 8.83384656654831392116e-4, -1.64039037627113928018e-4, 2.55141375559375809564e-5},
           {2.79907954645739615041e-2, -2.51712928824969171815e-2, 1.14328024075091693595e-2, -3.49090558976336475666e-3, 8.05075436699261210750e-4, -1.49426066605427230452e-4, 2.32315555510686747476e-5},
           {2.55845823310167953812e-2, -2.29863126075608784071e-2, 1.04323752004865048099e-2, -3.18336407345391802018e-3, 7.33740804710054971352e-4, -1.36120194452573147923e-4, 2.11539171681710028671e-5},
           {2.33871634919447859979e-2, -2.09924703368620964306e-2, 9.52006037041800388943e-3, -2.90306641653972474088e-3, 6.68757007878695384356e-4, -1.24004080392571303408e-4, 1.92627623653927075511e-5},
           {2.13802796502142976320e-2, -1.91729360913146310019e-2, 8.68805418654123272348e-3, -2.64758761745452486647e-3, 6.09556280140341943605e-4, -1.12970951497913280493e-4, 1.75412986397888052764e-5},
           {1.95472788385587688265e-2, -1.75123701066077289146e-2, 7.92924739560970856522e-3, -2.41471943181568310388e-3, 5.55621800649107842884e-4, -1.02923648191448138009e-4, 1.59742500051514481211e-5},
           {1.78729741311290761530e-2, -1.59967902413543222595e-2, 7.23716315754972111529e-3, -2.20245092604757358723e-3, 5.06483107550936644502e-4, -9.37737561833503911789e-5, 1.45477196793155328877e-5},
           {1.63435140125718983417e-2, -1.46134512326359360807e-2, 6.60590054833501156423e-3, -2.00895078137165988136e-3, 4.61711925829108972910e-4, -8.54408169975960900960e-5, 1.32490652337723105654e-5},
           {1.49462642738688641225e-2, -1.33507347363935619661e-2, 6.03008312904613694161e-3, -1.83255119014975290277e-3, 4.20918371738935638299e-4, -7.78516099560235122013e-5, 1.20667850721008658297e-5},
           {1.36697004055584547810e-2, -1.21980491857269449790e-2, 5.50481212530600817756e-3, -1.67173320086925775857e-3, 3.83747499749428834688e-4, -7.09394991366671986543e-5, 1.09904152070240883983e-5},
           {1.25033095512383837095e-2, -1.11457385871481066963e-2, 5.02562380241482545284e-3, -1.52511338106388772556e-3, 3.49876161001663982079e-4, -6.46438394125598307302e-5, 1.00104353997625296476e-5},
           {1.14375011682228133747e-2, -1.01849994539702521507e-2, 4.58845065891775802380e-3, -1.39143167928834502259e-3, 3.19010145104377674640e-4, -5.89094362129955086268e-5, 9.11818381065759035926e-6},
           {1.04635256186538360551e-2, -9.30780514801011517323e-3, 4.18958609536471734275e-3, -1.26954037801808015430e-3, 2.90881579642657381226e-4, -5.36860541362396337579e-5, 8.30577938754916961347e-6},
           {9.57339998392223688606e-3, -8.50683696628617980195e-3, 3.82565224597036616927e-3, -1.15839403912288991388e-3, 2.65246564098667965068e-4, -4.89279699853111080688e-5, 7.56605128883321845288e-6},
           {8.75984045855732543218e-3, -7.77542136899413757062e-3, 3.49357068903303081414e-3, -1.05704035245444949963e-3, 2.41883016995362529764e-4, -4.45935662007964918026e-5, 6.89247470213859280157e-6},
           {8.01620073736357408034e-3, -7.10747279926810405365e-3, 3.19053577757718491784e-3, -9.64611806173358847689e-4, 2.20588716994265686064e-4, -4.06449610303617211255e-5, 6.27911247773709314742e-6},
           {7.33641586202494425800e-3, -6.49744159457730195706e-3, 2.91399035497608236561e-3, -8.80318104794165475283e-4, 2.01179520424157279746e-4, -3.70476721070456770351e-5, 5.72056204866954851361e-6},
           {6.71495104113282829938e-3, -5.94026653450436051274e-3, 2.66160364149868556780e-3, -8.03439267613618307573e-4, 1.83487739304701686586e-4, -3.37703104105852196302e-5, 5.21190715761862928752e-6},
           {6.14675500104398114809e-3, -5.43133161050483349863e-3, 2.43125109699886222600e-3, -7.33319346268584189991e-4, 1.67360665372180336934e-4, -3.07843018606952147239e-5, 4.74867395422654501729e-6},
           {5.62721746452701006985e-3, -4.96642664042289214837e-3, 2.22099608249819993264e-3, -6.69360705700615594461e-4, 1.52659226926613544005e-4, -2.80636340409114099284e-5, 4.32679106624249474304e-6},
           {5.15213039016031420364e-3, -4.54171138436772117014e-3, 2.02907315936426239922e-3, -6.11018817834046100955e-4, 1.39256766512604998522e-4, -2.55846257785804851576e-5, 3.94255328395466648301e-6},
           {4.71765263822053557835e-3, -4.15368284934082912518e-3, 1.85387287929700901763e-3, -5.57797521849158137175e-4, 1.27037928531049422584e-4, -2.33257175129171851955e-5, 3.59258853014457732634e-6},
           {4.32027775863869523826e-3, -3.79914549802094466194e-3, 1.69392793153767340711e-3, -5.09244709092710281552e-4, 1.15897646865242961913e-4, -2.12672805706243048935e-5, 3.27382781759788742037e-6},
           {3.95680462376564977267e-3, -3.47518410261037470968e-3, 1.54790052572506033057e-3, -4.64948394452459811896e-4, 1.05740223501880754018e-4, -1.93914436390970614747e-5, 2.98347792328798226970e-6},
           {3.62431065341968549134e-3, -3.17913900785168944754e-3, 1.41457089975179995181e-3, -4.24533139464414242641e-4, 9.64784899430434452665e-5, -1.76819348822614885654e-5, 2.71899653296437480496e-6},
           {3.32012740220557957954e-3, -2.90858358844326824605e-3, 1.29282685191539408950e-3, -3.87656795552429600527e-4, 8.80330439469536224538e-5, -1.61239382850379036390e-5, 2.47806963225227732444e-6},
           {3.04181829959547641792e-3, -2.66130370530435729839e-3, 1.18165420570510429008e-3, -3.54007538647620688919e-4, 8.03315548097457531995e-5, -1.47039629405587249394e-5, 2.25859094070707644810e-6},
           {2.78715835192831556597e-3, -2.43527898263606662130e-3, 1.08012812379677651010e-3, -3.23301169025549646821e-4, 7.33081310138414959932e-5, -1.34097241107693753977e-5, 2.05864320375367910532e-6},
           {2.55411563248121456851e-3, -2.22866574364956543733e-3, 9.87405195317268011626e-4, -2.95278652555595606376e-4, 6.69027446263070161171e-5, -1.22300349969619271496e-5, 1.87648117424458272449e-6},
           {2.34083440124292470677e-3, -2.03978145732815890900e-3, 9.02716227255206211597e-4, -2.69703881700500739359e-4, 6.10607073378372161923e-5, -1.11547082530953118343e-5, 1.71051613064548382377e-6},
           {2.14561971011276511612e-3, -1.86709056178472514523e-3, 8.25359677096299503007e-4, -2.46361636554103219203e-4, 5.57321934943458724724e-5, -1.01744663623189946286e-5, 1.55930179274259037891e-6},
           {1.96692336208231354638e-3, -1.70919154178710941232e-3, 7.54695669404726308428e-4, -2.25055727979235641913e-4, 5.08718058927139254359e-5, -9.28086007673342292185e-6, 1.42152150838831860574e-6},
           {1.80333110464461483617e-3, -1.56480514895817484668e-3, 6.90140544207638916355e-4, -2.05607306521619296463e-4, 4.64381804938450743901e-5, -8.46619419281364930330e-6, 1.29597659627667058221e-6},
           {1.65355094831951877389e-3, -1.43276366311109065212e-3, 6.31161889713368609231e-4, -1.87853322243816271741e-4, 4.23936265532483562077e-5, -7.72346000074848785893e-6, 1.18157574017100973337e-6},
           {1.51640251087751479903e-3, -1.31200110224232910881e-3, 5.77274016147172482592e-4, -1.71645121959078795874e-4, 3.87037989850399252560e-5, -7.04627380580387867288e-6, 1.07732533949016436690e-6},
           {1.39080729667323240231e-3, -1.20154429695490069276e-3, 5.28033831359249255719e-4, -1.56847171560248806622e-4, 3.53374000623785265913e-5, -6.42882097424802842950e-6, 9.82320729780133883102e-7},
           {1.27577982854108892483e-3, -1.10050475259559498060e-3, 4.83037082382726417392e-4, -1.43335892244597672748e-4, 3.22659078185117128104e-5, -5.86580500587093544261e-6, 8.95738194436700236279e-7},
           {1.17041955702991418153e-3, -1.00807122922877260597e-3, 4.41914930325773352374e-4, -1.30998600441562987979e-4, 2.94633287501624303569e-5, -5.35240118013985894031e-6, 8.16827696170184744169e-7},
           {1.07390347842490924829e-3, -9.23502975796004852566e-4, 4.04330828900435431707e-4, -1.19732542165749901615e-4, 2.69059726410703060027e-5, -4.88421436396318517571e-6, 7.44906263182362607996e-7},
           {9.85479399082481296798e-4, -8.46123560480537906595e-4, 3.69977679547166217119e-4, -1.09444013350506306093e-4, 2.45722475200631357002e-5, -4.45724060625797107300e-6, 6.79351970915961687126e-7},
           {9.04459789139411838091e-4, -7.75315244458178254652e-4, 3.38575238531965152199e-4, -1.00047558475304521194e-4, 2.24424729468392027305e-5, -4.06783217836795098953e-6, 6.19598465592826825418e-7},
           {8.30216173700956227947e-4, -7.10513850917270962937e-4, 3.09867753593982267132e-4, -9.14652404898468605107e-5, 2.04987099812996756269e-5, -3.71266575016521896454e-6, 5.65129980626350701181e-7},
           {7.62174014206808375475e-4, -6.51204085511387963450e-4, 2.83621809724953714144e-4, -8.36259756654137895691e-5, 1.87246063402431839719e-5, -3.38871341966800906876e-6, 5.15476801421388300221e-7},
           {6.99808036859537888411e-4, -5.96915268306823535924e-4, 2.59624365485660473819e-4, -7.64649275751025749633e-5, 1.71052553798513532076e-5, -3.09321633947221532381e-6, 4.70211138100759782227e-7},
           {6.42637968813621496961e-4, -5.47217440837333124991e-4, 2.37680962924925899939e-4, -6.99229549243518717916e-5, 1.56270676648637714520e-5, -2.82366070645520496931e-6, 4.28943369358143867135e-7},
           {5.90224646297753141079e-4, -5.01717815111927872493e-4, 2.17614095678178413613e-4, -6.39461084261529444069e-5, 1.42776539967618164496e-5, -2.57775590227615183160e-6, 3.91318623965871690184e-7},
           {5.42166462009003604326e-4, -4.60057534366373731011e-4, 1.99261721198704897526e-4, -5.84851723458276116481e-5, 1.30457188746528709208e-5, -2.35341459135759346701e-6, 3.57013669493007652408e-7},
           {4.98096122002138382012e-4, -4.21908718031169976178e-4, 1.82475904327563276820e-4, -5.34952467320390308335e-5, 1.19209634547784034498e-5, -2.14873460046083040092e-6, 3.25734080541596065377e-7},
           {4.57677684926081917733e-4, -3.86971765831747795301e-4, 1.67121580548797404701e-4, -4.89353667072839554689e-5, 1.08939971584873178238e-5, -1.96198241982029368877e-6, 2.97211661311977999781e-7},
           {4.20603858854946008675e-4, -3.54972898161808709475e-4, 1.53075428315177454377e-4, -4.47681555156679319811e-5, 9.95625715487162663182e-6, -1.79157818022176844059e-6, 2.71202099584302210485e-7},
           {3.86593533144030622115e-4, -3.25661911897646408256e-4, 1.40224840775340670474e-4, -4.09595083211715307175e-5, 9.09993501373804072972e-6, -1.63608197352627049721e-6, 2.47482831273372778930e-7},
           {3.55389524730664906668e-4, -2.98810132667662277026e-4, 1.28466988094281620112e-4, -3.74783040185039506413e-5, 8.31790988780814268834e-6, -1.49418139607338490772e-6, 2.25851096596502709727e-7},
           {3.26756520112932527002e-4, -2.74208546273266491090e-4, 1.17707962343222840521e-4, -3.42961425633968905024e-5, 7.60368764056647593259e-6, -1.36468020525233420274e-6, 2.06122170606117856758e-7},
           {3.00479195891898873908e-4, -2.51666093489635411644e-4, 1.07861997648896779122e-4, -3.13871055519897047001e-5, 6.95134538852427077559e-6, -1.24648798940349345934e-6, 1.88127752395924642590e-7},
           {2.76360502269232840948e-4, -2.31008113870754562807e-4, 9.88507589424781485258e-5, -2.87275379817725790162e-5, 6.35548097430387834731e-6, -1.13861076019621037157e-6, 1.71714498705606719593e-7},
           {2.54220095265091647948e-4, -2.12074925454994108213e-4, 9.06026932405353815306e-5, -2.62958493111859801876e-5, 5.81116693030083015338e-6, -1.04014238480131456970e-6, 1.56742688937017408888e-7},
           {2.33892904672679464214e-4, -1.94720528426223004953e-4, 8.30524379296346439020e-5, -2.40723321030571001762e-5, 5.31390853213313334689e-6, -9.50256782611911596492e-7, 1.43085009766320229889e-7},
           {2.15227825906779156101e-4, -1.78811421841260971164e-4, 7.61402810173636348124e-5, -2.20389966900768638849e-5, 4.85960557699276658332e-6, -8.68200818030684835373e-7, 1.30625448602057576148e-7},
           {1.98086524943631492107e-4, -1.64225523496488610628e-4, 6.98116687598561403653e-5, -2.01794204398364369890e-5, 4.44451755469245230455e-6, -7.93287826996591629241e-7, 1.19258286108311029490e-7},
           {1.82342346497743905322e-4, -1.50851183883042577879e-4, 6.40167564833197166776e-5, -1.84786103237836603331e-5, 4.06523190894220278938e-6, -7.24891720523695768684e-7, 1.08887178893683695162e-7},
           {1.67879316445711305973e-4, -1.38586285978834367755e-4, 5.87099987881674166426e-5, -1.69228776099469521189e-5, 3.71863511346004102273e-6, -6.62441613620078485336e-7, 9.94243242687258759166e-8},
           {1.54591230295342973869e-4, -1.27337423353584140414e-4, 5.38497756623797568993e-5, -1.54997236044276064625e-5, 3.40188631215998577619e-6, -6.05416932590908996351e-7, 9.07896997038633367125e-8},
           {1.42380820217090971885e-4, -1.17019149726464583299e-4, 4.93980513386377040374e-5, -1.41977354624083763158e-5, 3.11239329508714950001e-6, -5.53342957948322242282e-7, 8.29103702834303777394e-8},
           {1.31158993810116076629e-4, -1.07553293720557118104e-4, 4.53200630102601901617e-5, -1.30064911766117247317e-5, 2.84779060218369780755e-6, -5.05786763989443261838e-7, 7.57198580550265889679e-8},
           {1.20844138372928943184e-4, -9.88683331093662652600e-5, 4.15840367765060283712e-5, -1.19164729305327896726e-5, 2.60591956555177127876e-6, -4.62353519597038439815e-7, 6.91575677225367532878e-8},
           {1.11361484993520665427e-4, -9.08988233528860832154e-5, 3.81609284205879206579e-5, -1.09189880760696476333e-5, 2.38481011779500032786e-6, -4.22683117996038431886e-7, 6.31682636307025205961e-8},
           {1.02642527270902839988e-4, -8.35848756785047969364e-5, 3.50241868358304054968e-5, -1.00060970610128851035e-5, 2.18266420941911736133e-6, -3.86447106091957503403e-7, 5.77015934436078722234e-8},
           {9.46244899332637253017e-5, -7.68716803793261107365e-5, 3.21495381086300900230e-5, -9.17054769181660244827e-6, 1.99784069229064026806e-6, -3.53345886649820201501e-7, 5.27116543329075242457e-8},
           {8.72498430313744767961e-5, -7.07090713828741838226e-5, 2.95147884429317541258e-5, -8.40571517168111435729e-6, 1.82884153891494728534e-6, -3.23106168968078728762e-7, 4.81565978678055431587e-8},
           {8.04658577629790088643e-5, -6.50511284899175424613e-5, 2.70996442713476696378e-5, -7.70554740371282594188e-6, 1.67429927891412592950e-6, -2.95478645882508226700e-7, 4.39982701410453800017e-8},
           {7.42242003278757473284e-5, -5.98558139992778963324e-5, 2.48855480442177952620e-5, -7.06451509422591108871e-6, 1.53296554466357273525e-6, -2.70235876919616033110e-7, 4.02018839765760393855e-8},
           {6.84805605271813057702e-5, -5.50846407227041371855e-5, 2.28555283211034359508e-5, -6.47756623251035338208e-6, 1.40370062767789915626e-6, -2.47170359225366444173e-7, 3.67357203478962529465e-8},
           {6.31943121065166616909e-5, -5.07023686566683470236e-5, 2.09940629105847676296e-5, -5.94008456097338230527e-6, 1.28546395610634766131e-6, -2.26092769539061211539e-7, 3.35708563938872780750e-8},
           {5.83282021040064577980e-5, -4.66767278175336022264e-5, 1.92869539148453732484e-5, -5.44785168379530563047e-6, 1.17730541168302680319e-6, -2.06830361978644098520e-7, 3.06809176535328152367e-8},
           {5.38480667022462824870e-5, -4.29781649650102739622e-5, 1.77212136363343973481e-5, -4.99701249342569851027e-6, 1.07835741174827960720e-6, -1.89225507765817590110e-7, 2.80418523543862664664e-8},
           {4.97225713007870217760e-5, -3.95796121380298759592e-5, 1.62849603956715306317e-5, -4.58404362265453255523e-6, 9.87827688578472419090e-7, -1.73134364259249009043e-7, 2.56317257838920202060e-8},
           {4.59229727240498185824e-5, -3.64562751088293580774e-5, 1.49673233936973015405e-5, -4.20572465587327783403e-6, 9.04992704290768220450e-7, -1.58425661792821336244e-7, 2.34305329494302800314e-8},
           {4.24229016605952893556e-5, -3.35854400267081903346e-5, 1.37583558268950985890e-5, -3.85911185671907490993e-6, 8.29191645080086343587e-7, -1.44979597843343945844e-7, 2.14200278938154251907e-8},
           {3.91981635948539380312e-5, -3.09462966740103686040e-5, 1.26489555349811633617e-5, -3.54151419077661476904e-6, 7.59820943545737573948e-7, -1.32686828987493496328e-7, 1.95835681793672665801e-8},
           {3.62265566431737223241e-5, -2.85197768946855591645e-5, 1.16307925228750073428e-5, -3.25047144158435246758e-6, 6.96329282419132897866e-7, -1.21447551959289987973e-7, 1.79059731869021605186e-8},
           {3.34877048436246142586e-5, -2.62884068814701562546e-5, 1.06962427570724435109e-5, -2.98373423602472066731e-6, 6.38213037151469767467e-7, -1.11170665894656500317e-7, 1.63733949972402481593e-8},
           {3.09629055745759042013e-5, -2.42361721223739671875e-5, 9.83832768914419577959e-6, -2.73924581142717927477e-6, 5.85012118597800307508e-7, -1.01773008555430602268e-7, 1.49732007331787145748e-8},
           {2.86349898916845086350e-5, -2.23483939117345095117e-5, 9.05065900712915862036e-6, -2.51512537151953452706e-6, 5.36306180474554049462e-7, -9.31786599678184531550e-8, 1.36938653403195724512e-8},
           {2.64881946775634590147e-5, -2.06116164264995895819e-5, 8.32738815939545937693e-6, -2.30965289185559855863e-6, 4.91711159401513756489e-7, -8.53183074953968396276e-8, 1.25248738765580281696e-8},
           {2.45080455939155345403e-5, -1.90135034554285703835e-5, 7.66316023548108382060e-6, -2.12125524764304316161e-6, 4.50876118193924406192e-7, -7.81286668995286119724e-8, 1.14566324632467787870e-8},
           {2.26812499131174274611e-5, -1.75427439483030289495e-5, 7.05307182484196317521e-6, -1.94849354810086209484e-6, 4.13480365670817557492e-7, -7.15519544251710164716e-8, 1.04803871267917294019e-8},
           {2.09955983858530627177e-5, -1.61889656246800913851e-5, 6.49263250764095890333e-6, -1.79005157168830998373e-6, 3.79230828614474096847e-7, -6.55354053917954976442e-8, 9.58814982837813424516e-9},
           {1.94398753740862718215e-5, -1.49426559478206881732e-5, 5.97772966199085944018e-6, -1.64472520585488362715e-6, 3.47859653673964850732e-7, -6.00308351713954099294e-8, 8.77263104228504778297e-9},
           {1.80037765450377999484e-5, -1.37950898297385649954e-5, 5.50459629967756707762e-6, -1.51141280344445661970e-6, 3.19122018971708867812e-7, -5.49942388018767331758e-8, 8.02717830037658913298e-9},
           {1.66778334824433140929e-5, -1.27382634883537643503e-5, 5.06978166757177670446e-6, -1.38910637561929872454e-6, 2.92794136963142832207e-7, -5.03854258177258164030e-8, 7.34572017236725926261e-9},
           {1.54533446267211822909e-5, -1.17648339279608228603e-5, 4.67012437490423232468e-6, -1.27688354821822770464e-6, 2.68671431731508862454e-7, -4.61676871836644466009e-8, 6.72271519880622973573e-9},
           {1.43223120062308162712e-5, -1.08680635600599319481e-5, 4.30272782752669243999e-6, -1.17390021488835802235e-6, 2.46566875386663827114e-7, -4.23074914937006547788e-8, 6.15310533683098792759e-9},
           {1.32773832679740104912e-5, -1.00417695234351324953e-5, 3.96493776938673495486e-6, -1.07938382618717710563e-6, 2.26309469591621543056e-7, -3.87742078499969902862e-8, 5.63227351798552031415e-9},
           {1.23117985582649964505e-5, -9.28027730054843703336e-6, 3.65432174887225293960e-6, -9.92627259191477857660e-7, 2.07742859475053850041e-7, -3.55398530655129712646e-8, 5.15600495312914061510e-9},
           {1.14193418424187858326e-5, -8.57837826217357571085e-6, 3.36865034357899149431e-6, -9.12983217017900542336e-7, 1.90724068312915692056e-7, -3.25788610434515746942e-8, 4.72045185199485227800e-9},
           {1.05942962877000499897e-5, -7.93129080400988813258e-6, 3.10587999155708820547e-6, -8.39859112098388924442e-7, 1.75122342387493718691e-7, -2.98678723769779543857e-8, 4.32210125457796221730e-9},
           {9.83140336592634809382e-6, -7.33462476806242219898e-6, 2.86413729032312886768e-6, -7.72712391100789489196e-7, 1.60818096366403485798e-7, -2.73855423861528286909e-8, 3.95774569850793221220e-9},
           {9.12582536149498141668e-6, -6.78434886809151452020e-6, 2.64170463699520265366e-6, -7.11046263074917365255e-7, 1.47701950395465374808e-7, -2.51123659670477293618e-8, 3.62445647111694560508e-9},
           {8.47311099744352106723e-6, -6.27676086264533099790e-6, 2.43700709392182418193e-6, -6.54405795769229253117e-7, 1.35673850875361050592e-7, -2.30305177719670687824e-8, 3.31955921728373604857e-9},
           {7.86916391668071882272e-6, -5.80846024129457988818e-6, 2.24860037422472867853e-6, -6.02374348131666146129e-7, 1.24642267599210907358e-7, -2.11237063708496160314e-8, 3.04061169449795194060e-9},
           {7.31021377793800112291e-6, -5.37632320987351575338e-6, 2.07515985084528879393e-6, -5.54570309806444218367e-7, 1.14523460572843988489e-7, -1.93770411634037978814e-8, 2.78538348513768117917e-9},
           {6.79278974647584391129e-6, -4.97747977896395177191e-6, 1.91547050105211344052e-6, -5.10644120990534716462e-7, 1.05240810427117642312e-7, -1.77769109203892715540e-8, 2.55183749284411075002e-9},
           {6.31369617830119698402e-6, -4.60929277669215478695e-6, 1.76841770600377347125e-6, -4.70275548341059559949e-7, 9.67242068672581808422e-8, -1.63108729316400460062e-8, 2.33811306526074119386e-9},
           {5.86999031376487120747e-6, -4.26933862228219035997e-6, 1.63297883192993486412e-6, -4.33171194747676932579e-7, 8.89094900924515513891e-8, -1.49675518287949924015e-8, 2.14251059941549894095e-9},
           {5.45896181205077509450e-6, -3.95538971085085773520e-6, 1.50821552585504768681e-6, -3.99062222720350423249e-7, 8.17379405640276800548e-8, -1.37365472330469577893e-8, 1.96347749878519092607e-9},
           {5.07811397236938852416e-6, -3.66539827275509786151e-6, 1.39326666459463518480e-6, -3.67702272909143623364e-7, 7.51558129063743229881e-8, -1.26083494532564802317e-8, 1.79959536270503185226e-9},
           {4.72514650074215967248e-6, -3.39748158251874666832e-6, 1.28734190105385117744e-6, -3.38865560883898524776e-7, 6.91139100946867265789e-8, -1.15742625281531956217e-8, 1.64956829937325765522e-9},
           {4.39793969321761775025e-6, -3.14990840306842226009e-6, 1.18971575669576239097e-6, -3.12345136771509159374e-7, 6.35671944209769679463e-8, -1.06263339686595188209e-8, 1.51221226334480368526e-9},
           {4.09453991729071207622e-6, -2.92108656078651098931e-6, 1.09972221346328110768e-6, -2.87951293689472179272e-7, 5.84744320373349525555e-8, -9.75729061315858332501e-9, 1.38644532719302544135e-9},
           {3.81314628329274881246e-6, -2.70955155582310383216e-6, 1.01674976247074621591e-6, -2.65510112137850994893e-7, 5.37978681558817966600e-8, -8.96048006028278856337e-9, 1.27127880502132774554e-9},
           {3.55209840666073502384e-6, -2.51395612027182012609e-6, 9.40236870462510305836e-7, -2.44862128628072521929e-7, 4.95029302405946537574e-8, -8.22981719096894418460e-9, 1.16580915279718141461e-9},
           {3.30986517035595408849e-6, -2.33306064427374634611e-6, 8.69667828397247533981e-7, -2.25861117845554677115e-7, 4.55579567593940109535e-8, -7.55973533451915639031e-9, 1.06921057712304884225e-9},
           {3.08503440434918041081e-6, -2.16572439693040201110e-6, 8.04568949586047918232e-7, -2.08372978572607410041e-7, 4.19339492775672808783e-8, -6.94514167259413234978e-9, 9.80728290110084935194e-10},
           {2.87630340608570508437e-6, -2.01089747513650649266e-6, 7.44505087615274416134e-7, -1.92274714446239681926e-7, 3.86043458675706509659e-8, -6.38137651078647350958e-9, 8.99672353533923489512e-10},
           {2.68247023224329640277e-6, -1.86761341913726485936e-6, 6.89076446844880423690e-7, -1.77453501399556808445e-7, 3.55448139871617915325e-8, -5.86417607998350914170e-9, 8.25412060475362935794e-10}}};
  // clang-format on
}
} // namespace tables