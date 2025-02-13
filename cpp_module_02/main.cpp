#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"
#include "Fireball.hpp"
#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}

// int main()
// {
//   Warlock pidor("Pidor", "Ivanovich");
//   Warlock drugoy("CHUJ", "s gory");

//   ASpell* ball = new Fireball;
//   ASpell* morph = new Polymorph;
//   ATarget* wall = new BrickWall;
//   Dummy dummy;
//   TargetGenerator targets;

//   targets.learnTargetType(wall);
//   targets.learnTargetType(wall);
//   targets.learnTargetType(&dummy);
//   targets.learnTargetType(&dummy);
//   targets.learnTargetType(&dummy);
//   targets.learnTargetType(NULL);

//   pidor.learnSpell(ball);
//   drugoy.learnSpell(morph);

//   pidor.launchSpell("Fireball", dummy);
//   pidor.forgetSpell("Fireball");
//   pidor.launchSpell("Fireball", dummy);

//   ATarget* newdummy = targets.createTarget("Target Practice Dummy");
//   ATarget* shit = targets.createTarget("Shit");
//   targets.learnTargetType(shit);


//   drugoy.launchSpell("Polymorph", *newdummy);
//   drugoy.launchSpell("Fireball", dummy);

//   targets.forgetTargetType("Target Practice Dummy");
//   targets.forgetTargetType("Shit");
  

//   delete ball;
//   delete morph;
//   delete wall;
//   delete newdummy;
// }
