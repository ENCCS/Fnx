
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 28.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<28>() {
  // clang-format off
  return {{{1.75438596491228060437e-2, -1.69491525423728812971e-2, 8.19672131147541026264e-3, -2.64550264550264535579e-3, 6.41025641025641025085e-4, -1.24378109452736310614e-4, 2.01288244766505642280e-5},
           {1.59283289839905091434e-2, -1.53866702574973219370e-2, 7.44031789095613797086e-3, -2.40113721724103702793e-3, 5.81760433573415194214e-4, -1.12869097440344184121e-4, 1.82647596139418971978e-5},
           {1.44617210652997329329e-2, -1.39683691102574381732e-2, 6.75378053400879033857e-3, -2.17936336295441188474e-3, 5.27978970706854543356e-4, -1.02425858848147869370e-4, 1.65734446566907695538e-5},
           {1.31302943862357576060e-2, -1.26809322228672877869e-2, 6.13065038954346656908e-3, -1.97809078960698315336e-3, 4.79173457619576890782e-4, -9.29496278447543701311e-5, 1.50388592363592673928e-5},
           {1.19215765797369682016e-2, -1.15122737617099814983e-2, 5.56506619078096526759e-3, -1.79542275825800767483e-3, 4.34883155514981646714e-4, -8.43507975805432536976e-5, 1.36464696387647800086e-5},
           {1.08242471009824467454e-2, -1.04514250433660662448e-2, 5.05170892298224816219e-3, -1.62963814853347727790e-3, 3.94690018042542995272e-4, -7.65480702811136920699e-5, 1.23830907604454677708e-5},
           {9.82803076346153679788e-3, -9.48843118606764422684e-3, 4.58575161831856117217e-3, -1.47917518622750097587e-3, 3.58214732637811294775e-4, -6.94676862566607957600e-5, 1.12367608906554653701e-5},
           {8.92360112373083783077e-3, -8.61425732946301259130e-3, 4.16281380246720945221e-3, -1.34261667971310181061e-3, 3.25113129170922306090e-4, -6.30427244954122415746e-5, 1.01966281266914360489e-5},
           {8.10249280307201100171e-3, -7.82070353617690845749e-3, 3.77892016162997444392e-3, -1.21867662517033707378e-3, 2.95072921801192190883e-4, -5.72124681908242247418e-5, 9.25284734115034860963e-6},
           {7.35702191873895908897e-3, -7.10032757084532503006e-3, 3.43046303868750363658e-3, -1.10618805363669006105e-3, 2.67810753103466577668e-4, -5.19218291704107986627e-5, 8.39648672029607961965e-6},
           {6.68021387412608309841e-3, -6.44637482687220216004e-3, 3.11416840350438230839e-3, -1.00409200467435600311e-3, 2.43069512405503661192e-4, -4.71208257547640825850e-5, 7.61944298393112554664e-6},
           {6.06573782672722994214e-3, -5.85271473880569041703e-3, 2.82706497533093776761e-3, -9.11427522143543164708e-4, 2.20615902882191552026e-4, -4.27641090838609414849e-5, 6.91436447990050510957e-6},
           {5.50784721584663111010e-3, -5.31378307960659549553e-3, 2.56645620512229452950e-3, -8.27322577272068490108e-4, 2.00238234316662904420e-4, -3.88105334090000305444e-5, 6.27458142138783465534e-6},
           {5.00132578926661738178e-3, -4.82452959776330948111e-3, 2.32989485269666880482e-3, -7.50985833011603401595e-4, 1.81744420582908981126e-4, -3.52227662670686526999e-5, 5.69404260321546622047e-6},
           {4.54143862001465774270e-3, -4.38037049972466938086e-3, 2.11515991824089404777e-3, -6.81699171653727276771e-4, 1.64960162849739382833e-4, -3.19669348332947913138e-5, 5.16725799508118794425e-6},
           {4.12388765149634354407e-3, -3.97714532895393317602e-3, 1.92023570997538052356e-3, -6.18810914920368761345e-4, 1.49727301270411854725e-4, -2.90123050928131510776e-5, 4.68924666564259742715e-6},
           {3.74477135201786368035e-3, -3.61107783448839491508e-3, 1.74329285002499398752e-3, -5.61729672312182232510e-4, 1.35902319522780630793e-4, -2.63309907835480363494e-5, 4.25548954213144567371e-6},
           {3.40054809851619973746e-3, -3.27874045961435659630e-3, 1.58267103889889507694e-3, -5.09918759457383421151e-4, 1.23354988016621830048e-4, -2.38976893460674229904e-5, 3.86188655622854660956e-6},
           {3.08800294451519073344e-3, -2.97702211549428748597e-3, 1.43686341563562425434e-3, -4.62891133609245029618e-4, 1.11967132901714976805e-4, -2.16894423728910161811e-5, 3.50471776869495681955e-6},
           {2.80421745926409107449e-3, -2.70309893563636799430e-3, 1.30450236577773137289e-3, -4.20204798344221708024e-4, 1.01631519204833860618e-4, -1.96854182826882765874e-5, 3.18060810313551124058e-6},
           {2.54654235399467314752e-3, -2.45440773527093487882e-3, 1.18434664304656344681e-3, -3.81458633961171637156e-4, 9.22508375073984943429e-5, -1.78667151561021723938e-5, 2.88649535362807598620e-6},
           {2.31257263752765018089e-3, -2.22862192526052538960e-3, 1.07526968302251594092e-3, -3.46288614117662364895e-4, 8.37367845584776455091e-5, -1.62161818615938031426e-5, 2.61960116211386289176e-6},
           {2.10012506731807255256e-3, -2.02362965336280210826e-3, 9.76248998417215854521e-4, -3.14364372900247221378e-4, 7.60092291094662588511e-5, -1.47182557735484035888e-5, 2.37740468970812617050e-6},
           {1.90721768367827122781e-3, -1.83751396670821178121e-3, 8.86356555758786466767e-4, -2.85386089846676154879e-4, 6.89954550655791853334e-5, -1.33588155425722458791e-5, 2.15761873172620599609e-6},
           {1.73205123456062121991e-3, -1.66853480844645230691e-3, 8.04750042596691275015e-4, -2.59081663450829954333e-4, 6.26294747829974219732e-5, -1.21250475209436484514e-5, 1.95816804947178695653e-6},
           {1.57299231610685645577e-3, -1.51511267883841851956e-3, 7.30664942756798093358e-4, -2.35204146414354117430e-4, 5.68514060060595167664e-5, -1.10053245759235388706e-5, 1.77716971292403939801e-6},
           {1.42855807034436587712e-3, -1.37581380678751031589e-3, 6.63407344820124466114e-4, -2.13529418388505435634e-4, 5.16069065426381917835e-5, -9.98909614131694541185e-6, 1.61291526758932725235e-6},
           {1.29740229608595936985e-3, -1.24933669206481342238e-3, 6.02347415932804296224e-4, -1.93854074199149514508e-4, 4.68466613235248236294e-5, -9.06678846442752445580e-6, 1.46385455613364420193e-6},
           {1.17830284240667479412e-3, -1.13449989142188722817e-3, 5.46913479345843291622e-4, -1.75993507588541260632e-4, 4.25259169884724562622e-5, -8.22971410237964765412e-6, 1.32858104114942721986e-6},
           {1.07015016615531343043e-3, -1.03023093352512073832e-3, 4.96586639790945515507e-4, -1.59780172358856074454e-4, 3.86040595922445555648e-5, -7.46998980961831397221e-6, 1.20581848968488670589e-6},
           {9.71936945923731554844e-4, -9.35556258298136282983e-4, 4.50895905977180197488e-4, -1.45062004482002850645e-4, 3.50442314328694423989e-5, -6.78046203807285951382e-6, 1.09440889311155489950e-6},
           {8.82748654847165139907e-4, -8.49592085924302971300e-4, 4.09413764191623140432e-4, -1.31700990263985994507e-4, 3.18129833751946961397e-5, -6.15463934374459914115e-6, 9.93301507649829007514e-7},
           {8.01755003638043232776e-4, -7.71536129531610989814e-4, 3.71752161249913907950e-4, -1.19571867034461992046e-4, 2.88799593792999874917e-5, -5.58663105903884590523e-6, 9.01542911524776069265e-7},
           {7.28202173449184111259e-4, -7.00660073539930198204e-4, 3.37558858910298200361e-4, -1.08560944086273490237e-4, 2.62176102485570531654e-5, -5.07109164963265072969e-6, 8.18267984386903977661e-7},
           {6.61405765597391148355e-4, -6.36302746871363305962e-4, 3.06514125373853741057e-4, -9.85650327275521703253e-5, 2.38009338890238548330e-5, -4.60317022861665632220e-6, 7.42691723397037103885e-7},
           {6.00744401925486009794e-4, -5.77863926776321667513e-4, 2.78327732677466582831e-4, -8.94904753412493114608e-5, 2.16072396230582646848e-5, -4.17846474958624147924e-6, 6.74101818324391872166e-7},
           {5.45653915703484611484e-4, -5.24798714973071563777e-4, 2.52736231674910200203e-4, -8.12522642834845288621e-5, 1.96159343279203785861e-5, -3.79298044474916860351e-6, 6.11851915218133510893e-7},
           {4.95622078525756351412e-4, -4.76612433193076634810e-4, 2.29500478922444069423e-4, -7.37732423017755539231e-5, 1.78083283768683229577e-5, -3.44309211438653130403e-6, 5.55355504753822120532e-7},
           {4.50183813703049597651e-4, -4.32855990119510090994e-4, 2.08403392163522538632e-4, -6.69833769250920959886e-5, 1.61674595478029513480e-5, -3.12550991053404212815e-6, 5.04080377289501609793e-7},
           {4.08916851223852743230e-4, -3.93121676148110502352e-4, 1.89247913265011113559e-4, -6.08191019770727974315e-5, 1.46779332346643802084e-5, -2.83724829088898327560e-6, 4.57543592048269297181e-7},
           {3.71437783511843907201e-4, -3.57039346430119421908e-4, 1.71855159415180898949e-4, -5.52227199982900407741e-5, 1.33257774511431841517e-5, -2.57559784900960332926e-6, 4.15306912726225719712e-7},
           {3.37398484974382034934e-4, -3.24272956314457217429e-4, 1.56062745170228660925e-4, -5.01418599391600076790e-5, 1.20983112563071917725e-5, -2.33809975414430335178e-6, 3.76972666253214996688e-7},
           {3.06482861756647605774e-4, -2.94517416625145569183e-4, 1.41723259547970177564e-4, -4.55289850074339503801e-5, 1.09840253587914032886e-5, -2.12252255876676460279e-6, 3.42179985450908628449e-7},
           {2.78403901219419062409e-4, -2.67495739221623610258e-4, 1.28702883829934385234e-4, -4.13409460281215226864e-5, 9.97247377145840709360e-6, -1.92684115433545884052e-6, 3.10601399976771059325e-7},
           {2.52900993474850367508e-4, -2.42956446022503716724e-4, 1.16880137060186529638e-4, -3.75385761036803100371e-5, 9.05417549300531555368e-6, -1.74921767615516508323e-6, 2.81939743247962611584e-7},
           {2.29737499870557936683e-4, -2.20671217153277295390e-4, 1.06144737433391849390e-4, -3.40863227524351822565e-5, 8.22052528786201128414e-6, -1.58798417668743316337e-6, 2.55925346037756064980e-7},
           {2.08698545631927362279e-4, -2.00432756128942805114e-4, 9.63965688572847941192e-5, -3.09519140571586803172e-5, 7.46371272179528271417e-6, -1.44162690341219012225e-6, 2.32313490157068496915e-7},
           {1.89589015977691572072e-4, -1.82052852024744497286e-4, 8.75447429661756432260e-5, -2.81060556769079166958e-5, 6.77664868872060232935e-6, -1.30877203254283360935e-6, 2.10882098101146513841e-7},
           {1.72231736934351932055e-4, -1.65360620441460743008e-4, 7.95067477617784483827e-5, -2.55221558666134093799e-5, 6.15289873506871486911e-6, -1.18817272368676812868e-6, 1.91429636779742152510e-7},
           {1.56465823808918217969e-4, -1.50200906753468092303e-4, 7.22076748739931915250e-5, -2.31760759133132193254e-5, 5.58662255233012566445e-6, -1.07869737305326973403e-6, 1.73773215479582897372e-7},
           {1.42145181853079404215e-4, -1.36432836654004781794e-4, 6.55795181750401518081e-5, -2.10459036378236928697e-5, 5.07251906671615497720e-6, -9.79318954159769288070e-7, 1.57746860049870452469e-7},
           {1.29137145080101260102e-4, -1.23928500397070957524e-4, 5.95605371525263760629e-5, -1.91117478283099519881e-5, 4.60577660778395479423e-6, -8.89105345283759743576e-7, 1.43199946972464551834e-7},
           {1.17321240491943020855e-4, -1.12571758392304485511e-4, 5.40946790569797689987e-5, -1.73555516697234858020e-5, 4.18202768587616865087e-6, -8.07210552248427699812e-7, 1.29995782494200603627e-7},
           {1.06588066150496582835e-4, -1.02257156949818505190e-4, 4.91310543928802969391e-5, -1.57609234122824820590e-5, 3.79730795177888468564e-6, -7.32866743604425943862e-7, 1.18010313373867379107e-7},
           {9.68382725945582509188e-5, -9.28889440071423356420e-5, 4.46234608244776130180e-5, -1.43129826847775731597e-5, 3.44801895151713403638e-6, -6.65377022958369806734e-7, 1.07130957043802983156e-7},
           {8.79816380731974519288e-5, -8.43801756098340086749e-5, 4.05299510234602842671e-5, -1.29982210060314161182e-5, 3.13089432505982680224e-6, -6.04108870173673363901e-7, 9.72555401177087604594e-8},
           {7.99362289457145069362e-5, -7.66519047698912322358e-5, 3.68124403991356157102e-5, -1.18043751817202580303e-5, 2.84296913023554055947e-6, -5.48488189497394321722e-7, 8.82913352028900571529e-8},
           {7.26276373966524885131e-5, -6.96324450998162301036e-5, 3.34363510270996230076e-5, -1.07203123952466058597e-5, 2.58155200267518620275e-6, -4.97993908407898102031e-7, 8.01541869064589034577e-8},
           {6.59882893388681645349e-5, -6.32567023223842015214e-5, 3.03702884329672167163e-5, -9.73592591158293729184e-6, 2.34419988937687487725e-6, -4.52153076186851362087e-7, 7.27677187699302144420e-8},
           {5.99568160352807912180e-5, -5.74655673934426473350e-5, 2.75857481968107485213e-5, -8.84204041303006899402e-6, 2.12869511778595850185e-6, -4.10536415944712456738e-7, 6.60626136331338873521e-8},
           {5.44774835668005076193e-5, -5.22053655534381657330e-5, 2.50568496244366844237e-5, -8.03032607659588783331e-6, 1.93302458432942613417e-6, -3.72754288116342717904e-7, 5.99759606237296986869e-8},
           {4.94996748156977751302e-5, -4.74273561482752644032e-5, 2.27600939861650070897e-5, -7.29322058505896824332e-6, 1.75536086634725246728e-6, -3.38453027333264039697e-7, 5.44506625994567977577e-8},
           {4.49774191254111147431e-5, -4.30872785365070398722e-5, 2.06741450547648802124e-5, -6.62385833851571397370e-6, 1.59404507951342166209e-6, -3.07311618108327635762e-7, 4.94348984425636104051e-8},
           {4.08689652441219516488e-5, -3.91449398322248583236e-5, 1.87796298838233539615e-5, -6.01600620102554188036e-6, 1.44757131930799256649e-6, -2.79038677970602038774e-7, 4.48816351250796056028e-8},
           {3.71363935645513691588e-5, -3.55638406254283617075e-5, 1.70589579580596809049e-5, -5.46400517850697849522e-6, 1.31457254004457383884e-6, -2.53369719593482989671e-7, 4.07481849346416984108e-8},
           {3.37452640401599582255e-5, -3.23108351778104012125e-5, 1.54961570197396503580e-5, -4.96271747988019124194e-6, 1.19380773851644003222e-6, -2.30064666094912789805e-7, 3.69958036779397625867e-8},
           {3.06642964917149988624e-5, -2.93558229151402928130e-5, 1.40767240320217494549e-5, -4.50747846412563558591e-6, 1.08415032162748500168e-6, -2.08905596080160043211e-7, 3.35893260665597185337e-8},
           {2.78650803211646584505e-5, -2.66714683308130504438e-5, 1.27874898822567063588e-5, -4.09405302191328029693e-6, 9.84577548537716147419e-7, -1.89694697167504356885e-7, 3.04968348417541966403e-8},
           {2.53218109247729868008e-5, -2.42329466814153450754e-5, 1.16164965573049062161e-5, -3.71859598218611250986e-6, 8.94160947982655364636e-7, -1.72252408705962280549e-7, 2.76893605137995015385e-8},
           {2.30110503471049746883e-5, -2.20177130968452611486e-5, 1.05528856400489582995e-5, -3.37761617194992369979e-6, 8.12057620617609761568e-7, -1.56415736180526607779e-7, 2.51406088811307257818e-8},
           {2.09115099440516597894e-5, -2.00052929468871858599e-5, 9.58679708256500195159e-6, -3.06794379188578938535e-6, 7.37502344578287457858e-7, -1.42036721421193098975e-7, 2.28267137571298208515e-8},
           {1.90038530287795952918e-5, -1.81770915052482628081e-5, 8.70927730787802984293e-6, -2.78670080158694659012e-6, 6.69800410017471358822e-7, -1.28981054202666574948e-7, 2.07260125707675732904e-8},
           {1.72705156612060255423e-5, -1.65162211327817558704e-5, 7.91219577977212587083e-6, -2.53127403652214166499e-6, 6.08321115245032660669e-7, -1.17126812155998064682e-7, 1.88188427235279770528e-8},
           {1.56955439110949028969e-5, -1.50073443656547109132e-5, 7.18816925958141319202e-6, -2.29929080451006444293e-6, 5.52491863330347429704e-7, -1.06363317124138828717e-7, 1.70873567812238941053e-8},
           {1.42644460787284794941e-5, -1.36365314431043684718e-5, 6.53049304099929785666e-6, -2.08859673279657456454e-6, 5.01792803681099244684e-7, -9.65900971919686498797e-8, 1.55153547573056823847e-8},
           {1.29640584967786522965e-5, -1.23911309445695935044e-5, 5.93307851939222930118e-6, -1.89723565797791931956e-6, 4.55751968243928581268e-7, -8.77159446181607784413e-8, 1.40881319057567974017e-8},
           {1.17824236637912727873e-5, -1.12596523286504304908e-5, 5.39039651150524650743e-6, -1.72343137020859770658e-6, 4.13940856628931063398e-7, -7.96580608007217023722e-8, 1.27923405881932200355e-8},
           {1.07086795747942647842e-5, -1.02316592776929197426e-5, 4.89742579535975308441e-6, -1.56557104055289892638e-6, 3.75970428685589488351e-7, -7.23412802287433341978e-8, 1.16158649127249655797e-8},
           {9.73295921902577882139e-6, -9.29767285286398390649e-6, 4.44960638907640398183e-6, -1.42219017614882502047e-6, 3.41487466892266507257e-7, -6.56973661175985208095e-8, 1.05477069627582580188e-8},
           {8.84629930963112619908e-6, -8.44908355632162114883e-6, 4.04279713176844558681e-6, -1.29195896220103043503e-6, 3.10171274401099422294e-7, -5.96643711005392174779e-8, 9.57788354335817964883e-9},
           {8.04055739628567686943e-6, -7.67807148036047954626e-6, 3.67323716996101593040e-6, -1.17366986284091803388e-6, 2.81730677737893853397e-7, -5.41860569628117674674e-8, 8.69733247209121250518e-9},
           {7.30833658987254857967e-6, -6.97753379900400731505e-6, 3.33751098957920046118e-6, -1.06622636470979580047e-6, 2.55901306022202726628e-7, -4.92113679607848705596e-8, 7.89782753136488251512e-9},
           {6.64291719931049155974e-6, -6.34101892613123524218e-6, 3.03251666675600896222e-6, -9.68632757846415520597e-7, 2.32443121173270675483e-7, -4.46939527734534857283e-8, 7.17190128103151566040e-9},
           {6.03819464505397548846e-6, -5.76266672651333553641e-6, 2.75543704085336157224e-6, -8.79984858194325520360e-7, 2.11138175927459460754e-7, -4.05917305918080074742e-8, 6.51277500419855742540e-9},
           {5.48862307227742542143e-6, -5.23715422267631152835e-6, 2.50371354044794939807e-6, -7.99461584878954881413e-7, 1.91788578634408939028e-7, -3.68664972672751488405e-8, 5.91429512649147719744e-9},
           {4.98916413985611743664e-6, -4.75964629183245595961e-6, 2.27502241786670542510e-6, -7.26317313422461443084e-7, 1.74214645742753647042e-7, -3.34835678176709619484e-8, 5.37087551008395430571e-9},
           {4.53524050946482594444e-6, -4.32575089371589594466e-6, 2.06725317039698131054e-6, -6.59874933341570317071e-7, 1.58253224650028832860e-7, -3.04114519314259847053e-8, 4.87744507922183847104e-9},
           {4.12269360288291391458e-6, -3.93147841245346798899e-6, 1.87848894675628757744e-6, -5.99519545178460314385e-7, 1.43756171192103014504e-7, -2.76215594214774394927e-8, 4.42940028424671221192e-9},
           {3.74774523533063762203e-6, -3.57320473399815639415e-6, 1.70698875597762541432e-6, -5.44692738009389222887e-7, 1.30588967500166488445e-7, -2.50879328621121860000e-8, 4.02256195674740574328e-9},
           {3.40696276873787262641e-6, -3.24763771550815979320e-6, 1.55117131272381906853e-6, -4.94887393916595765505e-7, 1.18629467271675385101e-7, -2.27870048978464922550e-8, 3.65313614986518948945e-9},
           {3.09722746160052238027e-6, -2.95178673469713035167e-6, 1.40960036834581272264e-6, -4.49642970847293325874e-7, 1.07766756698137607788e-7, -2.06973779455616868372e-8, 3.31767859534216957857e-9},
           {2.81570572181788643227e-6, -2.68293503590675925591e-6, 1.28097139088962438579e-6, -4.08541219765729595409e-7, 9.79001203785011541789e-8, -1.87996242217698375419e-8, 3.01306244298786741135e-9},
           {2.55982299590424167840e-6, -2.43861461573080521271e-6, 1.16409946986474343432e-6, -3.71202296072497449999e-7, 8.89381025324027821434e-8, -1.70761042180495345656e-8, 2.73644897916842499193e-9},
           {2.32724005248220394836e-6, -2.21658341469412937500e-6, 1.05790833303168889501e-6, -3.37281228957806454626e-7, 8.07976547219444406291e-8, -1.55108019211731539801e-8, 2.48526104898875110594e-9},
           {2.11583144022309052867e-6, -2.01480460298311316459e-6, 9.61420372855586089262e-7, -3.06464715706984688618e-7, 7.34033621024081777265e-8, -1.40891752318808139004e-8, 2.25715893230556213992e-9},
           {1.92366592060857532137e-6, -1.83142776773615377519e-6, 8.73747589703452856803e-7, -2.78468211018591208763e-7, 6.66867409590473933293e-8, -1.27980201791281036570e-8, 2.05001844681930509245e-9},
           {1.74898869423703642009e-6, -1.66477182711750200599e-6, 7.94083367423895268161e-7, -2.53033284156772442450e-7, 6.05856009557398741316e-8, -1.16253476562930402302e-8, 1.86191107246390349792e-9},
           {1.59020525605860604409e-6, -1.51330951248027632973e-6, 7.21695004719410591776e-7, -2.29925219265849723935e-7, 5.50434661281529829257e-8, -1.05602715234946165285e-8, 1.69108591034318025643e-9},
           {1.44586673005052086903e-6, -1.37565327452559742145e-6, 6.55916932776333702351e-7, -2.08930836450125240002e-7, 5.00090492048668433306e-8, -9.59290702696185817087e-9, 1.53595330673152972564e-9},
           {1.31465654758021853708e-6, -1.25054248262102219356e-6, 5.96144556021820362434e-7, -1.89856513286918048630e-7, 4.54357743398123185550e-8, -8.71427858330429134973e-9, 1.39506998832703959681e-9},
           {1.19537834617582226493e-6, -1.13683179847680882885e-6, 5.41828658691150540045e-7, -1.72526388315288847623e-7, 4.12813437931114628082e-8, -7.91623606448674280560e-9, 1.26712556916581323107e-9},
           {1.08694497674867803778e-6, -1.03348061630560220645e-6, 4.92470325166560535238e-7, -1.56780729744380285642e-7, 3.75073445092290909198e-8, -7.19137879913197369117e-9, 1.15093030251097206323e-9},
           {9.88368517596008350058e-7, -9.39543471512012039759e-7, 4.47616326840227878737e-7, -1.42474454169774348923e-7, 3.40788909151292560838e-8, -6.53298657821659514997e-9, 1.04540396274060383447e-9},
           {8.98751202849479592367e-7, -8.54161328966052742821e-7, 4.06854932603821641556e-7, -1.29475781488241027698e-7, 3.09643006003953245676e-8, -5.93495701897129824267e-9, 9.49565752886298629854e-10},
           {8.17277181514592858918e-7, -7.76553670092670778368e-7, 3.69812104015945616687e-7, -1.17665013473887136723e-7, 2.81347998492089208893e-8, -5.39174870046541536062e-9, 8.62525143118168657561e-10},
           {7.43205030945330452234e-7, -7.06011305435053197426e-7, 3.36148039783819390599e-7, -1.06933424633954356358e-7, 2.55642562735853772551e-8, -4.89832953851010668034e-9, 7.83473554224440731349e-10},
           {6.75860955590204816901e-7, -6.41889846091413658231e-7, 3.05554037450228623278e-7, -9.71822550111964138689e-8, 2.32289360509601641701e-8, -4.45012991666436675052e-9, 7.11676808076374966390e-10},
           {6.14632608194882828686e-7, -5.83603773546526131650e-7, 2.77749643131597458311e-7, -8.83217955517307250855e-8, 2.11072834994967873727e-8, -4.04300013473610341004e-9, 6.46468274277362516242e-10},
           {5.58963476412042704336e-7, -5.30621052977503100318e-7, 2.52480062835655450047e-7, -8.02705575214320519673e-8, 1.91797209335049067651e-8, -3.67317177665713123657e-9, 5.87242648736559005077e-10},
           {5.08347783004781580952e-7, -4.82458240160164786769e-7, 2.29513811322677838815e-7, -7.29545182384230513850e-8, 1.74284669310836215615e-8, -3.33722263635683804120e-9, 5.33450305844037278992e-10},
           {4.62325852584436983375e-7, -4.38676036684858300316e-7, 2.08640576685468525461e-7, -6.63064361013722198461e-8, 1.58373713183194555770e-8, -3.03204487361072835327e-9, 4.84592171312135954702e-10},
           {4.20479902141409641584e-7, -3.98875252351575812309e-7, 1.89669280830802008420e-7, -6.02652285398084035122e-8, 1.43917653306910778719e-8, -2.75481610211062929800e-9, 4.40215067637267939585e-10},
           {3.82430216548639763661e-7, -3.62693137392464376090e-7, 1.72426317867726303024e-7, -5.47754070995635942657e-8, 1.30783255542294936775e-8, -2.50297313947795682323e-9, 3.99907488574002045810e-10},
           {3.47831673778282134124e-7, -3.29800050600600276435e-7, 1.56753954062984569761e-7, -4.97865644092596197631e-8, 1.18849503777869093206e-8, -2.27418817387871058411e-9, 3.63295763040580025438e-10},
           {3.16370587805970992101e-7, -2.99896432559172988561e-7, 1.42508874526315901325e-7, -4.52529082574512823311e-8, 1.08006478046881938200e-8, -2.06634712453303412506e-9, 3.30040572530116298051e-10},
           {2.87761840113937136203e-7, -2.72710055994063784116e-7, 1.29560863152582910967e-7, -4.11328384491606307985e-8, 9.81543357817349102415e-9, -1.87752999395641064502e-9, 2.99833789418997039768e-10},
           {2.61746273371436921900e-7, -2.47993527841554730374e-7, 1.17791603586290877208e-7, -3.73885625091928942263e-8, 8.92023867138484290013e-9, -1.70599302841685455217e-9, 2.72395606574693211708e-10},
           {2.38088323293277708007e-7, -2.25522019955524118884e-7, 1.07093590098682780388e-7, -3.39857466615507998987e-8, 8.10682528010797051941e-9, -1.55015252001811414365e-9, 2.47471931397677454221e-10},
           {2.16573866877173537261e-7, -2.05091207496688344280e-7, 9.73691382887195454064e-8, -3.08931988428441850419e-8, 7.36771053587227270052e-9, -1.40857009918209607071e-9, 2.24832019912135289092e-10},
           {1.97008267218688980047e-7, -1.86515395969984494231e-7, 8.85294864464168705196e-8, -2.80825808059048679608e-8, 6.69609722908332995603e-9, -1.27993938024872261831e-9, 2.04266328771013351918e-10},
           {1.79214596917178522268e-7, -1.69625819622950399140e-7, 8.04939792588689215176e-8, -2.55281466406503013883e-8, 6.08581089728723551299e-9, -1.16307383556934802161e-9, 1.85584565083865243492e-10}}};
  // clang-format on
}
} // namespace tables
