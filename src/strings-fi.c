#include "strings-fi.h"

const char* const HOURS_FI[] = {
  // AM hours
  "kaksitoista",
  "yksi",
  "kaksi",
  "kolme",
  "neljä",
  "viisi",
  "kuusi",
  "seitsemän",
  "kahdeksan",
  "yhdeksän",
  "kymmenen",
  "yksitoista",

  // PM hours
  "kaksitoista",
  "yksi",
  "kaksi",
  "kolme",
  "neljä",
  "viisi",
  "kuusi",
  "seitsemän",
  "kahdeksan",
  "yhdeksän",
  "kymmenen",
  "yksitoista"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_FI[] = {
  "*$1",
  "viisi yli *$1",
  "kymmenen yli *$1",
  "vartin yli *$1",
  "20 yli *$1",
  "25 yli *$1",
  "puoli *$2",
  "25 vaille *$2",
  "20 vaille *$2",
  "varttia vaille *$2",
  "kymmentä vaille *$2",
  "viittä vaille *$2"
};
