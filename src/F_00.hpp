#pragma once

#include <cmath>
#include <vector>

#include "utils.hpp"

namespace detail {
template <>
inline double
Fn<0, double>(double x, const Table<0>& table) noexcept
{
    auto fpi = 0.5 * std::sqrt(M_PI);

    auto pnt = grid_point(x);

    auto value = 0.0;

    if (pnt < 121)
    {
        auto w = x - 0.1 * pnt;

        value = horner1D(table[pnt], w);
    }
    else
    {
        auto fia = 1.0 / x;

        value = fpi * std::sqrt(fia);

        if (pnt < 361)
        {
            auto f = horner1D(std::array<double, 5>{0.0, 0.4999489092, -0.2473631686, +0.3211809090, -0.3811559346}, fia);

            value -= f * std::exp(-x);
        }
    }

    return value;
}

template <>
inline constexpr Table<0>
pretabulated<0>() noexcept
{
    return {{{1.000000000000000e+00, -3.333333333333333e-01, 1.000000000000000e-01, -2.380952380952381e-02, 4.629629629629629e-03, -7.575757575757576e-04, 1.068376068376069e-04},
             {9.676433126355918e-01, -3.140294729981613e-01, 9.312750239631074e-02, -2.203133827262316e-02, 4.266414461294388e-03, -6.961710668178456e-04, 9.797493169164401e-05},
             {9.371500287979786e-01, -2.960481892999920e-01, 8.676726852749291e-02, -2.039247174872802e-02, 3.932610455061977e-03, -6.398563586542790e-04, 8.985986231134159e-05},
             {9.083928770327505e-01, -2.792910939183878e-01, 8.087921756120457e-02, -1.888165414731328e-02, 3.625781493433329e-03, -5.882025263872403e-04, 8.242850497555407e-05},
             {8.812540349399245e-01, -2.636674861303565e-01, 7.542650772214386e-02, -1.748854816370819e-02, 3.343696710422128e-03, -5.408171189118781e-04, 7.562248425006907e-05},
             {8.556243918921488e-01, -2.490937321795154e-01, 7.037526841295635e-02, -1.620367073615502e-02, 3.084312966911568e-03, -4.973411761688778e-04, 6.938846226428506e-05},
             {8.314028712140211e-01, -2.354926959333290e-01, 6.569435487748355e-02, -1.501832120566794e-02, 2.845758838334269e-03, -4.574463401817746e-04, 6.367770016888443e-05},
             {8.084958069125835e-01, -2.227932165151243e-01, 6.135512348355830e-02, -1.392451560049684e-02, 2.626319983019578e-03, -4.208322175048782e-04, 5.844565805062465e-05},
             {7.868163704617204e-01, -2.109296289653118e-01, 5.733122586834805e-02, -1.291492651731863e-02, 2.424425771097936e-03, -3.872239710413150e-04, 5.365162991086302e-05},
             {7.662840435206962e-01, -1.998413243222762e-01, 5.359842034061925e-02, -1.198282811718457e-02, 2.238637064378533e-03, -3.563701211350185e-04, 4.925841061545153e-05},
             {7.468241328124272e-01, -1.894723458204924e-01, 5.013439907250870e-02, -1.112204579613704e-02, 2.067635047214864e-03, -3.280405376123681e-04, 4.523199199783573e-05},
             {7.283673237030935e-01, -1.797710181840973e-01, 4.691862973959369e-02, -1.032691012862555e-02, 1.910211017124876e-03, -3.020246060639911e-04, 4.154128554696251e-05},
             {7.108492693138488e-01, -1.706896072506861e-01, 4.393221038330340e-02, -9.592214716724433e-03, 1.765257051913613e-03, -2.781295531289519e-04, 3.815786933912871e-05},
             {6.942102122600063e-01, -1.621840073946130e-01, 4.115773637496660e-02, -8.913177609977781e-03, 1.631757477324587e-03, -2.561789168849302e-04, 3.505575708017907e-05},
             {6.783946363552794e-01, -1.542134544334546e-01, 3.857917845692095e-02, -8.285405989738277e-03, 1.508781065883946e-03, -2.360111496706128e-04, 3.221118731329490e-05},
             {6.633509458403348e-01, -1.467402618973016e-01, 3.618177092391252e-02, -7.704863838371967e-03, 1.395473903655456e-03, -2.174783417809683e-04, 2.960243101965203e-05},
             {6.490311698978617e-01, -1.397295787197520e-01, 3.395190908821884e-02, -7.167842337892341e-03, 1.291052867146132e-03, -2.004450554919511e-04, 2.720961599597225e-05},
             {6.353906904021528e-01, -1.331491665733583e-01, 3.187705524519709e-02, -6.670932764668442e-03, 1.194799657638971e-03, -1.847872597972627e-04, 2.501456653580560e-05},
             {6.223879910213150e-01, -1.269691952221468e-01, 2.994565242289636e-02, -6.211001667008199e-03, 1.106055344823586e-03, -1.703913570840468e-04, 2.300065707151052e-05},
             {6.099844259460112e-01, -1.211620544008885e-01, 2.814704526053031e-02, -5.785168130818774e-03, 1.024215375786771e-03, -1.571532937440954e-04, 2.115267855247476e-05},
             {5.981440066613041e-01, -1.157021808561728e-01, 2.647140741648822e-02, -5.390782955344566e-03, 9.487250092485327e-04, -1.449777474188967e-04, 1.945671644317050e-05},
             {5.868332053088469e-01, -1.105658992990154e-01, 2.490967495762672e-02, -5.025409576320847e-03, 8.790751384175964e-04, -1.337773842167043e-04, 1.790003932310444e-05},
             {5.760207733063746e-01, -1.057312761236456e-01, 2.345348522825033e-02, -4.686806587885206e-03, 8.147984690231518e-04, -1.234721798232330e-04, 1.647099716045886e-05},
             {5.656775740011072e-01, -1.011779848431094e-01, 2.209512073983963e-02, -4.372911727376544e-03, 7.554660219837966e-04, -1.139887989595949e-04, 1.515892841300168e-05},
             {5.557764282341627e-01, -9.688718228015629e-02, 2.082745766156837e-02, -4.081827198828863e-03, 7.006839328246508e-04, -1.052600281262364e-04, 1.395407518438065e-05},
             {5.462919717851478e-01, -9.284139463224979e-02, 1.964391852728506e-02, -3.811806221631728e-03, 6.500905223719485e-04, -9.722425701407028e-05, 1.284750573185390e-05},
             {5.372005237504814e-01, -8.902441260310529e-02, 1.853842880720981e-02, -3.561240700569365e-03, 6.033536154613742e-04, -8.982500436750481e-05, 1.183104368343283e-05},
             {5.284799649863473e-01, -8.542119486048100e-02, 1.750537702237900e-02, -3.328649922346923e-03, 5.601680864106562e-04, -8.301048445208647e-05, 1.089720337885916e-05},
             {5.201096258180753e-01, -8.201777914158163e-02, 1.653957810710062e-02, -3.112670191838935e-03, 5.202536118453669e-04, -7.673321061515085e-05, 1.003913080029295e-05},
             {5.120701822827481e-01, -7.880120038385185e-02, 1.563623974958175e-02, -2.912045328718687e-03, 4.833526131449546e-04, -7.094963273405603e-05, 9.250549605494919e-06},
             {5.043435602314387e-01, -7.575941531059577e-02, 1.479093146366028e-02, -2.725617951909413e-03, 4.492283723078573e-04, -6.561980562587953e-05, 8.525711819050257e-06},
             {4.969128466721305e-01, -7.288123294815686e-02, 1.399955616539619e-02, -2.552321485494734e-03, 4.176633064329372e-04, -6.070708574725361e-05, 7.859352776168687e-06},
             {4.897622077845121e-01, -7.015625059471027e-02, 1.325832404732536e-02, -2.391172825387692e-03, 3.884573872911255e-04, -5.617785374546477e-05, 7.246649949142213e-06},
             {4.828768130838126e-01, -6.757479480038978e-02, 1.256372856060070e-02, -2.241265611231491e-03, 3.614266936267845e-04, -5.200126063402209e-05, 6.683185318953958e-06},
             {4.762427652530322e-01, -6.512786695480970e-02, 1.191252433118404e-02, -2.101764052733194e-03, 3.364020848925743e-04, -4.814899555939951e-05, 6.164910984085237e-06},
             {4.698470352016234e-01, -6.280709311132925e-02, 1.130170685083351e-02, -1.971897263952777e-03, 3.132279860934415e-04, -4.459507330222013e-05, 5.688117725518276e-06},
             {4.636774019442062e-01, -6.060467770790465e-02, 1.072849379697371e-02, -1.850954063019549e-03, 2.917612743028271e-04, -4.131563981726633e-05, 5.249406271508301e-06},
             {4.577223969254834e-01, -5.851336087231673e-02, 1.019030784774397e-02, -1.738278198358115e-03, 2.718702582246705e-04, -3.828879426372688e-05, 4.845661028111888e-06},
             {4.519712524474596e-01, -5.652637902517024e-02, 9.684760869693755e-03, -1.633263965806403e-03, 2.534337429150402e-04, -3.549442611127535e-05, 4.474026061900201e-06},
             {4.464138538825274e-01, -5.463742851752857e-02, 9.209639365819314e-03, -1.535352184025400e-03, 2.363401724533250e-04, -3.291406603003615e-05, 4.131883139929372e-06},
             {4.410406953812108e-01, -5.284063206155955e-02, 8.762891080996529e-03, -1.444026498358981e-03, 2.204868439705367e-04, -3.053074938427268e-05, 3.816831649046143e-06},
             {4.358428388065173e-01, -5.113050773228731e-02, 8.342612670432967e-03, -1.358809985824562e-03, 2.057791870064550e-04, -2.832889125165961e-05, 3.526670232118810e-06},
             {4.308118756481243e-01, -4.950194033662458e-02, 7.947038344606906e-03, -1.279262036222050e-03, 1.921301026827798e-04, -2.629417198313765e-05, 3.259379992933863e-06},
             {4.259398916891634e-01, -4.795015496243749e-02, 7.574529411343693e-03, -1.204975486458062e-03, 1.794593576503763e-04, -2.441343240337244e-05, 3.013109134407412e-06},
             {4.212194342163276e-01, -4.647069253559763e-02, 7.223564642257071e-03, -1.135573987111786e-03, 1.676930281989893e-04, -2.267457782946332e-05, 2.786158906537743e-06},
             {4.166434815805158e-01, -4.505938722691927e-02, 6.892731396806418e-03, -1.070709582033738e-03, 1.567629903109940e-04, -2.106649015641889e-05, 2.576970751270159e-06},
             {4.122054149303926e-01, -4.371234556366946e-02, 6.580717442737763e-03, -1.010060483383044e-03, 1.466064518000646e-04, -1.957894732262715e-05, 2.384114541249133e-06},
             {4.078989919551834e-01, -4.242592711207315e-02, 6.286303416729981e-03, -9.533290259858864e-04, 1.371655230040399e-04, -1.820254952763902e-05, 2.206277818378794e-06},
             {4.037183224858263e-01, -4.119672660800066e-02, 6.008355873696978e-03, -9.002397862491276e-04, 1.283868228014033e-04, -1.692865162854434e-05, 2.042255946275825e-06},
             {3.996578458153928e-01, -4.002155742290495e-02, 5.745820877438293e-03, -8.505378520996358e-04, 1.202211169951546e-04, -1.574930119050089e-05, 1.890943098148643e-06},
             {3.957123096105136e-01, -3.889743626114282e-02, 5.497718089217151e-03, -8.039872315514342e-04, 1.126229863586448e-04, -1.465718171198484e-05, 1.751324008435349e-06},
             {3.918767502955191e-01, -3.782156899313761e-02, 5.263135314406727e-03, -7.603693885384254e-04, 1.055505218672313e-04, -1.364556058644308e-05, 1.622466422738183e-06},
             {3.881464748001624e-01, -3.679133753648094e-02, 5.041223470609716e-03, -7.194818955983396e-04, 9.896504484923675e-05, -1.270824139957882e-05, 1.503514186255777e-06},
             {3.845170435702343e-01, -3.580428770408719e-02, 4.831191943648650e-03, -6.811371938612624e-04, 9.283084998137895e-05, -1.183952019580789e-05, 1.393680916084407e-06},
             {3.809842547481367e-01, -3.485811794495595e-02, 4.632304300567372e-03, -6.451614515904484e-04, 8.711496922911329e-05, -1.103414537876219e-05, 1.292244207478577e-06},
             {3.775441294376292e-01, -3.395066890901503e-02, 4.443874331299140e-03, -6.113935132504142e-04, 8.178695499262624e-05, -1.028728093935091e-05, 1.198540328469586e-06},
             {3.741928979735359e-01, -3.307991377295118e-02, 4.265262392962976e-03, -5.796839317432566e-04, 7.681868086582532e-05, -9.594472731053074e-06, 1.111959361173998e-06},
             {3.709269871232622e-01, -3.224394926892905e-02, 4.095872032864734e-03, -5.498940770639778e-04, 7.218415854976533e-05, -8.951617536021955e-06, 1.031940751715119e-06},
             {3.677430081525417e-01, -3.144098736268675e-02, 3.935146868219159e-03, -5.218953151841347e-04, 6.785936958461869e-05, -8.354934687429466e-06, 9.579692339596592e-07},
             {3.646377456929754e-01, -3.066934753171249e-02, 3.782567702388524e-03, -4.955682514847017e-04, 6.382211067651521e-05, -7.800940033445560e-06, 8.895710952659797e-07},
             {3.616081473536585e-01, -2.992744959808270e-02, 3.637649859065908e-03, -4.708020335276770e-04, 6.005185149825027e-05, -7.286422046497012e-06, 8.263107551747328e-07},
             {3.586513140235460e-01, -2.921380707410332e-02, 3.499940717328862e-03, -4.474937083852845e-04, 5.652960393680380e-05, -6.808419898131021e-06, 7.677876304698475e-07},
             {3.557644908152367e-01, -2.852702098217269e-02, 3.369017431863806e-03, -4.255476301390100e-04, 5.323780184658161e-05, -6.364203335057723e-06, 7.136332623185994e-07},
             {3.529450586045523e-01, -2.786577411329554e-02, 3.244484823922928e-03, -4.048749135211691e-04, 5.016019044596628e-05, -5.951254205886116e-06, 6.635086832827117e-07},
             {3.501905261237118e-01, -2.722882569144830e-02, 3.125973429733243e-03, -3.853929300020639e-04, 4.728172456677330e-05, -5.567249500813212e-06, 6.171020038953452e-07},
             {3.474985225690449e-01, -2.661500641354367e-02, 3.013137694140520e-03, -3.670248429285596e-04, 4.458847503212158e-05, -5.210045778179928e-06, 5.741262002371719e-07},
             {3.448667906871045e-01, -2.602321383708765e-02, 2.905654298246785e-03, -3.496991785974745e-04, 4.206754249856705e-05, -4.877664862463755e-06, 5.343170855328556e-07},
             {3.422931803057060e-01, -2.545240808977858e-02, 2.803220610696356e-03, -3.333494304016181e-04, 3.970697815358982e-05, -4.568280708023582e-06, 4.974314502402201e-07},
             {3.397756422789121e-01, -2.490160787728439e-02, 2.705553253088546e-03, -3.179136934196161e-04, 3.749571071010747e-05, -4.280207331825006e-06, 4.632453564301678e-07},
             {3.373122228172487e-01, -2.436988676726091e-02, 2.612386770751244e-03, -3.033343270345887e-04, 3.542347918600308e-05, -4.011887726526663e-06, 4.315525734668561e-07},
             {3.349010581765595e-01, -2.385636972935753e-02, 2.523472400804220e-03, -2.895576433629488e-04, 3.348077099907542e-05, -3.761883672765342e-06, 4.021631431047354e-07},
             {3.325403696808449e-01, -2.336022991250559e-02, 2.438576930079259e-03, -2.765336194545388e-04, 3.165876494666881e-05, -3.528866376299625e-06, 3.749020631308292e-07},
             {3.302284590562346e-01, -2.288068564221239e-02, 2.357481636050714e-03, -2.642156313903991e-04, 2.994927867482665e-05, -3.311607861913124e-06, 3.496080796053860e-07},
             {3.279637040549004e-01, -2.241699762189774e-02, 2.279981304469159e-03, -2.525602085559106e-04, 2.834472027441327e-05, -3.108973061689168e-06, 3.261325785993013e-07},
             {3.257445543492521e-01, -2.196846632352182e-02, 2.205883317886351e-03, -2.415268065060130e-04, 2.683804367151739e-05, -2.919912540494474e-06, 3.043385690993929e-07},
             {3.235695276781788e-01, -2.153442955386876e-02, 2.135006809715284e-03, -2.310775969667226e-04, 2.542270750681812e-05, -2.743455806291601e-06, 2.840997494589887e-07},
             {3.214372062284097e-01, -2.111426018387957e-02, 2.067181878888098e-03, -2.211772736342148e-04, 2.409263722367440e-05, -2.578705157276897e-06, 2.652996504171137e-07},
             {3.193462332352763e-01, -2.070736402937597e-02, 2.002248860559780e-03, -2.117928725401626e-04, 2.284219010768409e-05, -2.424830021846844e-06, 2.478308483000574e-07},
             {3.172953097882880e-01, -2.031317787239158e-02, 1.940057648660098e-03, -2.028936058506540e-04, 2.166612304152694e-05, -2.281061751063053e-06, 2.315942425590672e-07},
             {3.152831918279607e-01, -1.993116761313305e-02, 1.880467066422156e-03, -1.944507080565664e-04, 2.055956275821917e-05, -2.146688826643593e-06, 2.164983922917065e-07},
             {3.133086873213075e-01, -1.956082654333784e-02, 1.823344281315972e-03, -1.864372935964294e-04, 1.951797839361336e-05, -2.021052450582279e-06, 2.024589068460153e-07},
             {3.113706536042811e-01, -1.920167373248165e-02, 1.768564261091548e-03, -1.788282250291835e-04, 1.853715615521308e-05, -1.903542485312326e-06, 1.893978860196676e-07},
             {3.094679948802865e-01, -1.885325251892164e-02, 1.716009267890026e-03, -1.715999909443917e-04, 1.761317593925894e-05, -1.793593715908430e-06, 1.772434057441552e-07},
             {3.075996598646397e-01, -1.851512909864652e-02, 1.665568387615412e-03, -1.647305928619096e-04, 1.674238974169743e-05, -1.690682408182076e-06, 1.659290454896577e-07},
             {3.057646395655547e-01, -1.818689120484383e-02, 1.617137091974784e-03, -1.581994404322323e-04, 1.592140172116794e-05, -1.594323138687217e-06, 1.553934539424833e-07},
             {3.039619651929006e-01, -1.786814687199356e-02, 1.570616830793239e-03, -1.519872543031546e-04, 1.514704978363200e-05, -1.504065874634250e-06, 1.455799497962880e-07},
             {3.021907061865634e-01, -1.755852327865676e-02, 1.525914652392523e-03, -1.460759760683883e-04, 1.441638856880993e-05, -1.419493283524887e-06, 1.364361547630226e-07},
             {3.004499683568248e-01, -1.725766566355389e-02, 1.482942849990635e-03, -1.404486847597581e-04, 1.372667372826201e-05, -1.340218253983219e-06, 1.279136561518372e-07},
             {2.987388921296764e-01, -1.696523630991940e-02, 1.441618632234739e-03, -1.350895193868554e-04, 1.307534739382685e-05, -1.265881610781782e-06, 1.199676965858962e-07},
             {2.970566508904824e-01, -1.668091359348320e-02, 1.401863816122688e-03, -1.299836070668997e-04, 1.246002474327664e-05, -1.196150008457746e-06, 1.125568886300105e-07},
             {2.954024494198407e-01, -1.640439108976414e-02, 1.363604540700162e-03, -1.251169963232867e-04, 1.187848157752631e-05, -1.130713989193985e-06, 1.056429522877608e-07},
             {2.937755224159205e-01, -1.613537673667203e-02, 1.326771000041925e-03, -1.204765951641864e-04, 1.132864283059918e-05, -1.069286191812871e-06, 9.919047349686172e-08},
             {2.921751330979283e-01, -1.587359204870064e-02, 1.291297194137633e-03, -1.160501135827832e-04, 1.080857193985463e-05, -1.011599699805938e-06, 9.316668190721201e-08},
             {2.906005718857197e-01, -1.561877137926033e-02, 1.257120696405992e-03, -1.118260101485821e-04, 1.031646100977214e-05, -9.574065173085173e-07, 8.754124636865818e-08},
             {2.890511551509064e-01, -1.537066122794416e-02, 1.224182436656275e-03, -1.077934423848062e-04, 9.850621707901673e-06, -9.064761628325050e-07, 8.228608668604278e-08},
             {2.875262240351152e-01, -1.512901958974884e-02, 1.192426498404182e-03, -1.039422206504749e-04, 9.409476836474236e-06, -8.585943713994458e-07, 7.737520031868192e-08},
             {2.860251433313420e-01, -1.489361534348186e-02, 1.161799929530073e-03, -1.002627652674470e-04, 8.991552527651750e-06, -8.135618964765308e-07, 7.278450281092070e-08},
             {2.845473004246158e-01, -1.466422767678160e-02, 1.132252565342569e-03, -9.674606665268460e-05, 8.595471014517908e-06, -7.711934038155706e-07, 6.849168084073108e-08},
             {2.830921042884273e-01, -1.444064554535692e-02, 1.103736863179558e-03, -9.338364823438285e-05, 8.219943933698787e-06, -7.313164499348484e-07, 6.447605686520859e-08},
             {2.816589845336204e-01, -1.422266716422044e-02, 1.076207747742556e-03, -9.016753194755394e-05, 7.863766118983788e-06, -6.937705385708440e-07, 6.071846442601988e-08},
             {2.802473905066429e-01, -1.401009952884405e-02, 1.049622466419244e-03, -8.709020612024976e-05, 7.525809848516691e-06, -6.584062489654678e-07, 5.720113325499537e-08},
             {2.788567904342703e-01, -1.380275796430918e-02, 1.023940453903523e-03, -8.414459557598966e-05, 7.205019511069041e-06, -6.250844303488508e-07, 5.390758339075792e-08},
             {2.774866706120874e-01, -1.360046570065705e-02, 9.991232054727230e-04, -8.132403379120198e-05, 6.900406659612668e-06, -5.936754574314590e-07, 5.082252758206700e-08},
             {2.761365346341970e-01, -1.340305347276757e-02, 9.751341583280840e-04, -7.862223695869853e-05, 6.611045422895683e-06, -5.640585421358215e-07, 4.793178131294270e-08},
             {2.748059026617780e-01, -1.321035914321010e-02, 9.519385804476439e-04, -7.603327981945555e-05, 6.336068248014294e-06, -5.361210971805633e-07, 4.522217983907190e-08},
             {2.734943107282721e-01, -1.302222734661537e-02, 9.295034664403918e-04, -7.355157313535069e-05, 6.074661949077357e-06, -5.097581474805413e-07, 4.268150167490529e-08},
             {2.722013100791129e-01, -1.283850915421613e-02, 9.077974399272868e-04, -7.117184268507375e-05, 5.826064038996855e-06, -4.848717856493000e-07, 4.029839801661253e-08},
             {2.709264665440455e-01, -1.265906175729592e-02, 8.867906620087533e-04, -6.888910967425496e-05, 5.589559323219435e-06, -4.613706681862101e-07, 3.806232762802349e-08},
             {2.696693599402062e-01, -1.248374816837017e-02, 8.664547454097088e-04, -6.669867245899638e-05, 5.364476735853938e-06, -4.391695492026545e-07, 3.596349675516542e-08},
             {2.684295835042424e-01, -1.231243693900217e-02, 8.467626739222659e-04, -6.459608948950225e-05, 5.150186400159249e-06, -4.181888487915211e-07, 3.399280367029995e-08},
             {2.672067433518626e-01, -1.214500189323059e-02, 8.276887267932180e-04, -6.257716338743902e-05, 4.946096896746588e-06, -3.983542533738709e-07, 3.214178747874145e-08},
             {2.660004579633020e-01, -1.198132187565237e-02, 8.092084077283186e-04, -6.063792607705215e-05, 4.751652724129768e-06, -3.795963455676339e-07, 3.040258085144035e-08},
             {2.648103576932876e-01, -1.182128051326886e-02, 7.912983782085038e-04, -5.877462489597748e-05, 4.566331937435598e-06, -3.618502613171169e-07, 2.876786637356858e-08},
             {2.636360843041610e-01, -1.166476599026105e-02, 7.739363948345454e-04, -5.698370961713630e-05, 4.389643952171720e-06, -3.450553722003338e-07, 2.723083622435183e-08},
             {2.624772905209145e-01, -1.151167083491546e-02, 7.571012504364883e-04, -5.526182031814553e-05, 4.221127500949425e-06, -3.291549909950610e-07, 2.578515492634565e-08},
             {2.613336396069539e-01, -1.136189171797199e-02, 7.407727187025527e-04, -5.360577603932544e-05, 4.060348731980149e-06, -3.140960987351751e-07, 2.442492492341794e-08},
             {2.602048049594857e-01, -1.121532926171336e-02, 7.249315020992224e-04, -5.201256417568959e-05, 3.906899439013506e-06, -2.998290916273963e-07, 2.314465476603904e-08},
             {2.590904697234859e-01, -1.107188785915922e-02, 7.095591828700208e-04, -5.047933055227539e-05, 3.760395413167403e-06, -2.863075463259983e-07, 2.193922970023510e-08},
             {2.579903264232664e-01, -1.093147550276915e-02, 6.946381769150941e-04, -4.900337013584661e-05, 3.620474907822184e-06, -2.734880021802670e-07, 2.080388447286230e-08},
             {2.569040766107217e-01, -1.079400362209727e-02, 6.801516903673212e-04, -4.758211833939669e-05, 3.486797208416117e-06, -2.613297591773471e-07, 1.973417818083096e-08},
             {2.558314305293833e-01, -1.065938692987627e-02, 6.660836786932408e-04, -4.621314287902148e-05, 3.359041299593018e-06, -2.497946904023490e-07, 1.872597100565817e-08}}};
}
}  // namespace detail