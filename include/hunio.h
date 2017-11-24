/**
 * @file   hunio.h
 * @author Andras Gerendas
 * @date   November, 2017
 * @brief  Kimeneti-bemeneti fuggvenyek implementacioja az stdio.h-bol
 */

#ifndef HUNC_HUNIO_H_
#define HUNC_HUNIO_H_

#include "hunc.h"

/**
 * Kiirja a beirott szoveget az alak szerint megformazva az altalanos
 * kimenetre.
 * @param alak Az alak, mely alapjan formazza a szoveget
 * @return A kiirt karakterek szama, vagy egy negativ szam hiba eseten.
 */
egesz
ird(allando betu* alak, ...);

/**
 * Beolvas egy formazott szoveget az alak szerint az altalanos bemenetrol.
 * A valaszthato parameterek mutatok azokra a memoriacimekre, ahova a
 * beolvasott adatok kerulnek.
 * @param alak Az alak, mely alapjan az altalanos bemenetrol beolvasasra
 * kerulnek a valtozok.
 * @return A sikeres hozzarendelesek szama. Ha egy fajlveget jelzo eset
 * all fenn, illetve az alak szerinti nem lathato karakterek, vagy pedig
 * konkret karakterek, akkor FVG-gel ter vissza.
 */
egesz
kerd(allando betu* alak, ...);

#endif /* HUNC_HUNIO_H_ */
