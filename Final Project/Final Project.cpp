#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <random>
using namespace std;

class Weapon {
private:
    enum weaponType {
        ANBA,
        ANGS,
        ANWH,
        ANWA,
        ANS,
        ANM,
        IBA,
        IGS,
        IWH,
        IWA,
        IS,
        IM,
        SBA,
        SGS,
        SWH,
        SWA,
        SS,
        SM,
        ID,
        Other
    };

    string weaponName;

    int weaponDamage;
    int weaponCriticalBoost;

    int weaponStaminaCost;

    weaponType wt;

public:
    // Setters
    void setWeaponName(string name) { this->weaponName = name; }

    void setWeaponDamage(int value) { this->weaponDamage = value; }
    void setWeaponCriticalDamage(int value) { this->weaponCriticalBoost = value; }

    void setWeaponStaminaCost(int value) { this->weaponStaminaCost = value; }

    void setWeaponType(weaponType value) { this->wt = value; }

    // Getters
    string getWeaponName() const { return this->weaponName; }

    int getWeaponDamage() const { return this->weaponDamage; }
    int getWeaponCriticalDamage() const { return this->weaponCriticalBoost; }

    int getWeaponStaminaCost() const { return this->weaponStaminaCost; }

    weaponType getWeaponType() const { return this->wt; }

    // Constructors
    Weapon() {};

    Weapon(int type)
        : wt(static_cast<weaponType>(type))
    {
        switch (wt) {
        case 0:
            this->weaponName = "Ancient Nord Battle Axe";
            this->weaponDamage = 18;
            this->weaponCriticalBoost = 1;
            this->weaponStaminaCost = 22;
            break;
        case 1:
            this->weaponName = "Ancient Nord Great Sword";
            this->weaponDamage = 17;
            this->weaponCriticalBoost = 1;
            this->weaponStaminaCost = 20;

            break;
        case 2:
            this->weaponName = "Ancient Nord War Hammer";
            this->weaponDamage = 20;
            this->weaponCriticalBoost = 1;
            this->weaponStaminaCost = 26;
            break;
        case 3:
            this->weaponName = "Ancient Nord War Axe";
            this->weaponDamage = 9;
            this->weaponCriticalBoost = 1;
            this->weaponStaminaCost = 12;
            break;
        case 4:
            this->weaponName = "Ancient Nord Sword";
            this->weaponDamage = 8;
            this->weaponCriticalBoost = 1;
            this->weaponStaminaCost = 9;
            break;
        case 5:
            this->weaponName = "Ancient Nord Mace";
            this->weaponDamage = 10;
            this->weaponCriticalBoost = 14;
            break;
        case 6:
            this->weaponName = "Iron Battle Axe";
            this->weaponDamage = 16;
            this->weaponCriticalBoost = 7;
            this->weaponStaminaCost = 20;
            break;
        case 7:
            this->weaponName = "Iron Great Sword";
            this->weaponDamage = 15;
            this->weaponCriticalBoost = 7;
            this->weaponStaminaCost = 18;
            break;
        case 8:
            this->weaponName = "Iron War Hammer";
            this->weaponDamage = 18;
            this->weaponCriticalBoost = 9;
            this->weaponStaminaCost = 24;
            break;
        case 9:
            this->weaponName = "Iron War Axe";
            this->weaponDamage = 8;
            this->weaponCriticalBoost = 4;
            this->weaponStaminaCost = 11;
            break;
        case 10:
            this->weaponName = "Iron Sword";
            this->weaponDamage = 7;
            this->weaponCriticalBoost = 3;
            this->weaponStaminaCost = 8;
            break;
        case 11:
            this->weaponName = "Iron Mace";
            this->weaponDamage = 9;
            this->weaponCriticalBoost = 4;
            this->weaponStaminaCost = 13;
            break;
        case 12:
            this->weaponName = "Steel Battle Axe";
            this->weaponDamage = 18;
            this->weaponCriticalBoost = 8;
            this->weaponStaminaCost = 21;
            break;
        case 13:
            this->weaponName = "Steel Great Sword";
            this->weaponDamage = 17;
            this->weaponCriticalBoost = 8;
            this->weaponStaminaCost = 19;
            break;
        case 14:
            this->weaponName = "Steel War Hammer";
            this->weaponDamage = 20;
            this->weaponCriticalBoost = 10;
            this->weaponStaminaCost = 25;
            break;
        case 15:
            this->weaponName = "Steel War Axe";
            this->weaponDamage = 9;
            this->weaponCriticalBoost = 4;
            this->weaponStaminaCost = 12;
            break;
        case 16:
            this->weaponName = "Steel Sword";
            this->weaponDamage = 8;
            this->weaponCriticalBoost = 4;
            this->weaponStaminaCost = 9;
            break;
        case 17:
            this->weaponName = "Steel Mace";
            this->weaponDamage = 10;
            this->weaponCriticalBoost = 5;
            this->weaponStaminaCost = 14;
            break;
        case 18:
            this->weaponName = "Iron Dagger";
            this->weaponDamage = 4;
            this->weaponCriticalBoost = 2;
            this->weaponStaminaCost = 5;
            break;
        }
    }

    public:
        void DisplayWeaponInfo() {
        cout << "\nWeapon Name: " + this->weaponName + "\nWeapon Damage: " << this->weaponDamage << "\nWeapon Critical Damage Multiplier: " << this->weaponCriticalBoost << "\n";
    }
};

class Magic {
private:
    enum spell {
        Firebolt,
        IceSpike,
        LightningBolt,
        Healing
    };

    enum status {
        Ignited,
        Frostbitten,
        Shocked
    };

    string spellName;

    int spellHealthDamage;
    int spellMagickaDamage;
    int spellStaminaDamage;
    int spellHealing;

    int spellMagickaCost;

    spell sp;
    status st;

public:
    string getSpellName() const { return this->spellName; }

    int getSpellHealthDamage() const { return this->spellHealthDamage; }
    int getSpellMagickaDamage() const { return this->spellMagickaDamage; }
    int getSpellStaminaDamage() const { return this->spellStaminaDamage; }
    int getSpellHealing() const { return this->spellHealing; }

    int getSpellMagickaCost() const { return this->spellMagickaCost; }

    spell getSpell() const { return this->sp; }
    status getStatus() const { return this->st; }

    Magic() {}

    Magic(int type) 
        : sp(static_cast<spell>(type))
    {
        switch (sp) {
        case 0:
            this->spellName = "Firebolt";
            this->spellHealthDamage = 25;
            this->spellMagickaCost = 43;

            this->st = Ignited;
            break;
        case 1:
            this->spellName = "IceSpike";
            this->spellHealthDamage = 25;
            this->spellStaminaDamage = 25;
            this->spellMagickaCost = 48;

            this->st = Frostbitten;
            break;
        case 2:
            this->spellName = "Lightning Bolt";
            this->spellHealthDamage = 25;
            this->spellMagickaDamage = 13;
            this->spellMagickaCost = 51;

            this->st = Shocked;
            break;
        case 3:
            this->spellName = "Healing";
            this->spellHealing = 50;
            this->spellMagickaCost = 73;
            break;
        }
    }

    string DisplayStatus() {
        int status = st;
        switch (status) {
        case 0:
            return "Ignited";
            break;
        case 1:
            return "Frostbitten";
            break;
        case 2:
            return "Shocked";
            break;
        }
    }
};

class Armor {
public:
    Armor(){}
};

class Loot {
private:
    int gold;
    vector<Weapon> weapons;
    int lockpicks;
    
public:
    Loot() {

    }

    Loot(int gold, vector<Weapon> weapons, int lockpicks) 
        : gold(gold), weapons(weapons), lockpicks(lockpicks)
    {

    }
};

class Enemy {
protected:
    enum statusCondition {
        Ignited,
        Frostbitten,
        Shocked
    };

    string enemyName;
    int totalHealth;
    int totalMagicka;
    int totalStamina;
    int currentHealth;
    int currentMagicka;
    int currentStamina;

    Weapon enemyWeapon;
    Armor enemyArmor;
    Loot enemyLoot;

    statusCondition sc;

public:
    string getEnemyName() const { return this->enemyName; }
    int getTotalHealth() const { return this->totalHealth; }
    int getTotalMagicka() const { return this->totalMagicka; }
    int getTotalStamina() const { return this->totalStamina; }
    int getCurrentHealth() const { return this->currentHealth; }
    int getCurrentMagicka() const { return this->currentMagicka; }
    int getCurrentStamina() const { return this->currentStamina; }

    statusCondition getStatusCondition() const { return this->sc; }
    Weapon getEnemyWeapon() const { return this->enemyWeapon; }
    Armor getEnemyArmor() const { return this->enemyArmor; }
    Loot getEnemyLoot() const { return this->enemyLoot; }

    void setStatusCondition(int sc) { this->sc = static_cast<statusCondition>(sc); }

    Enemy() {}

    Enemy(const string name)
        : enemyName(name)
    {

    }

    void TakeDamage(int amount) {
        currentHealth -= amount;
        if (currentHealth < 0) currentHealth = 0;
    }

    void StatusDamage() {
        switch (sc) {
        case static_cast<statusCondition>(0):
            currentHealth -= 25;
            cout << "\n" << enemyName << " took 25 points of burn damage.";
            break;
        case static_cast<statusCondition>(1):
            currentStamina -= 25;
            cout << "\n" << enemyName << " took 25 stamina points of frost damage.";
            break;
        case static_cast<statusCondition>(2):
            currentMagicka -= 25;
            cout << "\n" << enemyName << " took 25 magicka points of shock damage.";
            break;
        }
    }

    void Rest() {
        currentStamina += 15;
        if (currentStamina > totalStamina)
            currentStamina = totalStamina;
        cout << enemyName << " was too tired to move.\n";
    }
    
    void DisplayEnemyInfo() {
        if (currentHealth < 0) currentHealth = 0;
        if (currentMagicka < 0) currentMagicka = 0;
        if (currentStamina < 0) currentStamina = 0;
        cout << "------- \n Enemy Name: " + this->enemyName +
            "\n \n Enemy Stats \n Enemy Health: " << this->currentHealth << " / " << this->totalHealth <<
            "\n Enemy Magicka: " << this->currentMagicka << " / " << this->totalMagicka <<
            "\n Enemy Stamina: " << this->currentStamina << " / " << this->totalStamina << "\n";

        this->enemyWeapon.DisplayWeaponInfo();

        cout << "------- \n";
    }
};

class Bandit : public Enemy {
private:
    enum banditType
    {
        OHLA,
        OHHA,
        THLA,
        THHA,
        M
    };

    banditType bt;

    vector<Magic> spells;

public:
    Bandit(const string name)
        : Enemy(name)
    {
        random_device rd;
        mt19937 gen(rd());

        bt = static_cast<banditType>(uniform_int_distribution<>(0,4)(gen));

        switch (bt) {
        case 0: {
            this->totalHealth = 35;
            this->totalMagicka = 25;
            this->totalStamina = 70;

            uniform_int_distribution<> dist(9, 11);

            this->enemyWeapon = Weapon(dist(gen));
            break;
        }
        case 1: {
            this->totalHealth = 35;
            this->totalMagicka = 25;
            this->totalStamina = 70;

            uniform_int_distribution<> dist(9, 11);

            this->enemyWeapon = Weapon(dist(gen));
            break;
        }
        case 2: {
            this->totalHealth = 35;
            this->totalMagicka = 25;
            this->totalStamina = 70;

            uniform_int_distribution<> dist(6, 8);

            this->enemyWeapon = Weapon(dist(gen));
            break;
        }
        case 3: {
            this->totalHealth = 35;
            this->totalMagicka = 25;
            this->totalStamina = 70;

            uniform_int_distribution<> dist(6, 8);

            this->enemyWeapon = Weapon(dist(gen));
            break;
        }
        case 4: {
            this->totalHealth = 35;
            this->totalMagicka = 100;
            this->totalStamina = 50;

            this->enemyWeapon = Weapon(18);

            uniform_int_distribution<> dist(0, 2);

            this->spells.push_back(Magic(dist(gen)));
            this->spells.push_back(Magic(3));
            break;
        }
        }

        this->currentHealth = this->totalHealth;
        this->currentMagicka = this->totalMagicka;
        this->currentStamina = this->totalStamina;
    }
};

class BanditOutlaw : public Enemy {
private:
    enum banditOutlawType
    {
        OHLA,
        OHHA,
        THLA,
        THHA,
        M
    };

    banditOutlawType bot;

    vector<Magic> spells;

public:
    BanditOutlaw(const string name) 
        : Enemy(name)
    {
        random_device rd;
        mt19937 gen(rd());

        bot = static_cast<banditOutlawType>(uniform_int_distribution<>(0,4)(gen));

        switch(bot) {
        case 0: {
            this->totalHealth = 109;
            this->totalMagicka = 25;
            this->totalStamina = 86;

            uniform_int_distribution<> dist(15, 17);

            this->enemyWeapon = Weapon(dist(gen));
            break;
        }
        case 1: {
            this->totalHealth = 109;
            this->totalMagicka = 25;
            this->totalStamina = 86;

            uniform_int_distribution<> dist(15, 17);

            this->enemyWeapon = Weapon(dist(gen));

            break;
        }
        case 2: {
            this->totalHealth = 109;
            this->totalMagicka = 25;
            this->totalStamina = 86;

            uniform_int_distribution<> dist(12, 14);

            this->enemyWeapon = Weapon(dist(gen));

            break;
        }
        case 3: {
            this->totalHealth = 109;
            this->totalMagicka = 25;
            this->totalStamina = 86;

            uniform_int_distribution<> dist(12, 14);

            this->enemyWeapon = Weapon(dist(gen));

            break;
        }
        case 4: {
            this->totalHealth = 101;
            this->totalMagicka = 124;
            this->totalStamina = 70;

            this->enemyWeapon = Weapon(18);

            uniform_int_distribution<> dist(0, 2);

            this->spells.push_back(Magic(dist(gen)));
            this->spells.push_back(Magic(3));
            break;
        }
        }

        this->currentHealth = this->totalHealth;
        this->currentMagicka = this->totalMagicka;
        this->currentStamina = this->totalStamina;
    }
};

class Draugr : public Enemy {
public:
    Draugr(const string name)
        : Enemy(name) 
    {
        random_device rd;
        mt19937 gen(rd());

        uniform_int_distribution<> dist(0, 5);

        this->enemyWeapon = Weapon(dist(gen));

        this->totalHealth = 50;
        this->totalMagicka = 0;
        this->totalStamina = 80;

        this->currentHealth = this->totalHealth;
        this->currentMagicka = this->totalMagicka;
        this->currentStamina = this->totalStamina;
    }
};

class RestlessDraugr : public Enemy {
private:
    enum restlessDraugrType
    {
        hS,
        hMs,
        HS
    };

    restlessDraugrType rdt;

    Magic spell;

public:
    RestlessDraugr(const string name)
        : Enemy(name)
    {
        random_device rd;
        mt19937 gen(rd());

        rdt = static_cast<restlessDraugrType>(uniform_int_distribution<>(0, 2)(gen));
        
        switch (rdt) {
        case 0: {
            this->totalHealth = 150;
            this->totalStamina = 205;

            uniform_int_distribution<> dist(0, 5);

            this->enemyWeapon = Weapon(dist(gen));
            break;
        }
        case 1: {
            this->currentHealth = 150;
            this->currentMagicka = 50;
            this->currentStamina = 180;

            uniform_int_distribution<> dist(3, 5);

            this->enemyWeapon = Weapon(dist(gen));

            spell = Magic(1);
            break;
        }
        case 2:{
            this->currentHealth = 175;
            this->currentStamina = 205;

            uniform_int_distribution<> dist(0, 5);

            this->enemyWeapon = Weapon(dist(gen));
            break;
        }
        }

        this->currentHealth = totalHealth;
        this->currentMagicka = totalMagicka;
        this->currentStamina = totalStamina;
    }
};

class WoundedFrostbiteSpider : public Enemy {
public:
    WoundedFrostbiteSpider() {}
    WoundedFrostbiteSpider(const string name) 
        : Enemy(name)
    {
        this->totalHealth = 160;
        this->totalMagicka = 4;
        this->totalStamina = 50;

        this->currentHealth = totalHealth;
        this->currentMagicka = totalMagicka;
        this->currentStamina = totalStamina;
    }
};

class Skeever : public Enemy {
public:
    Skeever() {}
    Skeever(const string name)
        : Enemy(name)
    {
        this->totalHealth = 15;
        this->totalMagicka = 0;
        this->totalStamina = 15;

        this->currentHealth = totalHealth;
        this->currentMagicka = totalMagicka;
        this->currentStamina = totalStamina;
    }
};

class DraugrOverlord : public Enemy {
public:
    DraugrOverlord() {}
    DraugrOverlord(const string name)
        : Enemy(name)
    {
        this->totalHealth = 210;
        this->totalMagicka = 0;
        this->totalStamina = 260;

        random_device rd;
        mt19937 gen(rd());

        this->enemyWeapon = Weapon(uniform_int_distribution<>(0, 5) (gen));

        this->currentHealth = totalHealth;
        this->currentMagicka = totalMagicka;
        this->currentStamina = totalStamina;
    }
};

class Player {
private:
    string name;
    int totalHealth;
    int totalMagicka;
    int totalStamina;

    int currentHealth;
    int currentMagicka;
    int currentStamina;

    Weapon equippedWeapon = Weapon(6);
    Armor equippedArmor;
    vector<Magic> knownSpells = { Magic(1), Magic(2), Magic(3), Magic(4) };
    Loot inventory;

public:
    Player(string name)
        : name(name), totalHealth(200), totalMagicka(150), totalStamina(200)
    {
        currentHealth = totalHealth;
        currentMagicka = totalMagicka;
        currentStamina = totalStamina;
    }

    // Getters
    string getName() const { return name; }
    int getHealth() const { return currentHealth; }
    vector<Magic> getKnownSpells() const { return knownSpells; }

    

    void Rest() {
        currentStamina += 100;
        currentMagicka += 75;
        if (currentStamina > totalStamina)
            currentStamina = totalStamina;
        cout << "Recovered some stamina!\n";
    }

    // Core actions
    void Attack(shared_ptr<Enemy> target) {
        if (equippedWeapon.getWeaponStaminaCost() < currentStamina) {
            int damage = equippedWeapon.getWeaponDamage();

            random_device rd;
            mt19937 gen(rd());

            int critCheck = uniform_int_distribution<>(1, 10)(gen);

            if (critCheck == 10) {
                damage += equippedWeapon.getWeaponCriticalDamage();
                cout << name << " attacks " << target->getEnemyName()
                    << " for " << damage << " critical damage!\n";
            }

            else {
                cout << name << " attacks " << target->getEnemyName()
                    << " for " << damage << " damage!\n";
            }

            currentStamina -= equippedWeapon.getWeaponStaminaCost();
            target->TakeDamage(damage);
        }
    }

    void CastSpell(int spellType,shared_ptr<Enemy> target) {
        Magic spell = Magic(spellType - 1);

        if (currentMagicka >= spell.getSpellMagickaCost()) {
            if (!target) {
                currentHealth += spell.getSpellHealing();
                if (currentHealth > totalHealth) {
                    currentHealth = totalHealth;
                }

                cout << "\n" << name << " healed " << spell.getSpellHealing() << " health points.\n";
            }
            else {
                currentMagicka -= spell.getSpellMagickaCost();
                cout << name << " casts " << spell.getSpellName()
                    << " on " << target->getEnemyName() << "!\n";
                target->TakeDamage(spell.getSpellHealthDamage());
                int statusValue = spell.getStatus();
                target->setStatusCondition(statusValue);

                cout << "\n" << target->getEnemyName() << " took " << spell.getSpellHealthDamage() << " damage and is now " << spell.DisplayStatus() << ".\n";
            }
        }

        else {
            cout << name << " doesn't have enough magicka!\n";
        }
    }

    void TakeDamage(int amount) {
        currentHealth -= amount;
        if (currentHealth < 0) currentHealth = 0;
    }

    bool IsAlive() const { 
        if (currentHealth > 0) {
            return true;
        }
        else {
            cout << "\nPlayer has died...";
            return false;
        }
    }

    void DisplayStats(){
        if (currentMagicka < 0) currentMagicka = 0;
        if (currentStamina < 0) currentStamina = 0;

        cout << "\nPlayer Stats:" << name
            << "\nHealth: " << currentHealth << "/" << totalHealth
            << "\nMagicka: " << currentMagicka << "/" << totalMagicka
            << "\nStamina: " << currentStamina << "/" << totalStamina << "\n"
            << "\nWeapon Stats:";
        equippedWeapon.DisplayWeaponInfo();
    }
};


class Room {
private:
    shared_ptr<Player> player;
    string roomIntro;
    string roomConclusion;
    vector<shared_ptr<Enemy>> roomEnemies;
    Loot roomLoot;
    bool hasPuzzle;
    bool playerActed = false;

public:
    Room(shared_ptr<Player> player, string intro, string conclusion, vector<shared_ptr<Enemy>> enemies, Loot loot, bool hasPuzzle) 
        : player(player), roomIntro(intro), roomConclusion(conclusion), roomEnemies(enemies), roomLoot(loot), hasPuzzle(hasPuzzle)
    {
        
    }

    bool AllEnemiesDead() {
        for (const auto& enemy : roomEnemies)
        {
            if (enemy->getCurrentHealth() > 0) {
                return false;
            }
        }
        return true;
    }

    void SortEnemiesByTurn() {
        for (int i = 0; i < roomEnemies.size(); i++) {
            for (int j = i; j < roomEnemies.size() - i - 1; j++) {
                if (roomEnemies[j]->getTotalStamina() > roomEnemies[j+1]->getTotalStamina()) {
                    swap(roomEnemies[j], roomEnemies[j+1]);
                }

            }
        }
    }

    int playerTurn = 0;

    void Battle() {
        cout << roomIntro << "\n";

        // Sort enemies by stamina before battle begins (higher stamina acts earlier)
        SortEnemiesByTurn();

        while (!AllEnemiesDead() && player->IsAlive()) {
            cout << "\n--- Player Turn " << playerTurn << " ---\n";

            player->DisplayStats();

            // Players turn
            while (!playerActed) {
                cout << "\nChoose an action:\n";
                cout << "1. Attack\n2. Cast Spell\n3. Bag\n4. Inspect\n5. Rest (recover small stamina)\nPlayer Action: ";
                int choice;
                cin >> choice;

                switch (choice) {
                case 1: { // Attack
                    // Select target
                    cout << "\nSelect a target:\n";
                    for (size_t i = 0; i < roomEnemies.size(); ++i) {
                        int enemyHealth = roomEnemies[i]->getCurrentHealth();

                        if (enemyHealth < 0) enemyHealth = 0;

                        cout << i + 1 << ". " << roomEnemies[i]->getEnemyName()
                            << " (" << enemyHealth << " HP)\n";
                    }
                    cout << "Player Action: ";
                    int targetIndex;
                    cin >> targetIndex;
                    
                    if (targetIndex > 0 && targetIndex <= (int)roomEnemies.size()) {
                        player->Attack(roomEnemies[targetIndex - 1]);
                    }

                    else {
                        cout << "Invalid choice.\n";
                    }
                    playerActed = true;
                    break;
                }

                case 2: { // Cast Spell
                    if (player->getKnownSpells().empty()) {
                        cout << "\nYou don't know any spells!\n";
                    }
                    else {
                        // Select target
                        cout << "\nSelect a spell:\nFirebolt: 1 (Health Damage: 25, Magicka Cost: 43, Status: Ignite)\nIce Spike: 2 (Health Damage: 25, Stamina Damage: 25, Magicka Cost: 48, Status: Frostbite)\nLightning Bolt: 3 (Health Damage: 25, Magicka Damage: 13, Magicka Cost: 51, Status: Shocked)\nHealing: 4 (Health Healed: 50, Magicka Cost: 73)\nPlayer Action: ";
                        int spellChoice;
                        cin >> spellChoice;

                        shared_ptr<Enemy> noEnemy = nullptr;

                        if (spellChoice == 4) {
                            player->CastSpell(spellChoice, noEnemy);
                        }
                        else if (spellChoice >= 0 && spellChoice <= 3) {
                            cout << "\nSelect a target:\n";
                            for (size_t i = 0; i < roomEnemies.size(); ++i) {
                                int enemyHealth = roomEnemies[i]->getCurrentHealth();

                                if (enemyHealth < 0) enemyHealth = 0;

                                cout << i + 1 << ". " << roomEnemies[i]->getEnemyName()
                                    << " (" << enemyHealth << " HP)\n";
                            }
                            cout << "Player Option: ";
                            int targetIndex;
                            cin >> targetIndex;

                            if (targetIndex > 0 && targetIndex <= (int)roomEnemies.size()) {
                                player->CastSpell(spellChoice, roomEnemies[targetIndex - 1]);
                            }
                        }

                        else {
                            cout << "Invalid choice.\n";
                        }
                    }
                    playerActed = true;
                    break;
                }

                case 4: { // Inspect
                    cout << "\nSelect a target:\n1. Self\n";
                    for (size_t i = 0; i < roomEnemies.size(); ++i) {
                        int enemyHealth = roomEnemies[i]->getCurrentHealth();

                        if (enemyHealth < 0) enemyHealth = 0;
                        cout << i + 2 << ". " << roomEnemies[i]->getEnemyName()
                            << " (" << enemyHealth << " HP)\n";
                    }
                    cout << "Player Action: ";
                    int targetIndex;
                    cin >> targetIndex;
                    if (targetIndex > 1 && targetIndex <= (int)roomEnemies.size()) {
                        roomEnemies[targetIndex - 2]->DisplayEnemyInfo();
                    }
                    else if (targetIndex == 1) {
                        player->DisplayStats();
                    }
                    else {
                        cout << "Invalid choice.\n";
                    }
                    break;
                }

                case 5: { // Rest
                    cout << player->getName() << " takes a moment to rest.\n";
                    player->Rest();
                    playerActed = true;
                    break;
                }

                default:
                    cout << "Invalid input.";
                    break;
                }
            }
            playerTurn++;

            for(const auto&enemy : roomEnemies)
            {
                cout << "\n--- " << enemy->getEnemyName() << "'s Turn ---";

                // Skip dead enemies
                if (enemy->getCurrentHealth() <= 0) {
                    cout << "\n" << enemy->getEnemyName() << " is dead.\n";
                    continue;
                }

                enemy->StatusDamage();

                if (enemy->getCurrentHealth() <= 0) {
                    cout << "\n" << enemy->getEnemyName() << " is dead.\n";
                    continue;
                }

                int enemyDamage = enemy->getEnemyWeapon().getWeaponDamage();
                bool critHappened = false;

                random_device rd;
                mt19937 gen(rd());

                int critCheck = uniform_int_distribution<>(1,10)(gen);

                if (critCheck == 10) {
                    critHappened = true;
                    enemyDamage += enemy->getEnemyWeapon().getWeaponCriticalDamage();
                }

                // Each enemy attacks the player if they have enough stamina
                if (enemy->getCurrentStamina() > enemy->getEnemyWeapon().getWeaponStaminaCost()) {
                    if (critHappened) {
                        player->TakeDamage(enemyDamage);
                        cout << "\n Player took " << enemyDamage << " points of critical damage!\n";
                    }
                    else {
                        player->TakeDamage(enemyDamage);
                        cout << "\n Player took " << enemyDamage << " points of damage!\n";
                    }
                }
                else {
                    enemy->Rest();
                }
            }
            playerActed = false;
        }
    }

};

void CreateRooms() {
    shared_ptr<Player> player = make_shared<Player>("Traveler");

    // Entrance
    string e1i = "Narrator:\nBleakfalls Barrows; one of many Nordic ruins scattered accross skyrim. Our traveler has been sent out on a Quest: Plunder its depths for the great Dragonstone, along with any other treasures found on their journey. However they should proceed with caution, Bandits are a common sight in ruins and the Draugr call it their home. As they climb its steps looking for the entrance, our traveler meets their first test: 3 hungry bandits.";

    shared_ptr<Enemy> e1e1 = make_shared<Bandit>("Bandit 1");
    shared_ptr<Enemy> e1e2 = make_shared<Bandit>("Bandit 2");
    shared_ptr<Enemy> e1e3 = make_shared<Bandit>("Bandit 3");

    vector<shared_ptr<Enemy>> e1et = { e1e1, e1e2, e1e3 };

    Loot emptyLoot;

    string e1c = "Narrator:\nTaken by surprise by their strength but not by their numbers, our traveler finally makes their way into the ruins unaware of the dangers inside";

    shared_ptr<Room> entrance = make_shared<Room>(player, e1i, e1c, e1et, emptyLoot, false);
    entrance->Battle();

    // Room 1
    string r1d = "";

    unique_ptr<Enemy> r1e1 = make_unique<Bandit>("Bandit 1");
    unique_ptr<Enemy> r1e2 = make_unique<Bandit>("Bandit 2");

    // Room 2.1
    string r2_1d = "";

    unique_ptr<Enemy> r2_1e1 = make_unique<Bandit>("Bandit 1");


    // Room 2.2
    string r2_2d = "";

    unique_ptr<Enemy> r2_2e1 = make_unique<Skeever>("Skeever 1");
    unique_ptr<Enemy> r2_2e2 = make_unique<Skeever>("Skeever 2");
    unique_ptr<Enemy> r2_2e3 = make_unique<Skeever>("Skeever 3");


    // Room 3
    string r3d = "";

    unique_ptr<Enemy> r3e1 = make_unique<Bandit>("Wounded Frostbite Spider");
    
    // Room 4
    string r4d = "";

    // Room 5
    string r5d = "";

    // Room 6
    string r6d = "";

    // Room 7
    string r7d = "";

    // Room 8
    string r8d = "";

    // Room 9
    string r9d = "";

    // Room 10
    string r10d = "";

}

int main()
{
    CreateRooms();

    return 0;
}