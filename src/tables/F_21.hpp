
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order 21.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<21>() {
  // clang-format off
  return {{{2.32558139534883717703e-2, -2.22222222222222230703e-2, 1.06382978723404252736e-2, -3.40136054421768651429e-3, 8.16993464052287498081e-4, -1.57232704402515715463e-4, 2.52525252525252525033e-5},
           {2.11366535013732884107e-2, -2.01934126154593440727e-2, 9.66537414927751831195e-3, -3.08979333010586144914e-3, 7.42046044825774822780e-4, -1.42789201282859728407e-4, 2.29298758543625710946e-5},
           {1.92109489873201096100e-2, -1.83501334419568437606e-2, 8.78156476259521305561e-3, -2.80680608582008954757e-3, 6.73982932617146323490e-4, -1.29674092612609020720e-4, 2.08210970076793342452e-5},
           {1.74610106067544720854e-2, -1.66753923478743099063e-2, 7.97869581052174613178e-3, -2.54977375203508998744e-3, 6.12171001152685806922e-4, -1.17765065682911835958e-4, 1.89064746796328076231e-5},
           {1.58707686144187488930e-2, -1.51537554804586846458e-2, 7.24934411562599100021e-3, -2.31631267358413254001e-3, 5.56035416567486314235e-4, -1.06951081697540605173e-4, 1.71681138206926499161e-5},
           {1.44256247458207937512e-2, -1.37712043576608197948e-2, 6.58676819105173585317e-3, -2.10425837437163473082e-3, 5.05054264692803380789e-4, -9.71313355946496604200e-5, 1.55897703740812072814e-5},
           {1.31123172830815426515e-2, -1.25150058987332103017e-2, 5.98484556207003453449e-3, -1.91164538063288763289e-3, 4.58753674029256891358e-4, -8.82143119290556572800e-5, 1.41566988133883927214e-5},
           {1.19187985106365985227e-2, -1.13735944042601400117e-2, 5.43801585724886134277e-3, -1.73668890356945570565e-3, 4.16703388631265987489e-4, -8.01169279360720604666e-5, 1.28555137718341598162e-5},
           {1.08341234217296591980e-2, -1.03364643857210853489e-2, 4.94122913757099983811e-3, -1.57776820983879023305e-3, 3.78512749358927134448e-4, -7.27637557192984811864e-5, 1.16740644596499187414e-5},
           {9.84834864147602143114e-3, -9.39407324603874945013e-3, 4.48989898087349178363e-3, -1.43341152421379682338e-3, 3.43827045792989734185e-4, -6.60863162500936079154e-5, 1.06013206867254865896e-5},
           {8.95244062745517536761e-3, -8.53775290456506609493e-3, 4.07985988349641396505e-3, -1.30228232310170628956e-3, 3.12324204592902352883e-4, -6.00224385427922181341e-5, 9.62726941716400299285e-6},
           {8.13819229520290968183e-3, -7.75962954347526965432e-3, 3.70732858143352737856e-3, -1.18316689065697073710e-3, 2.83711783239959890440e-4, -5.45156779834520089181e-5, 8.74282088173938205290e-6},
           {7.39814729442451069624e-3, -7.05255072835494958156e-3, 3.36886892995220954550e-3, -1.07496302106288663808e-3, 2.57724240977198727157e-4, -4.95147883468372604181e-5, 7.93972336439984785960e-6},
           {6.72553123297543482134e-3, -6.41001922458887124501e-3, 3.06136001393973386508e-3, -9.76669761302715634665e-4, 2.34120461361952590055e-4, -4.49732425417226114556e-5, 7.21048586076024827307e-6},
           {6.11418921032078847150e-3, -5.82613289363838153523e-3, 2.78196719145012765981e-3, -8.87378098494378099795e-4, 2.12681503210428044176e-4, -4.08487975832068830732e-5, 6.54830788074867404874e-6},
           {5.55852908089457791591e-3, -5.29553011001234353455e-3, 2.52811580035427812749e-3, -8.06262504715129905454e-4, 1.93208558858588635380e-4, -3.71030997068964938767e-5, 5.94701573492219239209e-6},
           {5.05346992108322758813e-3, -4.81334019122606898700e-3, 2.29746728289339802870e-3, -7.32573260277291941553e-4, 1.75521100610266878256e-4, -3.37013259174774219102e-5, 5.40100470507859879162e-6},
           {4.59439522195366836788e-3, -4.37513837978622133901e-3, 2.08789750553608609990e-3, -6.65629483708701720664e-4, 1.59455198010094402125e-4, -3.06118586069140848353e-5, 4.90518655524468801486e-6},
           {4.17711037378643273293e-3, -3.97690495867504024974e-3, 1.89747707205421703783e-3, -6.04812803310645144550e-4, 1.44861990182213276092e-4, -2.78059901885245402096e-5, 4.45494188944043269799e-6},
           {3.79780404836967816484e-3, -3.61498812033189849402e-3, 1.72445344635532393611e-3, -5.49561611173923379378e-4, 1.31606298930904864076e-4, -2.52576549754222690676e-5, 4.04607690827875069237e-6},
           {3.45301312123331288761e-3, -3.28607024410495487596e-3, 1.56723471851379341641e-3, -4.99365845986831681513e-4, 1.19565369619957062152e-4, -2.29431857879475708791e-5, 3.67478415789372052927e-6},
           {3.13959080889193199726e-3, -2.98713726889791256897e-3, 1.42437486278859919836e-3, -4.53762255918510257202e-4, 1.08627728046231634301e-4, -2.08410930071541252351e-5, 3.33760690228782759098e-6},
           {2.85467772602825218403e-3, -2.71545087656386826061e-3, 1.29456035034548281454e-3, -4.12330097353846803873e-4, 9.86921426107683513219e-5, -1.89318640023610795830e-5, 3.03140678430639759044e-6},
           {2.59567559466382120209e-3, -2.46852322776970568505e-3, 1.17659799204707614384e-3, -3.74687229334111880641e-4, 8.96666820781272873482e-5, -1.71977810522176376954e-5, 2.75333447140716467910e-6},
           {2.36022336198432819768e-3, -2.24409401581534889356e-3, 1.06940389815398653392e-3, -3.40486567259107666700e-4, 8.14678601108091791222e-5, -1.56227560524618074261e-5, 2.50080301048746022155e-6},
           {2.14617550584237076067e-3, -2.04010962546464277162e-3, 9.71993452201020649746e-4, -3.09412862766573581834e-4, 7.40198585789492532376e-5, -1.41921804612252569749e-5, 2.27146364152608613997e-6},
           {1.95158232725982827734e-3, -1.85470420343054063009e-3, 8.83472205773126349412e-4, -2.81179779754489166804e-4, 6.72538223837019100843e-5, -1.28927890758290655869e-5, 2.06318384293243720469e-6},
           {1.77467204768427572366e-3, -1.68618246493965843330e-3, 8.03027609493975357870e-4, -2.55527239280370008223e-4, 6.11072192027707720161e-5, -1.17125363648792120175e-5, 1.87402740249024959920e-6},
           {1.61383454549111730880e-3, -1.53300407694645650543e-3, 7.29921503336842820292e-4, -2.32219008584682234464e-4, 5.55232581746925994465e-5, -1.06404841973301236569e-5, 1.70223632683573970992e-6},
           {1.46760658142136676992e-3, -1.39376947322613861137e-3, 6.63483296445610006530e-4, -2.11040511766671831347e-4, 5.04503620904766814917e-5, -9.66669991714985763886e-6, 1.54621441969969645201e-6},
           {1.33465837644588603342e-3, -1.26720696988487065496e-3, 6.03103773079607724181e-4, -1.91796841711645659314e-4, 4.58416881622218110818e-5, -8.78216380929945988833e-6, 1.40451237483349170012e-6},
           {1.21378141807911899865e-3, -1.15216106191038249011e-3, 5.48229467129796011436e-4, -1.74310954748469956743e-4, 4.16546928930943186585e-5, -7.97868509084636661182e-6, 1.27581424377803451666e-6},
           {1.10387738254557623251e-3, -1.04758179235837954948e-3, 4.98357552950072068415e-4, -1.58422031222411993819e-4, 3.78507369858265785788e-5, -7.24882564099684321713e-6, 1.15892515155680907379e-6},
           {1.00394807053666543402e-3, -9.52515095732828264222e-4, 4.53031205055857879704e-4, -1.43983986717441755530e-4, 3.43947266015651799713e-5, -6.58583075640888216106e-6, 1.05276014510112520713e-6},
           {9.13086263680060010450e-4, -8.66094026164198715727e-4, 4.11835383607567359025e-4, -1.30864120068267407362e-4, 3.12547876209839995939e-5, -5.98356628401764440193e-6, 9.56334069858290099022e-7},
           {8.30467417366113663975e-4, -7.87530789203491664655e-4, 3.74393006559905008618e-4, -1.18941885578872073338e-4, 2.84019698682734490162e-5, -5.43646154339077473559e-6, 8.68752379691839670972e-7},
           {7.55342113315130708751e-4, -7.16109503508070778695e-4, 3.40361472956296593102e-4, -1.08107778023133521868e-4, 2.58099785388237650333e-5, -4.93945750489326135756e-6, 7.89202793948424345861e-7},
           {6.87029202297647408754e-4, -6.51179625467498968128e-4, 3.09429505114736937924e-4, -9.82623200550882962322e-5, 2.34549303257692341263e-5, -4.48795973919166896491e-6, 7.16947723520958160945e-7},
           {6.24909573802655770279e-4, -5.92149975966927213933e-4, 2.81314280417511541725e-4, -8.93151426114151302579e-5, 2.13151319714391428509e-5, -4.07779569832890756328e-6, 6.51317394957291233984e-7},
           {5.68420495245258359206e-4, -5.38483314069456288180e-4, 2.55758826110332349469e-4, -8.11841497557027529184e-5, 1.93708791793390201427e-5, -3.70517592917373401925e-6, 5.91703608215919229707e-7},
           {5.17050468569505696989e-4, -4.89691407469324663758e-4, 2.32529652961591354159e-4, -7.37947602011549742308e-5, 1.76042740125281990692e-5, -3.36665885687538412419e-6, 5.37554069616891537190e-7},
           {4.70334556883072790658e-4, -4.45330554172061342157e-4, 2.11414605852532820835e-4, -6.70792184629442808088e-5, 1.59990590769532365256e-5, -3.05911880937960756289e-6, 4.88367246933110063773e-7},
           {4.27850138102401115429e-4, -4.04997514038757020459e-4, 1.92220911384903173731e-4, -6.09759692401429839303e-5, 1.45404669450612334996e-5, -2.77971698440204294781e-6, 4.43687698465493241372e-7},
           {3.89213046530338083358e-4, -3.68325812628327335305e-4, 1.74773404422895971538e-4, -5.54290892161104386442e-5, 1.32150834173233787486e-5, -2.52587508779350149968e-6, 4.03101832391109341867e-7},
           {3.54074066869752748354e-4, -3.34982383219424128921e-4, 1.58912917148048112503e-4, -5.03877710009107362033e-5, 1.20107233484816327152e-5, -2.29525139722829830304e-6, 3.66234056708260588466e-7},
           {3.22115748429386758705e-4, -3.04664516024591338749e-4, 1.44494815714683573580e-4, -4.58058544247768405070e-5, 1.09163178826022500136e-5, -2.08571902783597142055e-6, 3.32743283764578999459e-7},
           {2.93049510232486882209e-4, -2.77097086452538074117e-4, 1.31387670963621096785e-4, -4.16414008323695507448e-5, 9.92181204747763997062e-6, -1.89534619699188824022e-6, 3.02319756677962509010e-7},
           {2.66613010422007891843e-4, -2.52030036856437807645e-4, 1.19472050895950889643e-4, -3.78563064277226716745e-5, 9.01807175556136285930e-6, -1.72237830417667189253e-6, 2.74682167976922373754e-7},
           {2.42567755793253621559e-4, -2.29236088551027986223e-4, 1.08639423738344937103e-4, -3.44159510830622698092e-5, 8.19679934635534808982e-6, -1.56522165878377447709e-6, 2.49575043524995368612e-7},
           {2.20696929498367613474e-4, -2.08508663010761110005e-4, 9.87911614571377222653e-5, -3.12888793545339414484e-5, 7.45045688481559357093e-6, -1.42242870415810851624e-6, 2.26766367279084559636e-7},
           {2.00803416977608605162e-4, -1.89659993095169339882e-4, 8.98376345098570914215e-5, -2.84465107473514403286e-5, 6.77219650264935954737e-6, -1.29268460013111494566e-6, 2.06045424687279587890e-7},
           {1.82708011998505826228e-4, -1.72519406903931575787e-4, 8.16973894686897755000e-5, -2.58628765447906974197e-5, 6.15579713501967645150e-6, -1.17479503901016022781e-6, 1.87220844579108136997e-7},
           {1.66247786342706941210e-4, -1.56931768459193568934e-4, 7.42964019184099387898e-5, -2.35143807623357088102e-5, 5.59560706476728357789e-6, -1.06767518150189796909e-6, 1.70118821259520044453e-7},
           {1.51274608186982697849e-4, -1.42756060861323291712e-4, 6.75673977287414467049e-5, -2.13795830124444195906e-5, 5.08649174036332252696e-6, -9.70339609508235706415e-7, 1.54581500204684175171e-7},
           {1.37653795593395097182e-4, -1.29864098879935857545e-4, 6.14492364344644282628e-5, -1.94390012689347843773e-5, 4.62378638292494349932e-6, -8.81893202227969374633e-7, 1.40465512288735094099e-7},
           {1.25262892766750427069e-4, -1.18139359136926186530e-4, 5.58863510317089901610e-5, -1.76749327047964337493e-5, 4.20325294221996495969e-6, -8.01522850616027006879e-7, 1.27640642860334669567e-7},
           {1.13990557866651539762e-4, -1.07475917123488572797e-4, 5.08282390211625649122e-5, -1.60712909450347768989e-5, 3.82104100207321308470e-6, -7.28489933076390303855e-7, 1.15988623249367362727e-7},
           {1.03735552187191583059e-4, -9.77774812787677162322e-5, 4.62290000032132235969e-5, -1.46134582285198364230e-5, 3.47365227234482707548e-6, -6.62123482367531123495e-7, 1.05402033429119299156e-7},
           {9.44058214490889682780e-5, -8.89565152530170444919e-5, 4.20469155607732295293e-5, -1.32881511111617090686e-5, 3.15790833802339996546e-6, -6.01813980147136291789e-7, 9.57833055986540080085e-8},
           {8.59176607954674004730e-5, -8.09334402912471249881e-5, 3.82440675566838409762e-5, -1.20832984683601608964e-5, 2.87092136627650047236e-6, -5.47007721436479324308e-7, 8.70438193935529084129e-8},
           {7.81949558513688982491e-5, -7.36359104118743427406e-5, 3.47859913278322749916e-5, -1.09879306687480928731e-5, 2.61006749981100202366e-6, -4.97201696598816814216e-7, 7.91030802895953924902e-8},
           {7.11684929055590677002e-5, -6.69981537256742506851e-5, 3.16413605807182895841e-5, -9.99207889483203315990e-6, 2.37296268987296195079e-6, -4.51938943250472234552e-7, 7.18879735413466673185e-8},
           {6.47753319077010598350e-5, -6.09603738496289739371e-5, 2.87817010861918690470e-5, -9.08668368019206710716e-6, 2.15744074489489822327e-6, -4.10804324902963129468e-7, 6.53320867033041350469e-8},
           {5.89582365504013849165e-5, -5.54682059236779421573e-5, 2.61811305371662429861e-5, -8.26351181831625673877e-6, 1.96153339138909165980e-6, -3.73420697110667930169e-7, 5.93750944218397627898e-8},
           {5.36651562292929322343e-5, -5.04722222410665131227e-5, 2.38161221747674989833e-5, -7.51508087570572289309e-6, 1.78345216238130824577e-6, -3.39445425508317825299e-7, 5.39621997676818925574e-8},
           {4.88487551500543557112e-5, -4.59274829595965051717e-5, 2.16652900078561628757e-5, -6.83459061231919250828e-6, 1.62157194565467858977e-6, -3.08567223399836080546e-7, 4.90436269065571210783e-8},
           {4.44659842834652885789e-5, -4.17931277758412699289e-5, 1.97091936501876556552e-5, -6.21586067638556615390e-6, 1.47441603948691103476e-6, -2.80503279535401466016e-7, 4.45741603848116445840e-8},
           {4.04776922622507637608e-5, -3.80320048211412730928e-5, 1.79301609805174187501e-5, -5.65327399869585668581e-6, 1.34064257755936541461e-6, -2.54996649414908727181e-7, 4.05127267418458735040e-8},
           {3.68482716702007908477e-5, -3.46103333804281175718e-5, 1.63121269953843240990e-5, -5.14172536423179939614e-6, 1.21903219742444069892e-6, -2.31813885908519433001e-7, 3.68220145561041504916e-8},
           {3.35453374981540286570e-5, -3.14973973458046696246e-5, 1.48404873736482363053e-5, -4.67657468688907385123e-6, 1.10847683845673001347e-6, -2.10742887211665999796e-7, 3.34681293898628194110e-8},
           {3.05394348358951016852e-5, -2.86652665992118339160e-5, 1.35019654075003085302e-5, -4.25360455655363283947e-6, 1.00796956569120297505e-6, -1.91590942173517094295e-7, 3.04202804235163416168e-8},
           {2.78037731365498044735e-5, -2.60885437750514270175e-5, 1.22844910778662881276e-5, -3.86898166729483292380e-6, 9.16595325465872697661e-7, -1.74182954873425366224e-7, 2.76504958655197441407e-8},
           {2.53139846331369328960e-5, -2.37441340866806981200e-5, 1.11770911640258775168e-5, -3.51922177131651037977e-6, 8.33522547425833098678e-7, -1.58359831986419966732e-7, 2.51333644923750717946e-8},
           {2.30479047077889818008e-5, -2.16110361124024498956e-5, 1.01697893789130064688e-5, -3.20115783589009354860e-6, 7.57995515290630048167e-7, -1.43977017991941069012e-7, 2.28458009165615249691e-8},
           {2.09853722148213967219e-5, -1.96701516289014679618e-5, 9.25351561388471764876e-6, -2.91191111008541552672e-6, 6.89327435910849473688e-7, -1.30903164653885827830e-7, 2.07668324013828336806e-8},
           {1.91080479411591202220e-5, -1.79041127548002069775e-5, 8.42002346060566819394e-6, -2.64886483498992854628e-6, 6.26894142608888589301e-7, -1.19018922447466949105e-7, 1.88774052424120954234e-8},
           {1.73992495532984299002e-5, -1.62971248257379384386e-5, 7.66181525386813700416e-6, -2.40964035551523165290e-6, 5.70128374673416036619e-7, -1.08215842741033659639e-7, 1.71602089174303878072e-8},
           {1.58438015305160455847e-5, -1.48348235665836302387e-5, 6.97207394835914161507e-6, -2.19207541405798079441e-6, 5.18514580211700578703e-7, -9.83953805694370139395e-8, 1.55995163721877182659e-8},
           {1.44278987208209849677e-5, -1.35041452574045642889e-5, 6.34460120523763448333e-6, -1.99420442641609314756e-6, 4.71584194408494302979e-7, -8.94679887693406901256e-8, 1.41810389595099380766e-8},
           {1.31389822804362541524e-5, -1.22932087088396418712e-5, 5.77376112147757368308e-6, -1.81424055864767303371e-6, 4.28911349639565478706e-7, -8.13522950947972251103e-8, 1.28917946856379902263e-8},
           {1.19656268705387795574e-5, -1.11912079706657403708e-5, 5.25442908679507921638e-6, -1.65055944016897667853e-6, 3.90108977883237926676e-7, -7.39743547013372037350e-8, 1.17199885414920889494e-8},
           {1.08974380876165720519e-5, -1.01883147955952031938e-5, 4.78194530008993405303e-6, -1.50168436347308048271e-6, 3.54825269501582681841e-7, -6.72669710859397412510e-8, 1.06549038089597400395e-8},
           {9.92495919706333006667e-6, -9.27558996960838406584e-6, 4.35207252012900869205e-6, -1.36627283455265392696e-6, 3.22740455757963673727e-7, -6.11690792050821931620e-8, 9.68680333436459103456e-9},
           {9.03958632438057166001e-6, -8.44490270122948132210e-6, 3.96095766407745567380e-6, -1.24310435055547839445e-6, 2.93563885430109249221e-7, -5.56251850695273424447e-8, 8.80683985393563448148e-9},
           {8.23349133537298549465e-6, -7.68885733584447671825e-6, 3.60509690280209021981e-6, -1.13106929250540936806e-6, 2.67031368595583344307e-7, -5.05848566379676860156e-8, 8.00697454023010145211e-9},
           {7.49955170671170767330e-6, -7.00072672811509073143e-6, 3.28130393395683002376e-6, -1.02915883118916837770e-6, 2.42902763134727050743e-7, -4.60022613069897054604e-8, 7.27990301485355837043e-9},
           {6.83128675184435975185e-6, -6.37439166637941015208e-6, 2.98668114300848305893e-6, -9.36455753635811684980e-7, 2.20959781737759252627e-7, -4.18357457264707572028e-8, 6.61898814218122905420e-9},
           {6.22279962503365067936e-6, -5.80428579820754509511e-6, 2.71859338884206240040e-6, -8.52126126087338384802e-7, 2.01003999238605807157e-7, -3.80474540615027469361e-8, 6.01819898176258846749e-9},
           {5.66872457883797863239e-6, -5.28534555650877172520e-6, 2.47464417464249940819e-6, -7.75411717054129919521e-7, 1.82855041947053636777e-7, -3.46029811778953082615e-8, 5.47205533427520100466e-9},
           {5.16417899808942876781e-6, -4.81296463122651994648e-6, 2.25265398660617933855e-6, -7.05623111039020528693e-7, 1.66348942330193325834e-7, -3.14710575515651435268e-8, 4.97557736781685856999e-9},
           {4.70471977681423560559e-6, -4.38295257312948679211e-6, 2.05064060289293028543e-6, -6.42133449863463544457e-7, 1.51336643919390871612e-7, -2.86232629956727026339e-8, 4.52423985847199048829e-9},
           {4.28630364397562750437e-6, -3.99149715389206457709e-6, 1.86680119326995665335e-6, -5.84372744297248093145e-7, 1.37682642704383018015e-7, -2.60337665659562057389e-8, 4.11393062189904078561e-9},
           {3.90525107976015087475e-6, -3.63513014090171718100e-6, 1.69949604629028141523e-6, -5.31822703932894260067e-7, 1.25263752534365878374e-7, -2.36790902468156388211e-8, 3.74091275155891420569e-9},
           {3.55821349670402320615e-6, -3.31069617634936553326e-6, 1.54723377574050182589e-6, -4.84012038005666424213e-7, 1.13967983188824194142e-7, -2.15378942405672103840e-8, 3.40179031450363161321e-9},
           {3.24214338956402187998e-6, -3.01532447843719925411e-6, 1.40865787162341447099e-6, -4.40512184184107693201e-7, 1.03693520818914121377e-7, -1.95907818819668685561e-8, 3.09347718769767019853e-9},
           {2.95426718474860708255e-6, -2.74640310823622597490e-6, 1.28253447323495572658e-6, -4.00933426284070092386e-7, 9.43478014031025808443e-8, -1.78201223814454879200e-8, 2.81316874695113109728e-9},
           {2.69206054458541755176e-6, -2.50155556907905991964e-6, 1.16774125306517420103e-6, -3.64921365427702606072e-7, 8.58466687172081952657e-8, -1.62098897651943529478e-8, 2.55831614697490198772e-9},
           {2.45322590393473316934e-6, -2.27861952659641154781e-6, 1.06325731040245795330e-6, -3.32153712410720649739e-7, 7.81136090969259453854e-8, -1.47455165298170998403e-8, 2.32660295506969972808e-9},
           {2.23567203686787401557e-6, -2.07562745679288863731e-6, 9.68153982742399009512e-7, -3.02337371986458737857e-7, 7.10790559775529407281e-8, -1.34137606651134492419e-8, 2.11592392275677249442e-9},
           {2.03749546949958760465e-6, -1.89078904708616563383e-6, 8.81586491482355165340e-7, -2.75205792450885348253e-7, 6.46797578375085906079e-8, -1.22025848219420511538e-8, 1.92436569945112463374e-9},
           {1.85696357176186829411e-6, -1.72247519116373287318e-6, 8.02786345997057603329e-7, -2.50516556343647827844e-7, 5.88582037553058024325e-8, -1.11010465141702569119e-8, 1.75018931025257955770e-9},
           {1.69249917608578333805e-6, -1.56920343298946630656e-6, 7.31054437109517415852e-7, -2.28049190288722516216e-7, 5.35621013192717673859e-8, -1.00991983454980045022e-8, 1.59181423625315076482e-9},
           {1.54266658475629367476e-6, -1.42962472845064816753e-6, 6.65754757258621644997e-7, -2.07603174004763295154e-7, 4.87439021104432278437e-8, -9.18799734438525443968e-9, 1.44780395058297944476e-9},
           {1.40615884024847241724e-6, -1.30251140509537230592e-6, 6.06308690377964199982e-7, -1.88996130338260544990e-7, 4.43603704161184418723e-8, -8.35922257427561643299e-9, 1.31685277687926616657e-9},
           {1.28178614425642279380e-6, -1.18674621127990164265e-6, 5.52189819692099611648e-7, -1.72062179828951371262e-7, 4.03721912285806590289e-8, -7.60540026257151276319e-9, 1.19777394908858004644e-9},
           {1.16846532149239380566e-6, -1.08131235592501138821e-6, 5.02919206354233610139e-7, -1.56650444821827429580e-7, 3.67436139441856414564e-8, -6.91973576108552490099e-9, 1.08948876261615285345e-9},
           {1.06521023375756630204e-6, -9.85284449059984052027e-7, 4.58061096136688213552e-7, -1.42623689507429199363e-7, 3.34421285056613355001e-8, -6.29605171361076037318e-9, 9.91016716919597415894e-10},
           {9.71123058353525617030e-7, -8.97820261494810412055e-7, 4.17219015281631202357e-7, -1.29857083514491232758e-7, 3.04381710281303968589e-8, -5.72873186340301849628e-9, 9.01466558802605160456e-10},
           {8.85386352692545325437e-7, -8.18153229379958351144e-7, 3.80032220160318457192e-7, -1.18237077807851668066e-7, 2.77048562197840023849e-8, -5.21266998527903385686e-9, 8.20028143981628602002e-10},
           {8.07255834046335103497e-7, -7.45585636156489012645e-7, 3.46172468606904918220e-7, -1.07660382670245440304e-7, 2.52177341538058199658e-8, -4.74322347418859408992e-9, 7.45965042052656641825e-10},
           {7.36053809811263040232e-7, -6.79482410529013634036e-7, 3.15341083717263609839e-7, -9.80330384786117918671e-8, 2.29545691713368395638e-8, -4.31617116495086145480e-9, 6.78607816846051318871e-10},
           {6.71163199521803787851e-7, -6.19265484665865294284e-7, 2.87266283561004182023e-7, -8.92695708324251691351e-8, 2.08951388980436276245e-8, -3.92767499675301943256e-9, 6.17347920388753982915e-10},
           {6.12022095166237865539e-7, -5.64408661895847161109e-7, 2.61700752670354205055e-7, -8.12922223611015097860e-8, 1.90210515410762409974e-8, -3.57424517135270161695e-9, 5.61632144352797856514e-10},
           {5.58118811197831373048e-7, -5.14432947775143756664e-7, 2.38419433364888553544e-7, -7.40302542368068573239e-8, 1.73155798005765277461e-8, -3.25270848603140013479e-9, 5.10957578009537647668e-10},
           {5.08987380034761681828e-7, -4.68902302583489189873e-7, 2.17217516966355667531e-7, -6.74193110544315345517e-8, 1.57635098819657709128e-8, -2.96017955151129606677e-9, 4.64867026377963219122e-10},
           {4.64203452842878054938e-7, -4.27419777113600707323e-7, 1.97908616771327986839e-7, -6.14008433179267307428e-8, 1.43510042334049134175e-8, -2.69403463154227225400e-9, 4.22944846496250059038e-10},
           {4.23380569033292758444e-7, -3.89623997076886250397e-7, 1.80323106297673589512e-7, -5.59215822969359909291e-8, 1.30654767583537239375e-8, -2.45188786493431338081e-9, 3.84813163597605303392e-10},
           {3.86166761214761841608e-7, -3.55185964593042828970e-7, 1.64306607819003509294e-7, -5.09330624945069237815e-8, 1.18954793672141593444e-8, -2.23156965267541505462e-9, 3.50128432470208683259e-10},
           {3.52241465348853222611e-7, -3.23806148089985063372e-7, 1.49718617562972169138e-7, -4.63911874000165288675e-8, 1.08305988356776405121e-8, -2.03110701263855451919e-9, 3.18578312459049006988e-10},
           {3.21312708591229512897e-7, -2.95211834539631657725e-7, 1.36431255187054373119e-7, -4.22558345952624072927e-8, 9.86136303156076657375e-9, -1.84870572242672920988e-9, 2.89878827454152464434e-10},
           {2.93114549789803423967e-7, -2.69154720318049457080e-7, 1.24328126270497172960e-7, -3.84904966395720280471e-8, 8.97915565747537150473e-9, -1.68273408729912942382e-9, 2.63771784831834543752e-10}}};
  // clang-format on
}
} // namespace tables
