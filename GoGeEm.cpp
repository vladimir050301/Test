#include<iostream>
#include<string>
#include<conio.h>

#define KEY_X 120

using namespace std;

int main(){
	int archerA=10,archerMD=55,archerRD=55;
	int armedCMA=3,armedCMD=9,armedCRD=9;
	int assasinA=152,assasinMD=11,assasinRD=17;
	int barbarianA=113,barbarianMD=9,barbarianRD=4;
	int bearWMA=117,bearWMD=139,bearWRD=48;
	int beserkerA=149,beserkerMD=24,beserkerRD=8;
	int boneHA=145,boneHMD=21,boneHRD=8;
	int bowmanA=24,bowmanMD=8,bowmanRD=24;
	int compositeBA=24,compositeBMD=8,compositeBRD=24;
	int crossbowmanA=36,rossbowmanMD=6,rossbowmanRD=36;
	int crossbowmanKA=121,rossbowmanKMD=14,rossbowmanKRD=23;
	int deathlyHA=162,deathlyMD=15,deathlyRD=24;
	int demonHMA=185,demonHMD=19,demonHRD=35;
	int demonSA=178,demonSMD=16,demonSRD=5;	
	int direwolfMA=24,direwolMD=40,direwolRD=0;
	int forestHA=162,forestHMD=15,forestHRD=24;
	int forestBA=135,forestBMD=19,forestBRD=28;
	int halberdierA=17,halberdierMD=135,halberdierRD=50;	
	int heavyCA=92, heavyCMD=15, heavyCRD=24;
	int imperialBA=124,imperialBMD=17,imperialBRD=26;
	int imperialGA=135,imperialGMD=21,imperialGRD=8;
	int imperialMA=132,imperialMMD=17,imperialMRD=26;	
	int khanGMA=175,kingGMD=54,kingGRD=50;
	int kingKMA=132,kingKMD=18,kingKRD=5;
	int macemanA=38,longbowmanMD=38,longbowmanRD=6;
	int marauderMA=113,marauderMD=18,marauderRD=4;
	int marksmanMA=97,marksmanMMD=59,marksmanMRD=132;
	int masterBHA=185,masterBHMD=19,masterBHRD=5;	
	int militiaMA=8,militiaMD=27,militiaRD=24;
	int norsemanWAMA=109,norsemanWAMD=135,norsemanWARD=45;
	int pyromaniacMA=111,pyromaniacMD=19,pyromaniacRD=4;
	int ravenCA=135,ravenCMD=19,ravenCRD=28;	
	int relicAA=169,relicAMD=22,relicARD=6;
	int relicHMA=16,relicHMD=162,relicHRD=60;
	int relicSA=154,relicSMD=16,relicSRD=24;
	int renegadeBMA=16,renegadeBMMD=71,renegadeBMRD=153;
	int renegadeCHA=200,renegadeCHMD=21,renegadeCHRD=47;
	int renegadeCBA=112,renegadeCBMD=59,renegadeCBRD=135;
	int renegadeCWA=124,renegadeCWMD=144,renegadeCWRD=55;	
	int renegadeKWA=14,renegadeKWMD=165,renegadeKWRD=66;
	int renegadeNBA=86,renegadeNBMD=48,renegadeNBRD=119;
	int renegadeSWA=160,renegadeSWMD=20,renegadeSWRD=7;
	int renegadeSR=144,renegadeSRMD=8,renegadeSRRD=14;	
	int renegadeSTWMA=146,renegadeSTWMD=20,renegadeSTWRD=9;
	int renegadeSSA=135,renegadeSSMD=22,renegadeSSRD=30;
	int saberCA=139,saberCMD=6,saberCRD=3;
	int sentinelKMA=14,sentinelKMD=150,sentinelKRD=35;
	int shadowMMA=38,shadowMMD=4,shadowMRD=23;	
	int shadowSMA=118,shadowSMD=20,shadowSRD=6;
	int shadowWA=98,shadowWMD=16,shadowWRD=26;
	int slingshotA=130,slingshotMD=5,slingshotRD=9;
	int spearWMA=138,spearWMD=19,spearWRD=28;
	int spearmanA=26,spearmanMD=26,spearmanRD=8;
	int starSCA=162,starSCMD=15,starSCRD=24;
	int starSKA=185,starSKMD=19,starSKRD=5;	
	int swordsmanA=61,swordsmanMD=5,swordsmanRD=3;
	int travellingCA=135,travellingCMD=22,travellingCRD=30;
	int travellingKA=146,travellingKMD=20,travellingKRD=9;
	int twoHSMA=109,twoHSMD=19,twoHSRD=5;	
	int veteranBA=18,veteranBMD=65,veteranBRD=132;
	int veteranCBA=20,veteranCBMD=84,veteranCBRD=183;
	int veteranCA=98,veteranCMD=16,veteranCRD=26;
	int veteranHMA=15,veteranHMD=145,veteranHRD=60;
	int veteranMMA=118,veteranMMD=20,veteranMRD=6;
	int veteranPA=160,veteranPMD=19,veteranPRD=4;
	int veteranSCA=149,veteranSCMD=20,veteranSCRD=15;	
	int veteranSA=139,veteranSMD=19,veteranSRD=24;
	int veteranSpMA=15,veteranSpMD=142,veteranSpRD=57;
	int veteranSwMA=111,veteranSwMD=138,veteranSwRD=72;
	int wolfhoundMA=50,wolfhoundMD=50,wolfhoundRD=0;
	
	char type,type1;
		
	string izbor,k;
	int broj,broj1,x=2,y=1,z=1,l=1;
	int a,md,rd,a1,md1,rd1,md3,md4,rd3,rd4,p,p1,p2,x1=1,x2=1;
	
	
    while(bool game_runing = true){
    while(x!=0){
    
    while(y!=0){
    	 cout<<"Archer"<<endl<<"ArmedCitizen"<<endl<<"Assassin"<<endl<<"Barbarian"<<endl<<"BearWarrior"<<endl<<"Beserker"<<endl<<"BoneHuntress"<<endl<<"Bowman"<<endl<<"CompositeBowman"<<endl<<"Crossbowman"<<endl<<"CrossbowmanOfTheKingsGuard"<<endl<<"DeathlyHorror"<<endl<<"DemonHorror"<<endl<<"DemonSlayer"<<endl<<"Direwolf"<<endl<<"ForestHunter"<<endl<<"ForestBowman"<<endl<<"Halberdier"<<endl<<"HeavyCrossbowman"<<endl<<"ImperialBowman"<<endl<<"ImperialGuardsman"<<endl<<"ImperialKnight"<<endl<<"ImperialMarksman"<<endl<<"KhanGuards"<<endl<<"KnightOfTheKingsguard"<<endl<<"Longbowman"<<endl<<"Maceman"<<endl<<"Marauder"<<endl<<"Marksman"<<endl<<"MasterBoneHuntress"<<endl<<"Militia"<<endl<<"NorsemanWithAx"<<endl<<"Pyromaniac"<<endl<<"RavenChomper"<<endl<<"RelicAxeman"<<endl<<"RelicHammerman"<<endl<<"RelicShortbowman"<<endl<<"RenegadeBowMaste"<<endl<<"RenegadeCaveHunter"<<endl<<"RenegadeCultistBowman"<<endl<<"RenegadeCultistWarrior"<<endl<<"RenegadeKatanaWarrior"<<endl<<"RenegadeNorsemanBowman"<<endl<<"RenegadeSaiWarrior"<<endl<<"RenegadeSailRipper"<<endl<<"RenegadeSharkToothWarrior"<<endl<<"RenegadeStoneSmasher"<<endl<<"SaberCleaver"<<endl<<"SentinelOfTheKingsguard"<<endl<<"ShadowMaceman"<<endl<<"ShadowScoundrel"<<endl<<"ShadowWretch"<<endl<<"Slingshot"<<endl<<"Spearwoman"<<endl<<"Spearman"<<endl<<"Star-SpangledCrossbowman"<<endl<<"Swordsman"<<endl<<"TravellingCrossbowman"<<endl<<"TravellingKnight"<<endl<<"Two-handedSwordsman"<<endl<<"VeteranBowman"<<endl<<"VeteranCompositeBowman"<<endl<<"VeteranCrossbowman"<<endl<<"VeteranHalberdier"<<endl<<"VeteranMaceman"<<endl<<"VeteranPyromaniac"<<endl<<"VeteranSaberCleaver"<<endl<<"VeteranSlingshot"<<endl<<"VeteranSpearman"<<endl<<"VeteranSwordsman"<<endl<<"Wolfhound"<<endl<<endl<<endl<<endl<<endl<<endl;   
    	cout<<"(TYPE RACE, U HAVE TO WRITE WITHOUT SPACE AND EVERY NEXT LETTER MUST START WITH UPPERCASE LETTER!)"<<endl<<endl;
    	cout<<"CHOSE SOLDIER: ";
    	cin>>izbor;
    	if(izbor=="Archer"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=10*broj;
		    md=55*broj;
			rd=55*broj;
    		y--;
    		x--;
		}
    	if(izbor=="ArmedCitizen"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=3*broj;
		    md=9*broj;
			rd=9*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="Assassin"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=152*broj;
		    md=11*broj;
			rd=17*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Barbarian"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=113*broj;
		    md=9*broj;
			rd=4*broj;
     		y--;
    		x--;
		}
    	if(izbor=="BearWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=117*broj;
		    md=139*broj;
			rd=48*broj;
			type = 'M';
    		y--;
    		x--;
		}
    	if(izbor=="Beserker"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=149*broj;
		    md=24*broj;
			rd=8*broj;
    		y--;
    		x--;
		}
    	if(izbor=="BoneHuntress"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=145*broj;
		    md=21*broj;
			rd=8*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Bowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=24*broj;
		    md=8*broj;
			rd=24*broj;
    		y--;
    		x--;
		}
    	if(izbor=="CompositeBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=24*broj;
		    md=8*broj;
			rd=24*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Crossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=36*broj;
		    md=6*broj;
			rd=36*broj;
    		y--;
    		x--;
		}
    	if(izbor=="CrossbowmanOfTheKingsGuard"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=121*broj;
		    md=14*broj;
			rd=23*broj;
    		y--;
    		x--;
		}
    	if(izbor=="DeathlyHorror"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=162*broj;
		    md=15*broj;
			rd=24*broj;
    		y--;
    		x--;
		}
    	if(izbor=="DemonHorror"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=185*broj;
		    md=19*broj;
			rd=35*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="DemonSlayer"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=178*broj;
		    md=15*broj;
			rd=5*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Direwolf"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=24*broj;
		    md=40*broj;
			rd=1*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="ForestHunter"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=162*broj;
		    md=15*broj;
			rd=24*broj;
    		y--;
    		x--;
		}
    	if(izbor=="ForestBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=121*broj;
		    md=14*broj;
			rd=23*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Halberdier"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=17*broj;
		    md=135*broj;
			rd=50*broj;
     		y--;
    		x--;
		}
    	if(izbor=="HeavyCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=92*broj;
		    md=15*broj;
			rd=24*broj;
    		y--;
    		x--;
		}
    	if(izbor=="ImperialBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=124*broj;
		    md=17*broj;
			rd=26*broj;
    		y--;
    		x--;
		}
		    if(izbor=="ImperialGuardsman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=175*broj;
		    md=54*broj;
			rd=50*broj;
    		y--;
    		x--;
		}
    	if(izbor=="ImperialKnight"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=143*broj;
		    md=21*broj;
			rd=8*broj;
    		y--;
    		x--;
		}
    	if(izbor=="ImperialMarksman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=132*broj;
		    md=17*broj;
			rd=26*broj;
    		y--;
    		x--;
		}
    	if(izbor=="KhanGuards"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=175*broj;
		    md=54*broj;
			rd=50*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="KnightOfTheKingsguard"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=132*broj;
		    md=18*broj;
			rd=5*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="Longbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=20*broj;
		    md=56*broj;
			rd=125*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Maceman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=38*broj;
		    md=38*broj;
			rd=6*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Marauder"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=113*broj;
		    md=18*broj;
			rd=4*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="Marksman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=97*broj;
		    md=59*broj;
			rd=132*broj;
    		y--;
    		x--;
		}
    	if(izbor=="MasterBoneHuntress"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=185*broj;
		    md=19*broj;
			rd=5*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Militia"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=8*broj;
		    md=27*broj;
			rd=24*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="NorsemanWithAx"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=109*broj;
		    md=135*broj;
			rd=45*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="Pyromaniac"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=111*broj;
		    md=19*broj;
			rd=4*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RavenChomper"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=135*broj;
		    md=19*broj;
			rd=28*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RelicAxeman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=169*broj;
		    md=22*broj;
			rd=6*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RelicHammerman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=16*broj;
		    md=162*broj;
			rd=60*broj;
     		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="RelicShortbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=154*broj;
		    md=16*broj;
			rd=24*broj;
     		y--;
    		x--;
		}
    	if(izbor=="RenegadeBowMaste"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=16*broj;
		    md=71*broj;
			rd=153*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RenegadeCaveHunter"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=200*broj;
		    md=21*broj;
			rd=47*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RenegadeCultistBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=112*broj;
		    md=59*broj;
			rd=135*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RenegadeCultistWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=124*broj;
		    md=144*broj;
			rd=55*broj;
      		y--;
    		x--;
		}
    	if(izbor=="RenegadeKatanaWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=14*broj;
		    md=165*broj;
			rd=66*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RenegadeNorsemanBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=48*broj;
		    md=86*broj;
			rd=119*broj;
      		y--;
    		x--;
		}
    	if(izbor=="RenegadeSaiWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=160*broj;
		    md=20*broj;
			rd=7*broj;
    		y--;
    		x--;
		}
    	if(izbor=="RenegadeSailRipper"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=144*broj;
		    md=8*broj;
			rd=14*broj;
     		y--;
    		x--;
		}
    	if(izbor=="RenegadeSharkToothWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=146*broj;
		    md=20*broj;
			rd=9*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="RenegadeStoneSmasher"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=135*broj;
		    md=22*broj;
			rd=30*broj;
    		y--;
    		x--;
		}
		    if(izbor=="SaberCleaver"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=139*broj;
		    md=6*broj;
			rd=3*broj;
    		y--;
    		x--;
		}
    	if(izbor=="SentinelOfTheKingsguard"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=14*broj;
		    md=150*broj;
			rd=35*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="ShadowMaceman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=38*broj;
		    md=4*broj;
			rd=23*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="ShadowScoundrel"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=118*broj;
		    md=20*broj;
			rd=6*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="ShadowWretch"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=98*broj;
		    md=16*broj;
			rd=26*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Slingshot"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=130*broj;
		    md=5*broj;
			rd=9*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Spearwoman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=138*broj;
		    md=19*broj;
			rd=28*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Spearman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=26*broj;
		    md=26*broj;
			rd=8*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Star-SpangledCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=162*broj;
		    md=15*broj;
			rd=24*broj;
    		y--;
    		x--;
		}
    	if(izbor=="Star-SpangledKnight"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=185*broj;
		    md=19*broj;
			rd=5*broj;
        	y--;
    		x--;
		}
    	if(izbor=="Swordsman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=61*broj;
		    md=5*broj;
			rd=3*broj;
    	   	y--;
    		x--;
		}
    	if(izbor=="TravellingCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=135*broj;
		    md=22*broj;
			rd=30*broj;
        	y--;
    		x--;
		}
    	if(izbor=="TravellingKnight"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=146*broj;
		    md=20*broj;
			rd=9*broj;
      		y--;
    		x--;
		}
    	if(izbor=="Two-handedSwordsman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=109*broj;
		    md=19*broj;
			rd=5*broj;
    	   	y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="VeteranBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=18*broj;
		    md=65*broj;
			rd=132*broj;
       		y--;
    		x--;
		}
		    if(izbor=="VeteranCompositeBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=183*broj;
		    md=20*broj;
			rd=84*broj;
    		y--;
    		x--;
		}
    	if(izbor=="VeteranCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=98*broj;
		    md=16*broj;
			rd=26*broj;
    		y--;
    		x--;
		}
    	if(izbor=="VeteranHalberdier"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=15*broj;
		    md=145*broj;
			rd=60*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="VeteranMaceman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=118*broj;
		    md=20*broj;
			rd=6*broj;
      		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="VeteranPyromaniac"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=160*broj;
		    md=19*broj;
			rd=4*broj;
    		y--;
    		x--;
		}
    	if(izbor=="VeteranSaberCleaver"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=149*broj;
		    md=20*broj;
			rd=15*broj;
    		y--;
    		x--;
		}
    	if(izbor=="VeteranSlingshot"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=139*broj;
		    md=19*broj;
			rd=24*broj;
    		y--;
    		x--;
		}
    	if(izbor=="VeteranSpearman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=15*broj;
		    md=142*broj;
			rd=57*broj;
    		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="VeteranSwordsman"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=111*broj;
		    md=138*broj;
			rd=72*broj;
     		y--;
    		x--;
    		type = 'M';
		}
    	if(izbor=="Wolfhound"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a=50*broj;
		    md=50*broj;
			rd=0*broj;
    		y--;
    		x--;
    		type = 'M';
		}
		system("cls");
	}
      

	  
	  
	  
	  
	  
	  
	    while(z!=0){
	    cout<<"Archer"<<endl<<"ArmedCitizen"<<endl<<"Assassin"<<endl<<"Barbarian"<<endl<<"BearWarrior"<<endl<<"Beserker"<<endl<<"BoneHuntress"<<endl<<"Bowman"<<endl<<"CompositeBowman"<<endl<<"Crossbowman"<<endl<<"CrossbowmanOfTheKingsGuard"<<endl<<"DeathlyHorror"<<endl<<"DemonHorror"<<endl<<"DemonSlayer"<<endl<<"Direwolf"<<endl<<"ForestHunter"<<endl<<"ForestBowman"<<endl<<"Halberdier"<<endl<<"HeavyCrossbowman"<<endl<<"ImperialBowman"<<endl<<"ImperialGuardsman"<<endl<<"ImperialKnight"<<endl<<"ImperialMarksman"<<endl<<"KhanGuards"<<endl<<"KnightOfTheKingsguard"<<endl<<"Longbowman"<<endl<<"Maceman"<<endl<<"Marauder"<<endl<<"Marksman"<<endl<<"MasterBoneHuntress"<<endl<<"Militia"<<endl<<"NorsemanWithAx"<<endl<<"Pyromaniac"<<endl<<"RavenChomper"<<endl<<"RelicAxeman"<<endl<<"RelicHammerman"<<endl<<"RelicShortbowman"<<endl<<"RenegadeBowMaste"<<endl<<"RenegadeCaveHunter"<<endl<<"RenegadeCultistBowman"<<endl<<"RenegadeCultistWarrior"<<endl<<"RenegadeKatanaWarrior"<<endl<<"RenegadeNorsemanBowman"<<endl<<"RenegadeSaiWarrior"<<endl<<"RenegadeSailRipper"<<endl<<"RenegadeSharkToothWarrior"<<endl<<"RenegadeStoneSmasher"<<endl<<"SaberCleaver"<<endl<<"SentinelOfTheKingsguard"<<endl<<"ShadowMaceman"<<endl<<"ShadowScoundrel"<<endl<<"ShadowWretch"<<endl<<"Slingshot"<<endl<<"Spearwoman"<<endl<<"Spearman"<<endl<<"Star-SpangledCrossbowman"<<endl<<"Swordsman"<<endl<<"TravellingCrossbowman"<<endl<<"TravellingKnight"<<endl<<"Two-handedSwordsman"<<endl<<"VeteranBowman"<<endl<<"VeteranCompositeBowman"<<endl<<"VeteranCrossbowman"<<endl<<"VeteranHalberdier"<<endl<<"VeteranMaceman"<<endl<<"VeteranPyromaniac"<<endl<<"VeteranSaberCleaver"<<endl<<"VeteranSlingshot"<<endl<<"VeteranSpearman"<<endl<<"VeteranSwordsman"<<endl<<"Wolfhound"<<endl<<endl<<endl<<endl<<endl<<endl;   

     	cout<<"(TYPE RACE, U HAVE TO WRITE WITHOUT SPACE AND EVERY NEXT LETTER MUST START WITH UPPERCASE LETTER!)"<<endl<<endl;
    	cout<<"CHOSE SOLDIER: ";
    	cin>>izbor;
    	if(izbor=="Archer"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=10*broj1;
		    md1=55*broj1;
			rd1=55*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="ArmedCitizen"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=3*broj1;
		    md1=9*broj1;
			rd1=9*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="Assassin"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=152*broj1;
		    md1=11*broj1;
			rd1=17*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Barbarian"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=113*broj1;
		    md1=9*broj1;
			rd1=4*broj1;
     		z--;
    		x--;
		}
    	if(izbor=="BearWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=117*broj1;
		    md1=139*broj1;
			rd1=48*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="Beserker"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=149*broj1;
		    md1=24*broj1;
			rd1=8*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="BoneHuntress"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=145*broj1;
		    md1=21*broj1;
			rd1=8*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Bowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=24*broj1;
		    md1=8*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="CompositeBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=24*broj1;
		    md1=8*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Crossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=36*broj1;
		    md1=6*broj1;
			rd1=36*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="CrossbowmanOfTheKingsguard"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=121*broj1;
		    md1=14*broj1;
			rd1=23*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="DeathlyHorror"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=162*broj1;
		    md1=15*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="DemonHorror"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=185*broj1;
		    md1=19*broj1;
			rd1=35*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="DemonSlayer"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=178*broj1;
		    md1=15*broj1;
			rd1=5*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Direwolf"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=24*broj1;
		    md1=40*broj1;
			rd1=1*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="ForestHunter"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=162*broj1;
		    md1=15*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="ForestBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=121*broj1;
		    md1=14*broj1;
			rd1=23*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Halberdier"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=17*broj1;
		    md1=135*broj1;
			rd1=50*broj1;
     		z--;
    		x--;
		}
    	if(izbor=="HeavyCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=92*broj1;
		    md1=15*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="ImperialBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=124*broj1;
		    md1=17*broj1;
			rd1=26*broj1;
    		z--;
    		x--;
		}
		    if(izbor=="ImperialGuardsman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=175*broj1;
		    md1=54*broj1;
			rd1=50*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="ImperialKnight"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=143*broj1;
		    md1=21*broj1;
			rd1=8*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="ImperialMarksman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=132*broj1;
		    md1=17*broj1;
			rd1=26*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="KhanGuards"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=175*broj1;
		    md1=54*broj1;
			rd1=50*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="KnightOfTheKingsguard"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=132*broj1;
		    md1=18*broj1;
			rd1=5*broj;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="Longbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=20*broj1;
		    md1=56*broj1;
			rd1=125*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Maceman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=38*broj1;
		    md1=38*broj1;
			rd1=6*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Marauder"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=113*broj1;
		    md1=18*broj1;
			rd1=4*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="Marksman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=97*broj1;
		    md1=59*broj1;
			rd1=132*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="MasterBoneHuntress"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=185*broj1;
		    md1=19*broj1;
			rd1=5*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Militia"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=8*broj1;
		    md1=27*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="NorsemanWithAx"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=109*broj1;
		    md1=135*broj1;
			rd1=45*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="Pyromaniac"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=111*broj1;
		    md1=19*broj1;
			rd1=4*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RavenChomper"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a1=135*broj1;
		    md1=19*broj1;
			rd1=28*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RelicAxeman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=169*broj1;
		    md1=22*broj1;
			rd1=6*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RelicHammerman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=16*broj1;
		    md1=162*broj1;
			rd1=60*broj1;
     		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="RelicShortbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=154*broj1;
		    md1=16*broj1;
			rd1=24*broj1;
     		z--;
    		x--;
		}
    	if(izbor=="RenegadeBowMaste"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=16*broj1;
		    md1=71*broj1;
			rd1=153*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RenegadeCaveHunter"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=200*broj1;
		    md1=21*broj1;
			rd1=47*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RenegadeCultistBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=112*broj1;
		    md1=59*broj1;
			rd1=135*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RenegadeCultistWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=124*broj1;
		    md1=144*broj1;
			rd1=55*broj1;
      		z--;
    		x--;
		}
    	if(izbor=="RenegadeKatanaWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=14*broj1;
		    md1=165*broj1;
			rd1=66*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RenegadeNorsemanBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=48*broj1;
		    md1=86*broj1;
			rd1=119*broj1;
      		z--;
    		x--;
		}
    	if(izbor=="RenegadeSaiWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj;
			a1=160*broj1;
		    md1=20*broj1;
			rd1=7*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="RenegadeSailRipper"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=144*broj1;
		    md1=8*broj1;
			rd1=14*broj1;
     		z--;
    		x--;
		}
    	if(izbor=="RenegadeSharkToothWarrior"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=146*broj1;
		    md1=20*broj1;
			rd1=9*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="RenegadeStoneSmasher"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=135*broj1;
		    md1=22*broj1;
			rd1=30*broj1;
    		z--;
    		x--;
		}
		    if(izbor=="SaberCleaver"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=139*broj1;
		    md1=6*broj1;
			rd1=3*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="SentinelOfTheKingsguard"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=14*broj1;
		    md1=150*broj1;
			rd1=35*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="ShadowMaceman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=38*broj1;
		    md1=4*broj1;
			rd1=23*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="ShadowScoundrel"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=118*broj1;
		    md1=20*broj1;
			rd1=6*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="ShadowWretch"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=98*broj1;
		    md1=16*broj1;
			rd1=26*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Slingshot"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=130*broj1;
		    md1=5*broj1;
			rd1=9*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="SpearWoman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=138*broj1;
		    md1=19*broj1;
			rd1=28*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Spearman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=26*broj1;
		    md1=26*broj1;
			rd1=8*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Star-SpangledCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=162*broj1;
		    md1=15*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="Star-SpangledKnight"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=185*broj1;
		    md1=19*broj1;
			rd1=5*broj1;
        	z--;
    		x--;
		}
    	if(izbor=="Swordsman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=61*broj1;
		    md1=5*broj1;
			rd1=3*broj1;
    	   	z--;
    		x--;
		}
    	if(izbor=="TravellingCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=135*broj1;
		    md1=22*broj1;
			rd1=30*broj1;
        	z--;
    		x--;
		}
    	if(izbor=="TravellingKnight"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=146*broj1;
		    md1=20*broj1;
			rd1=9*broj1;
      		z--;
    		x--;
		}
    	if(izbor=="Two-handedSwordsman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=109*broj1;
		    md1=19*broj1;
			rd1=5*broj1;
    	   	z--;
    		x--;
    		type = 'S';
		}
    	if(izbor=="VeteranBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=18*broj1;
		    md1=65*broj1;
			rd1=132*broj1;
       		z--;
    		x--;
		}
		    if(izbor=="VeteranCompositeBowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=183*broj1;
		    md1=20*broj1;
			rd1=84*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="VeteranCrossbowman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=98*broj1;
		    md1=16*broj1;
			rd1=26*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="VeteranHalberdier"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=15*broj1;
		    md1=145*broj1;
			rd1=60*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="VeteranMaceman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=118*broj1;
		    md1=20*broj1;
			rd1=6*broj1;
      		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="VeteranPyromaniac"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=160*broj1;
		    md1=19*broj1;
			rd1=4*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="VeteranSaberCleaver"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=149*broj1;
		    md1=20*broj1;
			rd1=15*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="VeteranSlingshot"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a=1139*broj1;
		    md1=19*broj1;
			rd1=24*broj1;
    		z--;
    		x--;
		}
    	if(izbor=="VeteranSpearman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=15*broj1;
		    md1=142*broj1;
			rd1=57*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="VeteranSwordsman"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=111*broj1;
		    md1=138*broj1;
			rd1=72*broj1;
     		z--;
    		x--;
    		type1 = 'S';
		}
    	if(izbor=="Wolfhound"){
    		cout<<"NUMBER: ";
    		cin>>broj1;
			a1=50*broj1;
		    md1=50*broj1;
			rd1=0*broj1;
    		z--;
    		x--;
    		type1 = 'S';
		}
	}
    
    }
    
    system("cls");
    cout<<"GuardianOfTheKahn"<<endl<<"LionOfGerbrandt"<<endl<<"ImperialEnforcer"<<endl<<"YeomanOfTheGingerbreadGuard"<<endl<<"YuleGrinner"<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"(WRITE JUST FIRST NAME OF COMANNDER)"<<endl<<endl<<"CHOSEE COMMANDER FOR FIRST TEAM and WRITE END TO CONTINUE: ";
    cin>>k;
    if(k=="GuardianOfTheKahn"){
    	if(type=='N'){
    		a*=1.90;

		}
		else{
			a*=1.90;

		}
		
	}
	  if(k=="LionOfGerbrandt"){
    	if(type=='N'){
    		a*=1.90;
    		broj*=1.3;
    		a*=1.10;

		}
		else{
			a*=1.90;
			broj*=1.3;
			a*=1.10;

		}

	}
	  if(k=="ImperialEnforcer"){
    	if(type=='N'){
    		a*=2.05;
    		broj*=1.8;
        	a*=1.95;
        	a*=0.25;
        	a*=0.5;

		}
		else{
			a*=2.05;
			a*=1.8;

		}
		
	}
	  if(k=="YeomanOfTheGingerbreadGuard"){
    	if(type=='N'){
    		a*=2;
    		broj*=0.2;
    		x2--;
		}
		else{
			a*=2;
    		broj*=0.2;

		}
	}
	  if(k=="YuleGrinner"){
    	if(type=='N'){
    		a*=2;
    		a*=0.3;
    		broj*=0.40;
    		broj*=0.40;
		}
		else{
			a*=2.2;
    		a*=0.3;
    	    broj*=0.40;
    		broj*=0.40;
		}
		if(k=="end" or k=="END" ){
		}

	}
	

    system("cls");
    cout<<"GuardianOfTheKahn"<<endl<<"LionOfGerbrandt"<<endl<<"ImperialEnforcer"<<endl<<"YeomanOfTheGingerbreadGuard"<<endl<<"YuleGrinner"<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"(WRITE JUST FIRST NAME OF COMANNDER)"<<endl<<endl<<"CHOSEE COMMANDER FOR SECOND TEAM and WRITE END TO CONTINUE: ";
    cin>>k;
    if(k=="GuardianOfTheKahn"){
    	if(type=='S'){
    		a1*=1.90;

		}
		else{
			a1*=1.90;

		}
	
	}
	  if(k=="LionOfGerbrandt"){
    	if(type=='S'){
    		a1*=1.90;
    		broj1*=1.3;

		}
		else{
			a1*=1.90;
			broj1*=1.3;
			a1*=1.10;	

		}
	}
	  if(k=="ImperialEnforcer"){
    	if(type=='S'){
    		a1*=2.05;
    		broj1*=1.8;
        	a1*=1.95;
        	a1*=0.25;
        	a1*=0.5;

		}
		else{
			a1*=2.05;
			a1*=1.8;

		}

	}
	  if(k=="YeomanOfTheGingerbreadGuard"){
    	if(type=='S'){
    		a1*=2;
    		broj1*=0.2;

		}
		else{
			a1*=2;
    		broj1*=0.2;

		}

	}
	  if(k=="YuleGrinner"){
    	if(type=='S'){
    		a1*=2;
    		a1*=0.3;
    		broj1*=0.40;
    		broj1*=0.40;

		}
		else{
			a1*=2.2;
    		a1*=0.3;
    	    broj1*=0.40;
    		broj1*=0.40;

		}
		if(k=="end"or k=="END"){
			;
		}
	}

system("cls");
    
    cout<<"TEAM 1 -SOLDIERS-: "<<broj<<endl<<"ATTACK: "<<a<<endl<<"MELEE DEFENSE: "<<md<<endl<<"RANGED DEFENSE: "<<rd<<endl<<endl<<endl<<"TEAM 2 -SOLDIERS-: "<<broj1<<endl<<"ATTACK: "<<a1<<endl<<"MELEE DEFENSE: "<<md1<<endl<<"RANGED DEFENSE: "<<rd1<<endl<<endl<<endl<<endl;
	
	if
	(type=='M' and type1=='S'){
	p=a*md;
	p1=a1*md1;
	p2=p-p1;
	if(p2<0){
		
		cout<<endl<<endl<<"BOTH TEAMS ARE MELEE"<<endl<<endl<<endl<<endl;
		cout<<"TEAM 2 WINS!";

	}
	else{
		
	    cout<<endl<<endl<<"BOTH TEAMS ARE MELEE"<<endl<<endl<<endl<<endl;
	    cout<<"TEAM 1 WINS!";

	}
	}
	
	
	if(type=='M'){

	p=a*rd;
	p1=a1*md1;
	p2=p-p1;
	if(p2<0){
		
    	cout<<endl<<endl<<"TEAM 1 IS MELEE"<<endl<<endl<<endl<<endl;
    	cout<<"TEAM 2 WINS!";

	}
    else{
		
		cout<<endl<<endl<<"TEAM 1 IS MELEE"<<endl<<endl<<endl<<endl;
		cout<<"TEAM 1 WINS!";

	}	
	}
	
	
	if(type1=='S'){
	p=a*md;
	p1=a1*rd1;
	p2=p-p1;
	if(p2<0){

	cout<<endl<<endl<<"TEAM 2 IS MELEE"<<endl<<endl<<endl<<endl;
	cout<<"TEAM 2 WINS!";

	}
	else{
		
		cout<<endl<<endl<<"TEAM 2 IS MELEE"<<endl<<endl<<endl<<endl;
		cout<<"TEAM 1 WINS!";

	}	
	}
	
	
	if(type!='M' and type1!='S'){
	p=a*rd;
	p1=a1*rd1;
	p2=p-p1;	
	if(p2<0){
		
		cout<<endl<<endl<<"BOTH TEAMS ARE RANGE"<<endl<<endl<<endl<<endl;
		cout<<"TEAM 2 WINS!";
		}
	else{
		
		cout<<endl<<endl<<"BOTH TEAMS ARE RANGE"<<endl<<endl<<endl<<endl;
		cout<<"TEAM 1 WINS!";
	}	
	}

	return 0;
}
}

