# deresute-autofun
## Overview
Autopatcher for [THE IDOLM@STER CINDERELLA GIRLS: STARLIGHT STAGE](https://play.google.com/store/apps/details?id=jp.co.bandainamcoent.BNEI0242&hl=), works for all version/region. The provided tool will automatically unpack the APK, then insert smali files and code which required to load the provided native library.

By using this tool and distributes the generated modified APK on the internet, you're helping me to kill android modders, even if by small percentage. Thank you.

### Features
Adjustable auto-play, manual-always-perfect and no damage.

### Longevity
The provided tool and native library will works even when the game is officially updated, unless there are major changes which affect entire functionality. So, this tool will probably works until the game dies or until another layer of security being added into the game.

### Device support
32-bit ARM and x86, at the moment.

## Requirements
- JRE/JDK 11.02 or newer

## Download
You can download it on [Releases](https://github.com/k0np4ku/deresute-autofun/releases) page.

## Base APK
Follow the following steps if you are having a difficulty with retrieving Armv7 version of the original apk. This requires older version of Android emulator, such as **LDPlayer 3.82** or older. You can get the said version of LDPlayer from [here](https://encdn.ldmnq.com/download/package/LDPlayer_3.82.exe) or [here](https://momo-app-player.en.uptodown.com/windows/download/2180580).

- Download and open QooApp
- Search and download "**THE IDOLM@STER CINDERELLA GIRLS: STARLIGHT STAGE**"
- **Don't install it once the download is finished**, instead open the file manager and go to **Android/data/com.qooapp.qoohelper/files/Download/game/jp.co.bandainamcoent.BNEI0242**
- There you can find the base apk, then copy the said file to the shared folder

**P.S**: Don't use the emulator for production or play games since it's a bit slower than the newer version. Use it only if you need to retrieve Armv7 version of the apk you want.

## Usage
```
$ auto <apk-file>
```

## Configuration
You can find the configuration file on the application's data path.
- **Japan version:** Android/data/jp.co.bandainamcoent.BNEI0242/files/koaConf.ini

In case you fucked up, you can delete the existing koaConf.ini and then a new configuration will be generated, or you can copy the following text:
```
# Note
## Types
# - Boolean: Only accept true & false as its value, and true means enabled, while false means disabled
# - Float: Fractional value, e.g., 1.0, 10.0, 100.0
# - Int: Integrer, or in idiot's language, a number

[main]
# Boolean | Setting this to false will disables entire functionality
enabled=true

# Boolean
# true = autoplay
# false = manual & always perfect
autoplay=true

[manual]
# Boolean
noDamage=true

[autoplay]
# Int | Probability of doing perfect combo
# If rng% is lower than perfectCombo%, then the game will do perfectCombo, otherwise do either greatCombo or goodCombo (if enabled)
perfectComboProbability=98

# Boolean | Enabling this means that when rng% is greater than perfectCombo%, the game will do either greatCombo or goodCombo
# Logic: if rng% is lower than perfectCombo%, do perfectCombo, otherwise -
#        if greatCombo% is greater than goodCombo%, then do greatCombo, otherwise do goodCombo
# Setting this to false means that when rng% is greater than perfectCombo%, the game will simply do greatCombo
doGoodCombo=false

# Int | Probability of doing miss combo
# Logic: if missCombo% is greater than perfectCombo%, then do missCombo, otherwise continue to the next logic (read above)
missComboProbability=0
```
