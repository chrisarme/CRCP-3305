#include <iostream>
#include <string>

using namespace std;

int currentSlide = 0;

void asciiSlide1()
{
	cout << R"(               ...
             ;::::;
           ;::::; :;
         ;:::::'   :;
        ;:::::;     ;.
       ,:::::'       ;           OOO\
       ::::::;       ;          OOOOO\
       ;:::::;       ;         OOOOOOOO
      ,;::::::;     ;'         / OOOOOOO
    ;:::::::::`. ,,,;.        /  / DOOOOOO
  .';:::::::::::::::::;,     /  /     DOOOO
 ,::::::;::::::;;;;::::;,   /  /        DOOO
;`::::::`'::::::;;;::::: ,#/  /          DOOO
:`:::::::`;::::::;;::: ;::#  /            DOOO
::`:::::::`;:::::::: ;::::# /              DOO
`:`:::::::`;:::::: ;::::::#/               DOO
 :::`:::::::`;; ;:::::::::##                OO
 ::::`:::::::`;::::::::;:::#                OO
 `:::::`::::::::::::;'`:;::#                O
  `:::::`::::::::;' /  / `:#
   ::::::`:::::;'  /  /   `#

)" << '\n';

	currentSlide = 1;
}

void asciiSlide2()
{
	cout << R"(
quu..__
 $$$b  `---.__
  "$$b        `--.                          ___.---uuudP
   `$$b           `.__.------.__     __.---'      $$$$"              .
     "$b          -'            `-.-'            $$$"              .'|
       ".                                       d$"             _.'  |
         `.   /                              ..."             .'     |
           `./                           ..::-'            _.'       |
            /                         .:::-'            .-'         .'
           :                          ::''\          _.'            |
          .' .-.             .-.           `.      .'               |
          : /'$$|           .@"$\           `.   .'              _.-'
         .'|$u$$|          |$$,$$|           |  <            _.-'
         | `:$$:'          :$$$$$:           `.  `.       .-'
         :                  `"--'             |    `-.     \
        :##.       ==             .###.       `.      `.    `\
        |##:                      :###:        |        >     >
        |#'     `..'`..'          `###'        x:      /     /
         \                                   xXX|     /    ./
          \                                xXXX'|    /   ./
          /`-.                                  `.  /   /
         :    `-  ...........,                   | /  .'
         |         ``:::::::'       .            |<    `.
         |             ```          |           x| \ `.:``.
         |                         .'    /'   xXX|  `:`M`M':.
         |    |                    ;    /:' xXXX'|  -'MMMMM:'
         `.  .'                   :    /:'       |-'MMMM.-'
          |  |                   .'   /'        .'MMM.-'
          `'`'                   :  ,'          |MMM<
            |                     `'            |tbap\
             \                                  :MM.-'
              \                 |              .''
               \.               `.            /
                /     .:::::::.. :           /
               |     .:::::::::::`.         /
               |   .:::------------\       /
              /   .''               >::'  /
              `',:                 :    .' 

)" << '\n';

	currentSlide = 2;
}

void asciiSlide3()
{
	cout << R"(                                                                       xmHTTTTT%ms.
                                                                    z?!!!!!!!!!!!!!!?m
                                                                  z!!!!!!!!!!!!!!!!!!!!%
                                                               eHT!!!!!!!!!!!!!!!!!!!!!!!L
                                                              M!!!!!!!!!!!!!!!!!!!!!!!!!!!>
                                                           z!!!!!!!!!!XH!!!!!!!!!!!!!!!!!!X
                                                           "$$F*tX!!W?!!!!!!!!!!!!!!!!!!!!!
                                                           >     M!!!   4$$NX!!!!!!!!!!!!!t
                                                           tmem?!!!!?    ""   "X!!!!!!!!!!F
                                                      um@T!!!!!!!!!!!!s.      M!!!!!!!!!!F
                                                   .#!!!!!!!!!!!!!!!XX!!!!?mM!!!!!!!!!!t~
                                                  M!!!@!!!!X!!!!!!!!!!*U!!!!!!!!!!!!!!@
                                                 M!!t%!!!W?!!!XX!!!!!!!!!!!!!!!!!!!!X"
                                                :!!t?!!!@!!!!W?!!!!XWWUX!!!!!!!!!!!t
                                                4!!$!!!M!!!!8!!!!!@$$$$$$NX!!!!!!!!-
                                                 *P*!!!$!!!!E!!!!9$$$$$$$$%!!!!!!!K
                                                    "H*"X!!X&!!!!R**$$$*#!!!!!!!!!>
                                                        'TT!?W!!9!!!!!!!!!!!!!!!!M
                                                        '!!!!!!!!!!!!!!!!!!!!!!!!F
                                                        '!!!!!!!!!!!!!!!!!!!!!!!!>
                                                        '!!!!!!!!!!!!!!!!!!!!!!!M
                                                        J!!!!!!!!!!!!!!!!!!!!!!!F K!%n.
         @!!!!!??m.                                  x?F'X!!!!!!!!!!!!!!!!!!!!HP X!!!!!!?m.
Z?L      '%!!!!!!!!!?s                            .@!\~ MB!!!!!!!!!!!!!!!!!U#!F X!!!!!!!!X#!%.
E!!N!k     't!!!!!!!!!?:                       zTX?!t~ M!t!!!!!!!!!!!!!!UM!!!F 4!!!!!!!!t%!!!!?.
!!!!!!hzh.   "X!!!!!!!!!>                  .+?!!3?!X  Z!!!B!!!!!!!!!!UM!!!!!" 4!!!!!!!!t?!!!!!!!h
?!!!!!!!!!*!?L %!!!!!!!!?               .+?!!!!3!!\  P!!!!?X!!!!!!U#!!!!!!X" 4!!!!!!!!\%!!!!!!!!!?
'X!!!!!!!!!!!!?TTTT*U!!!!k            z?!!!!!!t!!!- J!!!!!!9!!X@T!!!!!!!!X~ d!!!!!!!!!%!!!!!!!!!!!!L
 4!!!!!!!!!!!!!!!!!!!!!!!M          'W!!!!!!!X%!!P  %!!!!!!!T!!!!!!!!!!!X~ J!!!!!!!!!P!!!!!!!!!!!!!!\
  5!!!!!!!!!!!!!!!!!!!!!!!?m.       .@Ti!!!!!Z!!t  d!!!!!!!!!!!!!!!!!!!X-.JUUUUX!!!!J!!!!!!!!!!!!!!!!!
   %!!!!!!!!!!!!!!!!!!!!!!!!!!!TnzT!!!!!#/!!?!!X"  ^"=4UU!!!!!!!!!!U@T!!!!!!!!!!!!Th2!!!!!!!!!!!!!!!!!!
    ^t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!?K!K!!f               `""#X!!!!!!!!!!!!!!!!!?t!!!!!!!!!!!!!!!!(>
       "U!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!$!!F                      "tX!!!!!!!!!!!!!!!!b!!!!!!!!!!!!!!!(>
          '"*tUUX!X!!!!!!!!!!!!!!!!!!!!!!!!$!Z                          ^4!!!!!!!!!!!!!!!N!!!!!!!!!!!!!!!!
                 %!!!!!!!!!!!!!!!!!!!!!!!!X!X                              %W@@WX!!!!!!!!!N!!!!!!!!!!!!!!!
                  "X!!!!!!!!!!!!!!!!!!!!!@!!*        ..    ..  :m.. ETThmuM!!!!!!!!!!!!!!!!@m@*TTTT?!!!W!!
                    %!!!!!!!!!!!!!!!!!!W?!!X         M!!!TT?!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!9UU!!!!!!!!!M!f
                     't!!!!!!!!!!!!!!!P!!!!X          5!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!?NX!!!!!!L
                       "W!!!!!!!!!!!X#!!!!!R           "X!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!R!!!!!t
                         ^*X!!!!!!!t%!!!!!h              %X!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>
                             "*U!!M!!!!!!X~ :?!!!T!+s...   *X!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                                 :?!!!!!!> :?!!!!!!!!!!!!!!!!?tX!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>
                                 %!!!!!!F .%!!!!!!!!!!!!!!!!!!!!!#4U!!!!!!!!!!!!U!!!!!!!!!!!!!!!!!!!!!!!!~
                                K!!!!!!Z  K!!!!!!!!!!!!!!!!!!!!!!!  F!!!!!?!!?X!!!!!!!!!!!!!!!!!!!!!!!!!Z
                               X!!!!!!t  H!!!!!!!!!!!!!!!!!!!!!!!!> !!!!!!!!!!!W!!!!!!!!!!!!!!!!!!!!!!!t
                               %!!!!!!F :!!!!!!!!!!!!!!!!!!!!!!!!!> !!!!!!!!!!!!#X!!!!!!!!!!!!!!!!!!!!X
                              '!!!!!!X  K!!!!!!!!!!!!!!!!!!!!!!!!!> K!!!!!!!!!!!!!?W!!!!!!!!!!!!!!!!X"

)" << '\n';

	currentSlide = 3;
}

void asciiSlide4()
{
	cout << R"(.    .        .      .             . .     .        .          .          .
         .                 .                    .                .
  .               A long time ago in a galaxy far, far away...   .
     .               .           .               .        .             .
     .      .            .                 .                                .
 .      .         .         .   . :::::+::::...      .          .         .
     .         .      .    ..::.:::+++++:::+++++:+::.    .     .
                        .:.  ..:+:..+|||+..::|+|+||++|:.             .     .
            .   .    :::....:::::::::++||||O||O#OO|OOO|+|:.    .
.      .      .    .:..:..::+||OO#|#|OOO+|O||####OO###O+:+|+               .
                 .:...:+||O####O##||+|OO|||O#####O#O||OO|++||:     .    .
  .             ..::||+++|+++++|+::|+++++O#O|OO|||+++..:OOOOO|+  .         .
     .   .     +++||++:.:++:..+#|. ::::++|+++||++O##O+:.++|||#O+    .
.           . ++++++++...:+:+:.:+: ::..+|OO++O|########|++++||##+            .
  .       .  :::+++|O+||+::++++:::+:::+++::+|+O###########OO|:+OO       .  .
     .       +:+++|OO+|||O:+:::::.. .||O#OOO||O||#@###@######:+|O|  .
 .          ::+:++|+|O+|||++|++|:::+O#######O######O@############O
          . ++++: .+OO###O++++++|OO++|O#@@@####@##################+         .
      .     ::::::::::::::::::::++|O+..+#|O@@@@#@###O|O#O##@#OO####     .
 .        . :. .:.:. .:.:.: +.::::::::  . +#:#@:#@@@#O||O#O@:###:#| .      .
                           `. .:.:.:.:. . :.:.:%::%%%:::::%::::%:::
.      .                                      `.:.:.:.:   :.:.:.:.  .   .
           .                                                                .
      .
.          .                                                       .   .
                                                                             .
    .        .                                                           .
    .     .                                                           .      .
  .     .                                                        .
              .   A terrible civil war burns throughout the  .        .     .
                 galaxy: a rag-tag group of freedom fighters   .  .
     .       .  has risen from beneath the dark shadow of the            .
.        .     evil monster the Galactic Empire has become.                  .
   .             Imperial  forces  have  instituted  a reign of   .      .
             terror,  and every  weapon in its arsenal has  been
          . turned upon the Rebels  and  their  allies:  tyranny, .   .
   .       oppression, vast fleets, overwhelming armies, and fear.        .  .
.      .  Fear  keeps  the  individual systems in line,  and is the   .
         prime motivator of the New Order.             .
    .      Outnumbered and outgunned,  the Rebellion burns across the   .    .
.      vast reaches of space and a thousand-thousand worlds, with only     .
    . their great courage - and the mystical power known as the Force -
     flaming a fire of hope.                                    .
       This is a  galaxy  of wondrous aliens,  bizarre monsters,  strange   .
 . Droids, powerful weapons, great heroes, and terrible villains.  It is a
  galaxy of fantastic worlds,  magical devices, vast fleets, awesome machi-  .
 nery, terrible conflict, and unending hope. 



  )" << '\n';

	currentSlide = 4;
}

int main()
{
	bool running = true;
	string userChoice;

	while (running)
	{
		// NEED TO MAKE THIS LOOP WITHOUT INPUT

		cout << "1 = Slide 1, 2 = Slide 2, 3 = Slide 3, 4 = Slide 4, x = Exit, leave the prompt completely empty for the next slide" << '\n';
		cout << "Choice: ";

		getline(cin, userChoice);

		if (!userChoice.empty())
		{
			switch (userChoice.front())
			{
			case '1': asciiSlide1(); break;
			case '2': asciiSlide2(); break;
			case '3': asciiSlide3(); break;
			case '4': asciiSlide4(); break;
			case 'x': exit(0); break;
			}
		}
		else
		{
			switch (currentSlide + 1)
			{
			case 1: asciiSlide1(); break;
			case 2: asciiSlide2(); break;
			case 3: asciiSlide3(); break;
			case 4: asciiSlide4(); break;
			case 5:
			default:
				asciiSlide1();
				break;
			}
		}
	}
}