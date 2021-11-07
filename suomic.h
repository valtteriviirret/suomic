// varatut sanat
#define aloitus main
#define palauta return
#define sijoitusoperaattori =
#define aliohjelma(...) (__VA_ARGS__)
#define tietue struct
#define unioni union
#define enumeraattori enum
#define nuolioperaattori ->

// valintarakenne
#define jos if
#define muuten else
#define valitse switch
#define tapaus case
#define lopeta break
#define vakio default

// toistorakenteet
#define tee do
#define kunnes while
#define silmukka for
#define jatka continue

// aritmeettiset operaattorit
#define lisaa_yksi ++
#define vahenna_yksi --
#define yhteenlasku +
#define vahennyslasku -
#define kertolasku *
#define jakolasku /
#define jakojaannos %

// vertailuoperaattorit
#define yhta_suuri_kuin ==
#define pienempi_kuin <
#define suurempi_kuin >
#define pienempi_tai_yhta_suuri_kuin <=
#define suurempi_tai_yhta_suuri_kuin >=
#define erisuuri_kuin !=

// loogiset operaattorit
#define ja &&
#define tai ||
#define ei !
#define negaatio !
#define kielto !

// tietotyypit
#define kokonaisluku int
#define merkki char
#define yksinkertaiset_tarkkuuden_liukuluku float
#define kaksinkertaisen_tarkkuuden_liukuluku double
#define arvoton void

// tietotyyppien määritteet
#define lyhyt short
#define pitka long
#define etumerkiton unsigned

// bittioperaatiot
#define JA &
#define TAI |
#define JOKO_TAI ^
#define KOMPLEMENTTI ~
#define SIIRTO_VASEMMALLE <<
#define SIIRTO_OIKEALLE >>

// muistinhallinta
#define osoitin *
#define viite &

// IO
#define tulosta_merkkijono(arg) printf(arg)
#define tulosta(arg, ...) printf(arg, __VA_ARGS__)
#define vastaanota(arg, ...) scanf(arg, __VA_ARGS__)

// taulukko
#define tyhja_taulukko []
#define taulukon_pituus(taulukko) sizeof(taulukko) / sizeof(taulukko[0])
