#include "deresute.h"

Combo evaluateCombo(Combo *combo) {
  if (combo == nullptr) {
    auto x = Combo::None;
    combo = &x;
  }

  if (conf.autoplay) {
    auto rngChance = rng();
    if (rngChance < conf.missChance) {
      *combo = Combo::Miss;
    } else if (conf.perfectChance != 100 && rngChance > conf.perfectChance) {
      *combo = !conf.doNiceCombo || (conf.doNiceCombo && rngChance < 80) ? Combo::Great : Combo::Nice;
    } else {
      *combo = Combo::Perfect;
    }
  }

  return *combo;
}
