# deresute-autofun
## Requirements
- JRE/JDK 11.02 or newer

## Download
You can download it on [Releases](https://github.com/k0np4ku/deresute-autofun/releases) page.

## Usage
```
$ auto <apk-file>
```

Note: Remove whitespaces from the file name.

## Configuration
You can find the configuration file on the application's data path.
- **Japan version:** Android/data/jp.co.bandainamcoent.BNEI0242/files/koaConf_v2.ini


```
# [1] To reset configuration, you can delete this file. The configuration will be regenerated once you restart the game.
# [2] You also have to restart the game for any changes to be effective.

# Value types
# boolean: true, false
# integer(number): 0~100

[main]
# true = enable mod || false = disable mod
enabled=true

# true = autoplay || false = manual + always perfect
autoplay=true

[manual]
# true = enabled
noDamage=true

[autoplay]
# chance of perfect combo (set to 100 if you hate fun, I guess)
perfectChance=98

# chance of miss
missChance=0

# [1] By default, the mod will do a great combo when rngChance% is lower than perfectChance%
# [2] The probability of greatCombo is 90%, while the probability of niceCombo is 10%
# Meaning, set this to true if you also want to mix nice combos here and there
doNiceCombo=false
```
