
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 15.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<15>() {
  // clang-format off
  return {{{3.22580645161290313627e-2, -3.03030303030303038714e-2, 1.42857142857142852682e-2, -4.50450450450450446543e-3, 1.06837606837606826672e-3, -2.03252032520325203076e-4, 3.22997416020671875318e-5},
           {2.93662189611291965519e-2, -2.75768487952278984476e-2, 1.29964805164021306172e-2, -4.09684842682460272772e-3, 9.71444316479611958207e-4, -1.84769257873218322417e-4, 2.93564631963517896852e-5},
           {2.67344973640432186091e-2, -2.50966630183948394284e-2, 1.18239081613097981455e-2, -3.72617425570992985909e-3, 8.83326217669022921604e-4, -1.67970555421323143814e-4, 2.66818735935001523113e-5},
           {2.43394306487994295518e-2, -2.28402157184407518520e-2, 1.07574150223557710865e-2, -3.38911968977393925420e-3, 8.03218781117831298264e-4, -1.52702200619059019933e-4, 2.42514036204923230937e-5},
           {2.21596729262697016150e-2, -2.07872683484018432043e-2, 9.78738091351343854341e-3, -3.08262873131278421907e-3, 7.30392308114523433789e-4, -1.38824524578693944037e-4, 2.20427341866927069465e-5},
           {2.01758089445645272253e-2, -1.89194175688669370683e-2, 8.90506002998778245505e-3, -2.80392373108524252390e-3, 6.64183691178768455428e-4, -1.26210626922450015047e-4, 2.00355899247511017546e-5},
           {1.83701790402750579634e-2, -1.72199284620836827464e-2, 8.10250131447294227871e-3, -2.55047998876103618193e-3, 6.03990326768176748889e-4, -1.14745206673521206019e-4, 1.82115517820576999341e-5},
           {1.67267199967694457641e-2, -1.56735829346023557151e-2, 7.37247608945292790678e-3, -2.32000267503517081796e-3, 5.49264585309480182426e-4, -1.04323500346809107148e-4, 1.65538868203286098876e-5},
           {1.52308203610831225522e-2, -1.42665419227219741199e-2, 6.70841229143859327927e-3, -2.11040586286249508968e-3, 4.99508787454483742414e-4, -9.48503173967457554596e-5, 1.50473936412911940834e-5},
           {1.38691889030827485152e-2, -1.29862201416478355298e-2, 6.10433470382761023121e-3, -1.91979347475311414202e-3, 4.54270640152595970435e-4, -8.62391640844016094981e-5, 1.36782620020500299913e-5},
           {1.26297350206479395279e-2, -1.18211722343218809256e-2, 5.55481064029493456363e-3, -1.74644197076692067779e-3, 4.13139090391959626705e-4, -7.84114476476326582258e-5, 1.24339453159099664660e-5},
           {1.15014600037090432977e-2, -1.07609892804094494506e-2, 5.05490058078004404069e-3, -1.58878461791844578094e-3, 3.75740558329836903551e-4, -7.12957534039686887002e-5, 1.13030448544484856316e-5},
           {1.04743581691071827033e-2, -9.79620472088357265028e-3, 4.60011330769912081540e-3, -1.44539719630113481022e-3, 3.41735515046004130306e-4, -6.48271880932562832292e-5, 1.02752045755895981139e-5},
           {9.53932696831606349863e-3, -8.91820883991747623276e-3, 4.18636513139694806107e-3, -1.31498501049831973027e-3, 3.10815373343179652491e-4, -5.89467833820627519796e-5, 9.34101560135477145105e-6},
           {8.68808525191262261134e-3, -8.11917102417317876339e-3, 3.80994283144793326190e-3, -1.19637108688981359632e-3, 2.82699662915657560190e-4, -5.36009540102651768092e-5, 8.49192945877887378058e-6},
           {7.91309894905734348414e-3, -7.39196909078262270887e-3, 3.46746997456612564975e-3, -1.08848544839994622671e-3, 2.57133463838309333886e-4, -4.87410055672994965573e-5, 7.72017927902024759482e-6},
           {7.20751348782902069579e-3, -6.73012504001383685820e-3, 3.15587630090644749581e-3, -9.90355368166455276441e-4, 2.33885074717418641084e-4, -4.43226873459596969695e-5, 7.01870822372670524704e-6},
           {6.56509234367346448946e-3, -6.12774664739495524002e-3, 2.87236989872042798935e-3, -9.01096512632126628480e-4, 2.12743894014675839982e-4, -4.03057861397107845217e-5, 6.38110447493565092504e-6},
           {5.98016115903540236565e-3, -5.57947436347528292339e-3, 2.61441191293025967934e-3, -8.19904892756097660768e-4, 1.93518495026241080931e-4, -3.66537572291092666327e-5, 5.80154218581449024567e-6},
           {5.44755692795991734029e-3, -5.08043303792696417098e-3, 2.37969355644142982475e-3, -7.46049549485311349478e-4, 1.76034876788422561898e-4, -3.33333891476503635051e-5, 5.27472784495788613301e-6},
           {4.96258178553978662739e-3, -4.62618802878018292590e-3, 2.16611521414167762165e-3, -6.78865906387699554608e-4, 1.60134874806840230444e-4, -3.03144991303955009152e-5, 4.79585155726849042285e-6},
           {4.52096098397070707969e-3, -4.21270529764525281102e-3, 1.97176744872755915425e-3, -6.17749728489971916025e-4, 1.45674716982062575892e-4, -2.75696564329934891825e-5, 4.36054279012768387539e-6},
           {4.11880467504207453677e-3, -3.83631512817510797811e-3, 1.79491373493690232858e-3, -5.62151631941262656944e-4, 1.32523711445326809483e-4, -2.50739309668410813412e-5, 3.96483017503923923860e-6},
           {3.75257315348541268044e-3, -3.49367913809655152371e-3, 1.63397476460679807499e-3, -5.11572094191021912481e-4, 1.20563054235536083270e-4, -2.28046649305400860020e-5, 3.60510499258864079375e-6},
           {3.41904524704311242600e-3, -3.18176028519251202428e-3, 1.48751417936879791991e-3, -4.65556918972340389763e-4, 1.09684745854575992595e-4, -2.07412653306782931463e-5, 3.27808800275601152683e-6},
           {3.11528956769459601170e-3, -2.89779559492675097693e-3, 1.35422560086840616279e-3, -4.23693114562990005324e-4, 9.97906067423754632000e-5, -1.88650154782745049949e-5, 2.98079931366995970981e-6},
           {2.83863836444735954251e-3, -2.63927136221813992203e-3, 1.23292084027546312158e-3, -3.85605147594506297154e-4, 9.07913826253733529390e-5, -1.71589037227814885853e-5, 2.71053101008309496139e-6},
           {2.58666374170409560720e-3, -2.40390060242171542393e-3, 1.12251917964508482299e-3, -3.50951538129822178131e-4, 8.26059315206081803268e-5, -1.56074678449684524698e-5, 2.46482228845038314717e-6},
           {2.35715602867047875971e-3, -2.18960254706552582063e-3, 1.02203762749504111634e-3, -3.19421764864135911220e-4, 7.51604849302104130980e-5, -1.41966536747902752206e-5, 2.24143686873766294771e-6},
           {2.14810410476734721386e-3, -1.99448399851389485127e-3, 9.30582059875118862424e-4, -2.90733452150895225856e-4, 6.83879764446234479289e-5, -1.29136866318396527679e-5, 2.03834247419634282070e-6},
           {1.95767750373434992056e-3, -1.81682237465015990890e-3, 8.47339166299283601778e-4, -2.64629813141277134281e-4, 6.22274315937475019445e-5, -1.17469550053941461132e-5, 1.85369218950817516406e-6},
           {1.78421013522163949064e-3, -1.65505029005049699928e-3, 7.71569127266827879674e-4, -2.40877325675274337304e-4, 5.66234133491475631725e-5, -1.06859038995220106299e-5, 1.68580752510988759694e-6},
           {1.62618547730909506974e-3, -1.50774153409621684829e-3, 7.02598956781952735384e-4, -2.19263619697149312986e-4, 5.15255181927147906011e-5, -9.72093886720688105238e-6, 1.53316303131330036998e-6},
           {1.48222310670264884741e-3, -1.37359831917305340136e-3, 6.39816449353849134654e-4, -1.99595556907310363055e-4, 4.68879181324681785711e-5, -8.84333834690689834807e-6, 1.39437232018981321104e-6},
           {1.35106644545609946677e-3, -1.25143968364897924771e-3, 5.82664676477227089745e-4, -1.81697485124506679429e-4, 4.26689444688386056246e-5, -8.04517409620943876034e-6, 1.26817536622230569242e-6},
           {1.23157161406474836667e-3, -1.14019094481267809112e-3, 5.30636982607137603317e-4, -1.65409651432885324365e-4, 3.88307094987029724010e-5, -7.31923889103277328626e-6, 1.15342696856404690140e-6},
           {1.12269729077466495423e-3, -1.03887410648918071532e-3, 4.83272435197947913908e-4, -1.50586759642681411279e-4, 3.53387626931872921433e-5, -6.65898082584582371189e-6, 1.04908626849323723195e-6},
           {1.02349548603958935208e-3, -9.46599134714584873086e-4, 4.40151687516348222220e-4, -1.37096658914527666420e-4, 3.21617782020597103507e-5, -6.05844361124836213231e-6, 9.54207225413399258822e-7},
           {9.33103149319202849685e-4, -8.62556022727596605724e-4, 4.00893216700338051589e-4, -1.24819151597765562456e-4, 2.92712708253201758660e-5, -5.51221232054181663120e-6, 8.67929963614799742118e-7},
           {8.50734532923126977530e-4, -7.86007573693921820362e-4, 3.65149902954812588095e-4, -1.13644909423772031689e-4, 2.66413378540226662673e-5, -5.01536408713767518789e-6, 7.89472910062858853406e-7},
           {7.75674244432918310287e-4, -7.16282836085789628884e-4, 3.32605918881056616520e-4, -1.03474488186246140354e-4, 2.42484244198567276218e-5, -4.56342330026223508353e-6, 7.18125650790980153530e-7},
           {7.07270925441696334847e-4, -6.52771132552605842618e-4, 3.02973900760656385950e-4, -9.42174319407463364395e-5, 2.20711102087625050711e-5, -4.15232088784602084471e-6, 6.53242440115378859444e-7},
           {6.44931499994424181979e-4, -5.94916628493983548794e-4, 2.75992376179985947782e-4, -8.57914585738358246875e-5, 2.00899155898505119586e-5, -3.77835731311745144794e-6, 5.94236302920001591558e-7},
           {5.88115941242532973450e-4, -5.42213391432278999336e-4, 2.51423424713039932610e-4, -7.81217193355013544021e-5, 1.82871253889553252452e-5, -3.43816894560199803497e-6, 5.40573675736580664272e-7},
           {5.36332509491301077757e-4, -4.94200896722942514643e-4, 2.29050550499356017804e-4, -7.11401256039106814639e-5, 1.66466286979154099097e-5, -3.12869749827688261055e-6, 4.91769537319101058203e-7},
           {4.89133419059492396096e-4, -4.50459939177995469673e-4, 2.08676747479530182161e-4, -6.47847367652742186627e-5, 1.51537732576322604894e-5, -2.84716225083471295398e-6, 4.47382983929703833887e-7},
           {4.46110895226835312607e-4, -4.10608913847642384518e-4, 1.90122739801011473746e-4, -5.89992036492250016217e-5, 1.37952330864780997263e-5, -2.59103480462854957720e-6, 4.07013208656231820845e-7},
           {4.06893586050972476051e-4, -3.74300432540885369675e-4, 1.73225381497520960952e-4, -5.37322624668553784481e-5, 1.25588881469240681930e-5, -2.35801613814282458556e-6, 3.70295847808344290697e-7},
           {3.71143297023399576159e-4, -3.41218245698473947834e-4, 1.57836200991125176138e-4, -4.89372746590056585366e-5, 1.14337149534688376428e-5, -2.14601575297464845760e-6, 3.36899660823963359748e-7},
           {3.38552019432547036427e-4, -3.11074441988225204505e-4, 1.43820077279953122910e-4, -4.45718084808225834957e-5, 1.04096871250776579215e-5, -1.95313271951389296659e-6, 3.06523513192177276229e-7},
           {3.08839225937863567396e-4, -2.83606900498829144538e-4, 1.31054035868794204476e-4, -4.05972585288352528230e-5, 9.47768497631645366727e-6, -1.77763844895560272850e-6, 2.78893634691123065078e-7},
           {2.81749409255427590675e-4, -2.58576972686530169501e-4, 1.19426153585286623916e-4, -3.69784997623270325151e-5, 8.62941332402349708312e-6, -1.61796103412609896860e-6, 2.53761127775702531722e-7},
           {2.57049842034965487711e-4, -2.35767373300302434313e-4, 1.08834562411018996326e-4, -3.36835728847843660560e-5, 7.85732676146371508772e-6, -1.47267101600100373141e-6, 2.30899703253759653510e-7},
           {2.34528537989949154366e-4, -2.14980261394169335594e-4, 9.91865433536489888439e-5, -3.06833982365597405118e-5, 7.15456172014949974905e-6, -1.34046844587240783993e-6, 2.10103622481920419561e-7},
           {2.13992396144624136972e-4, -1.96035494247283917325e-4, 9.03977022012818578513e-5, -2.79515156092137082543e-5, 6.51487470151528286194e-6, -1.22017112500433930135e-6, 1.91185827213048754321e-7},
           {1.95265511700697596631e-4, -1.78769038568867780908e-4, 8.23912197412980380588e-5, -2.54638476276785124760e-5, 5.93258611697177781183e-6, -1.11070391441023078501e-6, 1.73976239953820047596e-7},
           {1.78187638516828393206e-4, -1.63031524780244275585e-4, 7.50971696993355734666e-5, -2.31984845605735986453e-5, 5.40252922605801696792e-6, -1.01108901719297593379e-6, 1.58320219259238249669e-7},
           {1.62612789549481940839e-4, -1.48686931452864389046e-4, 6.84518982663701529940e-5, -2.11354886136640962818e-5, 4.92000370892596436211e-6, -9.20437144797819239333e-7, 1.44077155815543868889e-7},
           {1.48407962836404847548e-4, -1.35611388151096767286e-4, 6.23974596383778474986e-5, -1.92567159383709993799e-5, 4.48073345166140275852e-6, -8.37939486623020194495e-7, 1.31119196457068025026e-7},
           {1.35451981725065743935e-4, -1.23692085992259002622e-4, 5.68811024989900827146e-5, -1.75456547480356339966e-5, 4.08082816135426892977e-6, -7.62860409787580648831e-7, 1.19330084438149163794e-7},
           {1.23634439068036827095e-4, -1.12826286203564245996e-4, 5.18548028354687205971e-5, -1.59872780807838920573e-5, 3.71674846273490628440e-6, -6.94530822537153967208e-7, 1.08604105349123470379e-7},
           {1.12854736034652525082e-4, -1.02920417835115923398e-4, 4.72748388964348977915e-5, -1.45679098806643340263e-5, 3.38527415991006699886e-6, -6.32342140840169800231e-7, 9.88451290354987148448e-8},
           {1.03021207031750563826e-4, -9.38892565877840281924e-5, 4.31014044798841967324e-5, -1.32751031894643525572e-5, 3.08347537555557984712e-6, -5.75740803242121767654e-7, 8.99657387606959134965e-8},
           {9.40503229934814438153e-5, -8.56551774419846818041e-5, 3.92982570855784408854e-5, -1.20975293513435608664e-5, 2.80868630611558567239e-6, -5.24223284057718591547e-7, 8.18864396533352665340e-8},
           {8.58659659979839340327e-5, -7.81474744346529230036e-5, 3.58323977800625628732e-5, -1.10248772321671133451e-5, 2.55848135536182999170e-6, -4.77331559534328067405e-7, 7.45349392073512988874e-8},
           {7.83987688034522598813e-5, -7.13017415330337078544e-5, 3.26737799081742262140e-5, -1.00477615460847894996e-5, 2.33065343029884913527e-6, -4.34648985757782265213e-7, 6.78454932639643826381e-8},
           {7.15855134734826319305e-5, -6.50593091007620096932e-5, 2.97950440445925565831e-5, -9.15763946431283489512e-6, 2.12319420306043674896e-6, -3.95796550831228651765e-7, 6.17583115048129019805e-8},
           {6.53685837867815994684e-5, -5.93667309490104327268e-5, 2.71712768150691963106e-5, -8.34673475598698738805e-6, 1.93427616030976648695e-6, -3.60429467273912698187e-7, 5.62190170309038423800e-8},
           {5.96954666040698658314e-5, -5.41753174177466437699e-5, 2.47797914316480761827e-5, -7.60796877905090856211e-6, 1.76223627789365875300e-6, -3.28234073690963817671e-7, 5.11781550975010988407e-8},
           {5.45182977996191408805e-5, -4.94407103434547058282e-5, 2.25999279813582110718e-5, -6.93489770104536486646e-6, 1.60556117325951840651e-6, -2.98925017585984665898e-7, 4.65907465252139311902e-8},
           {4.97934487602264574968e-5, -4.51224961437497677883e-5, 2.06128716853292359105e-5, -6.32165538593479849516e-6, 1.46287360155655195381e-6, -2.72242693751433985893e-7, 4.24158817165209783861e-8},
           {4.54811498141058167350e-5, -4.11838535895330697979e-5, 1.88014875066436574754e-5, -5.76290143426226112849e-6, 1.33292017353377643909e-6, -2.47950915000999688092e-7, 3.86163515785413990725e-8},
           {4.15451472793976648245e-5, -3.75912331447667843283e-5, 1.71501696319659074409e-5, -5.25377391042740182335e-6, 1.21456018442765462371e-6, -2.25834794124767851341e-7, 3.51583119904679641202e-8},
           {3.79523911196934140688e-5, -3.43140650353866800081e-5, 1.56447044854078840263e-5, -4.78984633315869216396e-6, 1.10675545310325142560e-6, -2.05698817871457267084e-7, 3.20109787608180304260e-8},
           {3.46727504648199899096e-5, -3.13244934648541502559e-5, 1.42721460544124589809e-5, -4.36708854368574148926e-6, 1.00856107986671219224e-6, -1.87365095509946164842e-7, 2.91463502983630518114e-8},
           {3.16787545015526702131e-5, -2.85971346266862578385e-5, 1.30207024177602471098e-5, -3.98183110105975964811e-6, 9.19117039687298937933e-7, -1.70671766110818252985e-7, 2.65389554738321125223e-8},
           {2.89453564631347477223e-5, -2.61088563760895806768e-5, 1.18796324661296184605e-5, -3.63073288583835084988e-6, 8.37640535130203056067e-7, -1.55471550132266669252e-7, 2.41656243795811546244e-8},
           {2.64497186504852989451e-5, -2.38385776154703003576e-5, 1.08391518968739672315e-5, -3.31075162223350515005e-6, 7.63419040175964319761e-7, -1.41630432206656302987e-7, 2.20052799034945095947e-8},
           {2.41710166035988392611e-5, -2.17670856238316029474e-5, 9.89034764764909715587e-6, -3.01911705508168548437e-6, 6.95803972351343951830e-7, -1.29026463216381811263e-7, 2.00387482233624797100e-8},
           {2.20902607105436249587e-5, -1.98768697194784772287e-5, 9.02510000897776086114e-6, -2.75330654187078827908e-6, 6.34204936276958504947e-7, -1.17548670831297851088e-7, 1.82485865006059088391e-8},
           {2.01901336951581122264e-5, -1.81519697904616260896e-5, 8.23601172445993822465e-6, -2.51102284176750028952e-6, 5.78084486900701450654e-7, -1.07096068664865068700e-7, 1.66189262090816401859e-8},
           {1.84548425644022539660e-5, -1.65778383591110898914e-5, 7.51634344974678564018e-6, -2.29017390332720924696e-6, 5.26953365380067515894e-7, -9.75767551012721050518e-8, 1.51353306772452381522e-8},
           {1.68699837235898006697e-5, -1.51412149670206326173e-5, 6.85995499815656386189e-6, -2.08885447051640150694e-6, 4.80366164843738585540e-7, -8.89070936593464039489e-8, 1.37846655514768473883e-8},
           {1.54224200835471062431e-5, -1.38300117760244132729e-5, 6.26125185243525881327e-6, -1.90532934299711905679e-6, 4.37917387142081562038e-7, -8.10109674985106757028e-8, 1.25549810060841279673e-8},
           {1.41001690891444319377e-5, -1.26332093800372806240e-5, 5.71513646911842767141e-6, -1.73801814146268727518e-6, 3.99237855222880594738e-7, -7.38191013441295446957e-8, 1.14354046324624808831e-8},
           {1.28923006945695546734e-5, -1.15407619130005589515e-5, 5.21696394465798859096e-6, -1.58548144230796436783e-6, 3.63991448974807156564e-7, -6.72684447204768015114e-8, 1.04160440370995943216e-8},
           {1.17888443980129774041e-5, -1.05435106203965553331e-5, 4.76250165132281515158e-6, -1.44640815818813510463e-6, 3.31872135295989292934e-7, -6.13016109348180158794e-8, 9.48789826645049998622e-9},
           {1.07807045278886739115e-5, -9.63310513660420991971e-6, 4.34789248621561263015e-6, -1.31960405217870861808e-6, 3.02601265795109198292e-7, -5.58663667608173178606e-8, 8.64277725699118263878e-9},
           {9.85958304503009235018e-6, -8.80193177843489914843e-6, 3.96962140888843741831e-6, -1.20398128339689317647e-6, 2.75925117941836188444e-7, -5.09151682282575554554e-8, 7.87322858171941484074e-9},
           {9.01790919112178012329e-6, -8.04304822712144974219e-6, 3.62448497227512847482e-6, -1.09854889117271144793e-6, 2.51612657673990115905e-7, -4.64047383430905035288e-8, 7.17247083067976247163e-9},
           {8.24877537353768046195e-6, -7.35012402738815725389e-6, 3.30956357825355196030e-6, -1.00240413325062305982e-6, 2.29453503460548576914e-7, -4.22956829409222827595e-8, 6.53433302335310557761e-9},
           {7.54587873129004532821e-6, -6.71738638350961959141e-6, 3.02219621334343646737e-6, -9.14724601134836516649e-7, 2.09256073630534162793e-7, -3.85521412216408236524e-8, 5.95319950552170472013e-9},
           {6.90346787643225615359e-6, -6.13957077892962388216e-6, 2.75995744205387959140e-6, -8.34761042632941094701e-7, 1.90845900424406753220e-7, -3.51414678261548127562e-8, 5.42395983300020995267e-9},
           {6.31629435044523358317e-6, -5.61187598847459948297e-6, 2.52063645541631823125e-6, -7.61830827965659033494e-7, 1.74064095721777675509e-7, -3.20339436009897607141e-8, 4.94196318986669871362e-9},
           {5.77956837627114388458e-6, -5.12992309083893225410e-6, 2.30221799045348999742e-6, -6.95312001552400321696e-7, 1.58765954760636750247e-7, -2.92025124553734159848e-8, 4.50297692995003029696e-9},
           {5.28891852410442661614e-6, -4.68971812418607732269e-6, 2.10286495290628431973e-6, -6.34637866804720116320e-7, 1.44819685401197490911e-7, -2.66225419507978338679e-8, 4.10314886770639894634e-9},
           {4.84035494314048548914e-6, -4.28761805971354712750e-6, 1.92090259061698216079e-6, -5.79292056009841558112e-7, 1.32105251613128995656e-7, -2.42716054770111838904e-8, 3.73897297859085771078e-9},
           {4.43023584251831105640e-6, -3.92029979715693527683e-6, 1.75480407868442770131e-6, -5.28804041706931439326e-7, 1.20513320888564545614e-7, -2.21292840629180808319e-8, 3.40725819990935167924e-9},
           {4.05523693294957420267e-6, -3.58473191271729025662e-6, 1.60317738998705828441e-6, -4.82745049888742852959e-7, 1.09944306214121994699e-7, -2.01769860477211924923e-8, 3.10510005120538079777e-9},
           {3.71232356625298095171e-6, -3.27814891402354898536e-6, 1.46475333602527680148e-6, -4.40724338935969770439e-7, 1.00307494081669028938e-7, -1.83977829984284600834e-8, 2.82985481874942747683e-9},
           {3.39872533343629360046e-6, -2.99802777870197442498e-6, 1.33837467336698813863e-6, -4.02385811443362604533e-7, 9.15202507873768223240e-8, -1.67762604060412650613e-8, 2.57911607189148387049e-9},
           {3.11191290329613258470e-6, -2.74206657311280715825e-6, 1.22298618038171289092e-6, -3.67404929054607744855e-7, 8.35072999686911584923e-8, -1.52983818256573741057e-8, 2.35069330011914346993e-9},
           {2.84957690292571136484e-6, -2.50816496600831844168e-6, 1.11762561750360636899e-6, -3.35485903113766910328e-7, 7.62000649655409708457e-8, -1.39513652465763789701e-8, 2.14259247882818577887e-9},
           {2.60960865920420072978e-6, -2.29440646842770014317e-6, 1.02141549204841021192e-6, -3.06359136388908547943e-7, 6.95360701711530760006e-8, -1.27235705883817395002e-8, 1.95299838923398964302e-9},
           {2.39008263644428985571e-6, -2.09904224621965414781e-6, 9.33555555693374896199e-7, -2.79778893350416884164e-7, 6.34583960644798590398e-8, -1.16043973188897976981e-8, 1.78025853368947624956e-9},
           {2.18924042003852541046e-6, -1.92047636530698189063e-6, 8.53315969175779092283e-7, -2.55521178512355975194e-7, 5.79151830952288585469e-8, -1.05841912807089359121e-8, 1.62286850207276917453e-9},
           {2.00547610929913027033e-6, -1.75725234230044281245e-6, 7.80031074632333397417e-7, -2.33381804188362149870e-7, 5.28591800281303428789e-8, -9.65415989576506320839e-9, 1.47945865799661984556e-9},
           {1.83732299484775964737e-6, -1.60804088444242708849e-6, 7.13093721340828468619e-7, -2.13174630690384403702e-7, 4.82473327493237876579e-8, -8.80629499227197014367e-9, 1.34878202549100778764e-9},
           {1.68344140698773349414e-6, -1.47162871321515790252e-6, 6.51950095484441632943e-7, -1.94729963524217383952e-7, 4.40404098981556975173e-8, -8.03330256693726372728e-9, 1.22970326762853531668e-9},
           {1.54260763157915909852e-6, -1.34690837537490881634e-6, 5.96095008981446376557e-7, -1.77893093523855556551e-7, 4.02026620155103090113e-8, -7.32853885731525534597e-9, 1.12118865839768762536e-9},
           {1.41370379912533740059e-6, -1.23286895375633987385e-6, 5.45067606448027695643e-7, -1.62522967129666203979e-7, 3.67015111979922305406e-8, -6.68595215571012198261e-9, 1.02229695807119863022e-9},
           {1.29570866114762292701e-6, -1.12858759800544937824e-6, 4.98447453025326541820e-7, -1.48490975164545908737e-7, 3.35072685185319937350e-8, -6.10002984740637976994e-9, 9.32171110446949755898e-10},
           {1.18768917554874551838e-6, -1.03322180251472668418e-6, 4.55850969136266759682e-7, -1.35679849507867762788e-7, 3.05928767207317667762e-8, -5.56575020272458879983e-9, 8.50030687730885984101e-10},
           {1.08879282960825858391e-6, -9.46002365312722582309e-7, 4.16928181272817646748e-7, -1.23982658018501035277e-7, 2.79336759187292333142e-8, -5.07853849489014021643e-9, 7.75165015552543564486e-10},
           {9.98240635578978304537e-7, -8.66226967559524187663e-7, 3.81359760677042061775e-7, -1.13301888923989445806e-7, 2.55071902385498317450e-8, -4.63422705434629140813e-9, 7.06926916714946794103e-10},
           {9.15320739615355884147e-7, -7.93254318671526429516e-7, 3.48854324294118339586e-7, -1.03548616680850343546e-7, 2.32929335226772615504e-8, -4.22901890528803620533e-9, 6.44727017837330670920e-10},
           {8.39382590013970658225e-7, -7.26498816990744785878e-7, 3.19145974664800958297e-7, -9.46417420279328554936e-8, 2.12722323885655000333e-8, -3.85945466215857994359e-9, 5.88028568101795571366e-10},
           {7.69831615528595080394e-7, -6.65425680368756530997e-7, 2.91992057508791098681e-7, -8.65072996072494683285e-8, 1.94280650855623726160e-8, -3.52238239292337093914e-9, 5.36342723909391490334e-10},
           {7.06124368879261057387e-7, -6.09546505092375695742e-7, 2.67171117647698465157e-7, -7.90778271204933446618e-8, 1.77449147345912559267e-8, -3.21493018238007671773e-9, 4.89224257428962850540e-10},
           {6.47764094544424867781e-7, -5.58415215273006183594e-7, 2.44481035643478567175e-7, -7.22917905298590272300e-8, 1.62086356622007554624e-8, -2.93448115281522271041e-9, 4.46267650821152095502e-10},
           {5.94296683542261287302e-7, -5.11624368186739623949e-7, 2.23737329100709586271e-7, -6.60930603036202578545e-8, 1.48063316563808110658e-8, -2.67865072119586157826e-9, 4.07103541374726999560e-10}}};
  // clang-format on
}
} // namespace tables
