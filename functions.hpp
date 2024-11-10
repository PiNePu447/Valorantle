#include "agents.hpp"
#define number_agents 25

void caracteriscas(){
    brimstone.name = "Brimstone"; brimstone.ep = 0; brimstone.bang = false; brimstone.molly = true; brimstone.role = "Controlador"; brimstone.genre = "M"; brimstone.face = false; brimstone.wall = false; brimstone.radiant = false; brimstone.difficulty = 3;
    phoenix.name = "Phoenix"; phoenix.ep = 0; phoenix.bang = true; phoenix.molly = true; phoenix.role = "Duelista"; phoenix.genre = "M"; phoenix.face = false; phoenix.wall = true; phoenix.radiant = true; phoenix.difficulty = 1;
    sage.name = "Sage"; sage.ep = 0; sage.bang = false; sage.molly = false; sage.role = "Sentinela"; sage.genre = "F"; sage.face = false; sage.wall = true; sage.radiant = true; sage.difficulty = 1;
    sova.name = "Sova"; sova.ep = 0; sova.bang = false; sova.molly = false; sova.role = "Iniciador"; sova.genre = "M"; sova.face = false; sova.wall = false; sova.radiant = false; sova.difficulty = 4;
    viper.name = "Viper"; viper.ep = 0; viper.bang = false; viper.molly = true; viper.role = "Controlador"; viper.genre = "F"; viper.face = true; viper.wall = true; viper.radiant = false; viper.difficulty = 5;
    cypher.name = "Cypher"; cypher.ep = 0; cypher.bang = false; cypher.molly = false; cypher.role = "Sentinela"; cypher.genre = "M"; cypher.face = true; cypher.wall = false; cypher.radiant = false; cypher.difficulty = 3;
    reyna.name = "Reyna"; reyna.ep = 1; reyna.bang = true; reyna.molly = false; reyna.role = "Duelista"; reyna.genre = "F"; reyna.face = false; reyna.wall = false; reyna.radiant = true; reyna.difficulty = 1;
    killjoy.name = "Killjoy"; killjoy.ep = 1; killjoy.bang = false; killjoy.molly = true; killjoy.role = "Sentinela"; killjoy.genre = "F"; killjoy.face = true; killjoy.wall = false; killjoy.radiant = false; killjoy.difficulty = 2;
    breach.name = "Breach"; breach.ep = 0; breach.bang = true; breach.molly = false; breach.role = "Iniciador"; breach.genre = "M"; breach.face = false; breach.wall = false; breach.radiant = false; breach.difficulty = 3;
    omen.name = "Omen"; omen.ep = 0; omen.bang = true; omen.molly = false; omen.role = "Controlador"; omen.genre = "M"; omen.face = true; omen.wall = false; omen.radiant = true; omen.difficulty = 4;
    jett.name = "Jett"; jett.ep = 0; jett.bang = false; jett.molly = false; jett.role = "Duelista"; jett.genre = "F"; jett.face = false; jett.wall = false; jett.radiant = true; jett.difficulty = 4;
    raze.name = "Raze"; raze.ep = 0; raze.bang = false; raze.molly = false; raze.role = "Duelista"; raze.genre = "F"; raze.face = false; raze.wall = false; raze.radiant = false; raze.difficulty = 5;
    skye.name = "Skye"; skye.ep = 1; skye.bang = true; skye.molly = false; skye.role = "Iniciador"; skye.genre = "F"; skye.face = false; skye.wall = false; skye.radiant = true; skye.difficulty = 3;
    yoru.name = "Yoru"; yoru.ep = 2; yoru.bang = true; yoru.molly = true; yoru.role = "Duelista"; yoru.genre = "M"; yoru.face = true; yoru.wall = false; yoru.radiant = true; yoru.difficulty = 4;
    astra.name = "Astra"; astra.ep = 2; astra.bang = false; astra.molly = false; astra.role = "Controlador"; astra.genre = "F"; astra.face = false; astra.wall = true; astra.radiant = true; astra.difficulty = 5;
    kayo.name = "Kayo"; kayo.ep = 3; kayo.bang = true; kayo.molly = true; kayo.role = "Iniciador"; kayo.genre = "M"; kayo.face = false; kayo.wall = false; kayo.radiant = false; kayo.difficulty = 3;
    chamber.name = "Chamber"; chamber.ep = 3; chamber.bang = false; chamber.molly = false; chamber.role = "Sentinela"; chamber.genre = "M"; chamber.face = true; chamber.wall = false; chamber.radiant = true; chamber.difficulty = 1;
    neon.name = "Neon"; neon.ep = 4; neon.bang = false; neon.molly = false; neon.role = "Duelista"; neon.genre = "F"; neon.face = false; neon.wall = true; neon.radiant = true; neon.difficulty = 5;
    fade.name = "Fade"; fade.ep = 4; fade.bang = false; fade.molly = false; fade.role = "Iniciador"; fade.genre = "F"; fade.face = false; fade.wall = false; fade.radiant = true; fade.difficulty = 3;
    harbor.name = "Harbor"; harbor.ep = 5; harbor.bang = false; harbor.molly = false; harbor.role = "Controlador"; harbor.genre = "M"; harbor.face = false; harbor.wall = true; harbor.radiant = true; harbor.difficulty = 5;
    gekko.name = "Gekko"; gekko.ep = 6; gekko.bang = true; gekko.molly = true; gekko.role = "Iniciador"; gekko.genre = "M"; gekko.face = false; gekko.wall = false; gekko.radiant = true; gekko.difficulty = 3;
    deadlock.name = "Deadlock"; deadlock.ep = 7; deadlock.bang = false; deadlock.molly = false; deadlock.role = "Sentinela"; deadlock.genre = "F"; deadlock.face = false; deadlock.wall = true; deadlock.radiant = false; deadlock.difficulty = 2;
    iso.name = "Iso"; iso.ep = 7; iso.bang = false; iso.molly = false; iso.role = "Duelista" ; iso.genre = "M"; iso.face = false; iso.wall = true; iso.radiant = true; iso.difficulty = 3;
    clove.name = "Clove"; clove.ep = 8; clove.bang = false; clove.molly = false; clove.role = "Controlador"; clove.genre = "Neutre"; clove.face = false; clove.wall = false; clove.radiant = true; clove.difficulty = 3;
    vyse.name = "Vyse"; vyse.ep = 9; vyse.bang = true; vyse.molly = true; vyse.role = "Sentinela"; vyse.genre = "F"; vyse.face = true; vyse.wall = true; vyse.radiant = true; vyse.difficulty = 3;
}

agent agent_picker(){
    agent agents[number_agents];
    agents[0] = brimstone;
    agents[1] = phoenix;
    agents[2] = sage;
    agents[3] = sova;
    agents[4] = viper;
    agents[5] = cypher;
    agents[6] = reyna;
    agents[7] = killjoy;
    agents[8] = breach;
    agents[9] = omen;
    agents[10] = jett;
    agents[11] = raze;
    agents[12] = skye;
    agents[13] = yoru;
    agents[14] = astra;
    agents[15] = kayo;
    agents[16] = chamber;
    agents[17] = neon;
    agents[18] = fade;
    agents[19] = harbor;
    agents[20] = gekko;
    agents[21] = deadlock;
    agents[22] = iso;
    agents[23] = clove;
    agents[24] = vyse;
    srand(time(0));
    agent picked = agents[rand()%number_agents];
    return picked;
}

agent pega_resposta(){
    string resposta;
    cin >> resposta;
    for (int i = 0; i < int(resposta.length()); i++){resposta[i] = toupper(resposta[i]);}
    
    if (resposta == "BRIMSTONE")
    {
        return brimstone;
    }else if (resposta == "PHOENIX")
    {
        return phoenix;
    }else if (resposta == "SAGE")
    {
        return sage;
    }else if (resposta == "SOVA")
    {
        return sova;
    }else if (resposta == "VIPER")
    {
        return viper;
    }else if (resposta == "CYPHER")
    {
        return cypher;
    }else if (resposta == "REYNA")
    {
        return reyna;
    }else if (resposta == "KILLJOY")
    {
        return killjoy;
    }else if (resposta == "BREACH")
    {
        return breach;
    }else if (resposta == "OMEN")
    {
        return omen;
    }else if (resposta == "JETT")
    {
        return jett;
    }else if (resposta == "RAZE")
    {
        return raze;
    }
    
    
    
    
    
    

}