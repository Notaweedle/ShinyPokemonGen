//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <random>


class RandomNumGen {
	int shinyChances;
    int squareOrStarSparkles;
    bool hasShiny;
    bool hasShinySquare;
    int whatPokemon;
    long howManyResets=0;
    bool pokeNameWanted;
    int inputInt;
    std::string gen5Array[157];
    int gen5HpPokeValue[157];
    float oddsPerPokemon[157];

   

public: void 
        randomNumGen() {
        givePokemon();
        yesOrNoToNames();
        givePokemonOdds();
       
        srand(time(0));
        while (true) {
	        
			shinyChances = rand() % 4096 + 1;
            squareOrStarSparkles = -1;
			if (shinyChances == 4096) {
                squareOrStarSparkles = rand() % 16 + 1;
			}
            
            
            while (shinyChances == 4096 && squareOrStarSparkles == 16) {
                while (shinyChances == 4096) {
                    std::cout << "Square Sparkles? 16/" << squareOrStarSparkles <<"\n";
                    ++howManyResets;
                    if (squareOrStarSparkles == 16) {
                        hasShinySquare = true;
                        std::cout <<(" Square Sparkles\n ");

                        whatPokemonGot();
                    }
                    else {
                        whatPokemonGot();
                    }
                }

                if (hasShinySquare) {
                    return;
                }
            }

            
            std::cout <<(shinyChances);
            ++howManyResets;
            if (shinyChances == 4096) {
                std::cout <<("/4096 = Shiny");
                hasShiny = true;
            }
            else {
                std::cout <<("\n");
            }
        }
    }

private:
    void whatPokemonGot() {
        

        do {
         /*   if (pokeNameWanted) {
                whatPokemon = readConsoleInt();
            }*/
            howManyResets++;
            if (whatPokemon == 1 || whatPokemon >= 145|| whatPokemon == 0) {
                if (hasShinySquare) {
                    std::cout << "\n" << gen5Array[whatPokemon] << " Wow it is a Legendary and with Shiny\n";
                    std::cout << howManyResets << " that is how Many Resets you would have to have done\n\n";
                    shinyChances = 0;
                    return;
                }
                else {
                    std::cout << "\n" << gen5Array[whatPokemon] << " Wow it is a Legendary\n";
                    std::cout << howManyResets << " that is how Many Resets you would have to have done\n\n";
                    shinyChances = 0;
                    hasShinySquare = false;
                }
            }
            else {
                if (hasShinySquare) {
                    std::cout << "\nIt a shiny " << gen5Array[whatPokemon] << " With Square Sparkles\n";
                    std::cout << howManyResets << " that is how Many Resets you need.\n\n";
                    shinyChances = 0;
                    return;
                }
                else {
                    std::cout << "\nIt a shiny " << gen5Array[whatPokemon] << " With no Square Sparkles Sad\n";
                    std::cout << howManyResets << " that is how Many Resets you need.\n\n";
                    shinyChances = 0;
                    hasShinySquare = false;
                }
            }

        } while (true); 
    }

private:
	void givePokemon() {
        gen5Array[0] = "Pokemon: Mew";
        gen5Array[1] = "Pokemon: Victini ";
        gen5Array[2] = "Pokemon: Snivy";
        gen5Array[3] = "Pokemon: Servine";
        gen5Array[4] = "Pokemon: Serperior";
        gen5Array[5] = "Pokemon: Tepig";
        gen5Array[6] = "Pokemon: Pignite";
        gen5Array[7] = "Pokemon: Emboar";
        gen5Array[8] = "Pokemon: Oshawott";
        gen5Array[9] = "Pokemon: Dewott";
        gen5Array[10] = "Pokemon: Samurott";
        gen5Array[11] = "Pokemon: Patrat";
        gen5Array[12] = "Pokemon: Watchog";
        gen5Array[13] = "Pokemon: Lillipup";
        gen5Array[14] = "Pokemon: Herdier";
        gen5Array[15] = "Pokemon: Stoutland";
        gen5Array[16] = "Pokemon: Purrloin";
        gen5Array[17] = "Pokemon: Liepard";
        gen5Array[18] = "Pokemon: Pansage";
        gen5Array[19] = "Pokemon: Simisage";
        gen5Array[20] = "Pokemon: Pansear";
        gen5Array[21] = "Pokemon: Simisear";
        gen5Array[22] = "Pokemon: Panpour";
        gen5Array[23] = "Pokemon: Simipour";
        gen5Array[24] = "Pokemon: Munna";
        gen5Array[25] = "Pokemon: Musharna";
        gen5Array[26] = "Pokemon: Pidove";
        gen5Array[27] = "Pokemon: Tranquill";
        gen5Array[28] = "Pokemon: Unfezant";
        gen5Array[29] = "Pokemon: Blitzle";
        gen5Array[30] = "Pokemon: Zebstrika";
        gen5Array[31] = "Pokemon: Roggenrola";
        gen5Array[32] = "Pokemon: Boldore";
        gen5Array[33] = "Pokemon: Gigalith";
        gen5Array[34] = "Pokemon: Woobat";
        gen5Array[35] = "Pokemon: Swoobat";
        gen5Array[36] = "Pokemon: Drilbur";
        gen5Array[37] = "Pokemon: Excadrill";
        gen5Array[38] = "Pokemon: Audino";
        gen5Array[39] = "Pokemon: Timburr";
        gen5Array[40] = "Pokemon: Gurdurr";
        gen5Array[41] = "Pokemon: Conkeldurr";
        gen5Array[42] = "Pokemon: Tympole";
        gen5Array[43] = "Pokemon: Palpitoad";
        gen5Array[44] = "Pokemon: Seismitoad";
        gen5Array[45] = "Pokemon: Throh";
        gen5Array[46] = "Pokemon: Sawk";
        gen5Array[47] = "Pokemon: Sewaddle";
        gen5Array[48] = "Pokemon: Swadloon";
        gen5Array[49] = "Pokemon: Leavanny";
        gen5Array[50] = "Pokemon: Venipede";
        gen5Array[51] = "Pokemon: Whirlipede";
        gen5Array[52] = "Pokemon: Scolipede";
        gen5Array[53] = "Pokemon: Cottonee";
        gen5Array[54] = "Pokemon: Whimsicott";
        gen5Array[55] = "Pokemon: Petilil";
        gen5Array[56] = "Pokemon: Lilligant";
        gen5Array[57] = "Pokemon: Basculin";
        gen5Array[58] = "Pokemon: Sandile";
        gen5Array[59] = "Pokemon: Krokorok";
        gen5Array[60] = "Pokemon: Krookodile";
        gen5Array[61] = "Pokemon: Darumaka";
        gen5Array[62] = "Pokemon: Darmanitan";
        gen5Array[63] = "Pokemon: Maractus";
        gen5Array[64] = "Pokemon: Dwebble";
        gen5Array[65] = "Pokemon: Crustle";
        gen5Array[66] = "Pokemon: Scraggy";
        gen5Array[67] = "Pokemon: Scrafty";
        gen5Array[68] = "Pokemon: Sigilyph";
        gen5Array[69] = "Pokemon: Yamask";
        gen5Array[70] = "Pokemon: Cofagrigus";
        gen5Array[71] = "Pokemon: Tirtouga";
        gen5Array[72] = "Pokemon: Carracosta";
        gen5Array[73] = "Pokemon: Archen";
        gen5Array[74] = "Pokemon: Archeops";
        gen5Array[75] = "Pokemon: Trubbish";
        gen5Array[76] = "Pokemon: Garbodor";
        gen5Array[77] = "Pokemon: Zorua";
        gen5Array[78] = "Pokemon: Zoroark";
        gen5Array[79] = "Pokemon: Minccino";
        gen5Array[80] = "Pokemon: Cinccino";
        gen5Array[81] = "Pokemon: Gothita";
        gen5Array[82] = "Pokemon: Gothorita";
        gen5Array[83] = "Pokemon: Gothitelle";
        gen5Array[84] = "Pokemon: Solosis";
        gen5Array[85] = "Pokemon: Duosion";
        gen5Array[86] = "Pokemon: Reuniclus";
        gen5Array[87] = "Pokemon: Ducklett";
        gen5Array[88] = "Pokemon: Swanna";
        gen5Array[89] = "Pokemon: Vanillite";
        gen5Array[90] = "Pokemon: Vanillish";
        gen5Array[91] = "Pokemon: Vanilluxe";
        gen5Array[92] = "Pokemon: Deerling";
        gen5Array[93] = "Pokemon: Sawsbuck";
        gen5Array[94] = "Pokemon: Karrablast";
        gen5Array[95] = "Pokemon: Escavalier";
        gen5Array[96] = "Pokemon: Emolga";
        gen5Array[97] = "Pokemon: Foongus";
        gen5Array[98] = "Pokemon: Amoonguss SUS";
        gen5Array[99] = "Pokemon: Frillish";
        gen5Array[100] = "Pokemon: Jellicent";
        gen5Array[101] = "Pokemon: Alomomola";
        gen5Array[102] = "Pokemon: Joltik";
        gen5Array[103] = "Pokemon: Galvantula";
        gen5Array[104] = "Pokemon: Ferroseed";
        gen5Array[105] = "Pokemon: Ferrothorn";
        gen5Array[106] = "Pokemon: Klink";
        gen5Array[107] = "Pokemon: Klang";
        gen5Array[108] = "Pokemon: Klinklang";
        gen5Array[109] = "Pokemon: Tynamo";
        gen5Array[110] = "Pokemon: Eelektrik";
        gen5Array[111] = "Pokemon: Eelektross";
        gen5Array[112] = "Pokemon: Elgyem";
        gen5Array[113] = "Pokemon: Beheeyem";
        gen5Array[114] = "Pokemon: Litwick";
        gen5Array[115] = "Pokemon: Lampent";
        gen5Array[116] = "Pokemon: Chandelure";
        gen5Array[117] = "Pokemon: Axew";
        gen5Array[118] = "Pokemon: Fraxure";
        gen5Array[119] = "Pokemon: Haxorus";
        gen5Array[120] = "Pokemon: Cubchoo";
        gen5Array[121] = "Pokemon: Beartic";
        gen5Array[122] = "Pokemon: Cryogonal";
        gen5Array[123] = "Pokemon: Shelmet";
        gen5Array[124] = "Pokemon: Accelgor";
        gen5Array[125] = "Pokemon: Stunfisk";
        gen5Array[126] = "Pokemon: Mienfoo";
        gen5Array[127] = "Pokemon: Mienshao";
        gen5Array[128] = "Pokemon: Druddigon";
        gen5Array[129] = "Pokemon: Golett";
        gen5Array[130] = "Pokemon: Golurk";
        gen5Array[131] = "Pokemon: Pawniard";
        gen5Array[132] = "Pokemon: Bisharp";
        gen5Array[133] = "Pokemon: Bouffalant";
        gen5Array[134] = "Pokemon: Rufflet";
        gen5Array[135] = "Pokemon: Braviary";
        gen5Array[136] = "Pokemon: Vullaby";
        gen5Array[137] = "Pokemon: Mandibuzz";
        gen5Array[138] = "Pokemon: Heatmor";
        gen5Array[139] = "Pokemon: Durant";
        gen5Array[140] = "Pokemon: Deino";
        gen5Array[141] = "Pokemon: Zweilous";
        gen5Array[142] = "Pokemon: Hydreigon";
        gen5Array[143] = "Pokemon: Larvesta";
        gen5Array[144] = "Pokemon: Volcarona";
        gen5Array[145] = "Pokemon: Cobalion";
        gen5Array[146] = "Pokemon: Terrakion";
        gen5Array[147] = "Pokemon: Virizion";
        gen5Array[148] = "Pokemon: Tornadus";
        gen5Array[149] = "Pokemon: Thundurus";
        gen5Array[150] = "Pokemon: Reshiram";
        gen5Array[151] = "Pokemon: Zekrom";
        gen5Array[152] = "Pokemon: Landorus";
        gen5Array[153] = "Pokemon: Kyurem";
        gen5Array[154] = "Pokemon: Keldeo";
        gen5Array[155] = "Pokemon: Meloetta";
        gen5Array[156] = "Pokemon: Genesect";
    }
	void givePokemonOdds() {
		// this was going to be used but was leftover data from when i was makeing as a final project for intro to CSC
        float  oddsPerPokemon[157]{};
        oddsPerPokemon[0] = 0.0F;
        oddsPerPokemon[1] = 3.0F;
        oddsPerPokemon[2] = 45.0F;
        oddsPerPokemon[3] = 45.0F;
        oddsPerPokemon[4] = 45.0F;
        oddsPerPokemon[5] = 45.0F;
        oddsPerPokemon[6] = 45.0F;
        oddsPerPokemon[7] = 45.0F;
        oddsPerPokemon[8] = 45.0F;
        oddsPerPokemon[9] = 45.0F;
        oddsPerPokemon[10] = 45.0F;
        oddsPerPokemon[11] = 255.0F;
        oddsPerPokemon[12] = 255.0F;
        oddsPerPokemon[13] = 255.0F;
        oddsPerPokemon[14] = 120.0F;
        oddsPerPokemon[15] = 45.0F;
        oddsPerPokemon[16] = 255.0F;
        oddsPerPokemon[17] = 90.0F;
        oddsPerPokemon[18] = 190.0F;
        oddsPerPokemon[19] = 75.0F;
        oddsPerPokemon[20] = 190.0F;
        oddsPerPokemon[21] = 75.0F;
        oddsPerPokemon[22] = 190.0F;
        oddsPerPokemon[23] = 75.0F;
        oddsPerPokemon[24] = 190.0F;
        oddsPerPokemon[25] = 75.0F;
        oddsPerPokemon[26] = 255.0F;
        oddsPerPokemon[27] = 120.0F;
        oddsPerPokemon[28] = 45.0F;
        oddsPerPokemon[29] = 190.0F;
        oddsPerPokemon[30] = 75.0F;
        oddsPerPokemon[31] = 255.0F;
        oddsPerPokemon[32] = 120.0F;
        oddsPerPokemon[33] = 45.0F;
        oddsPerPokemon[34] = 190.0F;
        oddsPerPokemon[35] = 45.0F;
        oddsPerPokemon[36] = 120.0F;
        oddsPerPokemon[37] = 60.0F;
        oddsPerPokemon[38] = 255.0F;
        oddsPerPokemon[39] = 180.0F;
        oddsPerPokemon[40] = 90.0F;
        oddsPerPokemon[41] = 45.0F;
        oddsPerPokemon[42] = 255.0F;
        oddsPerPokemon[43] = 120.0F;
        oddsPerPokemon[44] = 45.0F;
        oddsPerPokemon[45] = 45.0F;
        oddsPerPokemon[46] = 45.0F;
        oddsPerPokemon[47] = 255.0F;
        oddsPerPokemon[48] = 120.0F;
        oddsPerPokemon[49] = 45.0F;
        oddsPerPokemon[50] = 255.0F;
        oddsPerPokemon[51] = 120.0F;
        oddsPerPokemon[52] = 45.0F;
        oddsPerPokemon[53] = 190.0F;
        oddsPerPokemon[54] = 75.0F;
        oddsPerPokemon[55] = 190.0F;
        oddsPerPokemon[56] = 75.0F;
        oddsPerPokemon[57] = 190.0F;
        oddsPerPokemon[58] = 180.0F;
        oddsPerPokemon[59] = 90.0F;
        oddsPerPokemon[60] = 45.0F;
        oddsPerPokemon[61] = 120.0F;
        oddsPerPokemon[62] = 60.0F;
        oddsPerPokemon[63] = 255.0F;
        oddsPerPokemon[64] = 190.0F;
        oddsPerPokemon[65] = 75.0F;
        oddsPerPokemon[66] = 180.0F;
        oddsPerPokemon[67] = 90.0F;
        oddsPerPokemon[68] = 45.0F;
        oddsPerPokemon[69] = 190.0F;
        oddsPerPokemon[70] = 90.0F;
        oddsPerPokemon[71] = 45.0F;
        oddsPerPokemon[72] = 45.0F;
        oddsPerPokemon[73] = 45.0F;
        oddsPerPokemon[74] = 45.0F;
        oddsPerPokemon[75] = 190.0F;
        oddsPerPokemon[76] = 60.0F;
        oddsPerPokemon[77] = 75.0F;
        oddsPerPokemon[78] = 45.0F;
        oddsPerPokemon[79] = 255.0F;
        oddsPerPokemon[80] = 60.0F;
        oddsPerPokemon[81] = 200.0F;
        oddsPerPokemon[82] = 100.0F;
        oddsPerPokemon[83] = 50.0F;
        oddsPerPokemon[84] = 200.0F;
        oddsPerPokemon[85] = 100.0F;
        oddsPerPokemon[86] = 50.0F;
        oddsPerPokemon[87] = 190.0F;
        oddsPerPokemon[88] = 45.0F;
        oddsPerPokemon[89] = 255.0F;
        oddsPerPokemon[90] = 120.0F;
        oddsPerPokemon[91] = 45.0F;
        oddsPerPokemon[92] = 190.0F;
        oddsPerPokemon[93] = 75.0F;
        oddsPerPokemon[94] = 200.0F;
        oddsPerPokemon[95] = 75.0F;
        oddsPerPokemon[96] = 200.0F;
        oddsPerPokemon[97] = 190.0F;
        oddsPerPokemon[98] = 75.0F;
        oddsPerPokemon[99] = 190.0F;
        oddsPerPokemon[100] = 60.0F;
        oddsPerPokemon[101] = 75.0F;
        oddsPerPokemon[102] = 190.0F;
        oddsPerPokemon[103] = 75.0F;
        oddsPerPokemon[104] = 255.0F;
        oddsPerPokemon[105] = 90.0F;
        oddsPerPokemon[106] = 130.0F;
        oddsPerPokemon[107] = 60.0F;
        oddsPerPokemon[108] = 30.0F;
        oddsPerPokemon[109] = 190.0F;
        oddsPerPokemon[110] = 60.0F;
        oddsPerPokemon[111] = 30.0F;
        oddsPerPokemon[112] = 255.0F;
        oddsPerPokemon[113] = 90.0F;
        oddsPerPokemon[114] = 190.0F;
        oddsPerPokemon[115] = 90.0F;
        oddsPerPokemon[116] = 45.0F;
        oddsPerPokemon[117] = 75.0F;
        oddsPerPokemon[118] = 60.0F;
        oddsPerPokemon[119] = 45.0F;
        oddsPerPokemon[120] = 120.0F;
        oddsPerPokemon[121] = 60.0F;
        oddsPerPokemon[122] = 25.0F;
        oddsPerPokemon[123] = 200.0F;
        oddsPerPokemon[124] = 75.0F;
        oddsPerPokemon[125] = 75.0F;
        oddsPerPokemon[126] = 180.0F;
        oddsPerPokemon[127] = 45.0F;
        oddsPerPokemon[128] = 45.0F;
        oddsPerPokemon[129] = 190.0F;
        oddsPerPokemon[130] = 90.0F;
        oddsPerPokemon[131] = 120.0F;
        oddsPerPokemon[132] = 45.0F;
        oddsPerPokemon[133] = 45.0F;
        oddsPerPokemon[134] = 190.0F;
        oddsPerPokemon[135] = 60.0F;
        oddsPerPokemon[136] = 190.0F;
        oddsPerPokemon[137] = 60.0F;
        oddsPerPokemon[138] = 90.0F;
        oddsPerPokemon[139] = 90.0F;
        oddsPerPokemon[140] = 45.0F;
        oddsPerPokemon[141] = 45.0F;
        oddsPerPokemon[142] = 45.0F;
        oddsPerPokemon[143] = 45.0F;
        oddsPerPokemon[144] = 15.0F;
        oddsPerPokemon[145] = 3.0F;
        oddsPerPokemon[146] = 3.0F;
        oddsPerPokemon[147] = 3.0F;
        oddsPerPokemon[148] = 3.0F;
        oddsPerPokemon[149] = 3.0F;
        oddsPerPokemon[150] = 3.0F;
        oddsPerPokemon[151] = 3.0F;
        oddsPerPokemon[152] = 3.0F;
        oddsPerPokemon[153] = 3.0F;
        oddsPerPokemon[154] = 3.0F;
        oddsPerPokemon[155] = 3.0F;
        oddsPerPokemon[156] = 3.0F;
    }
     void givePokemonHp() {
	     // also junk code that i was planing to help make it so i can catch pokemon but it is unused
         int gen5HpPokeValue[157]{};
        gen5HpPokeValue[1] = 404;
        gen5HpPokeValue[2] = 294;
        gen5HpPokeValue[3] = 324;
        gen5HpPokeValue[4] = 354;
        gen5HpPokeValue[5] = 334;
        gen5HpPokeValue[6] = 384;
        gen5HpPokeValue[7] = 424;
        gen5HpPokeValue[8] = 314;
        gen5HpPokeValue[9] = 354;
        gen5HpPokeValue[10] = 394;
        gen5HpPokeValue[11] = 294;
        gen5HpPokeValue[12] = 324;
        gen5HpPokeValue[13] = 294;
        gen5HpPokeValue[14] = 334;
        gen5HpPokeValue[15] = 374;
        gen5HpPokeValue[16] = 286;
        gen5HpPokeValue[17] = 332;
        gen5HpPokeValue[18] = 304;
        gen5HpPokeValue[19] = 354;
        gen5HpPokeValue[20] = 304;
        gen5HpPokeValue[21] = 354;
        gen5HpPokeValue[22] = 304;
        gen5HpPokeValue[23] = 354;
        gen5HpPokeValue[24] = 356;
        gen5HpPokeValue[25] = 436;
        gen5HpPokeValue[26] = 304;
        gen5HpPokeValue[27] = 328;
        gen5HpPokeValue[28] = 364;
        gen5HpPokeValue[29] = 294;
        gen5HpPokeValue[30] = 354;
        gen5HpPokeValue[31] = 314;
        gen5HpPokeValue[32] = 344;
        gen5HpPokeValue[33] = 374;
    }

private:
	int readConsoleInt() {
        if (pokeNameWanted) {
            std::cout <<("give me a Num Value 1-156: Or (-1) For random PKM\n");
            std::string input;
            std::cin >> input;
			
            if (input == "-1")
            {
                srand(time(0)); 
                int randomNumber = rand() % 156 + 1; 
                input = randomNumber;
                whatPokemon = randomNumber;
                inputInt = randomNumber;
				std::cout << ("Random Pokemon: " + gen5Array[inputInt] + "\n");
            }
            input = inputInt;
            return inputInt;
        }
    }

     void yesOrNoToNames() {
        std::cout <<("do you need the names for Gen 5 Pokemon? Y or N \n");
        char yesOrNah ;
        std::cin >> yesOrNah;
        if ( yesOrNah== 'n' || yesOrNah== 'N' ) {
            readConsoleInt();
        }
        else {
            for (int i = 0; i < 157; i++) {
                std::cout << "Pokemon [" << i << "]: " << gen5Array[i] << std::endl;
            }
            readConsoleInt();
        }

    }

private:
// the unused catch odds math stuff yaa all in java still as you know it was made in java 
	/*void chatchingOddsToNames() {
        Random rand = new Random();
        int ultraBall = rand.nextInt(256);
        std::cout <<("What to try and Catch it? Or want to auto catch. ");
        System.console().readLine();
        if (("yes") && ("y")) {
        }

        float shake = oddsPerPokemon[whatPokemon] * 100.0F / (float)ultraBall;
    }

    public String getGen5Array(int index) {
        return gen5Array[index];
    }*/
};
int main() {
	RandomNumGen rng;
	rng.randomNumGen(); // Start the random number generation process
    return 0;
}
