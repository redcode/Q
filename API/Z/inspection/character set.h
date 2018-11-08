/* Z Kit - inspection/character set.h
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2018 Manuel Sainz de Baranda y Goñi.
-------------------------------------------------------------------------------
This library is  free software: you can redistribute it  and/or modify it under
the terms  of the GNU  Lesser General Public License  as published by  the Free
Software Foundation, either  version 3 of the License, or  (at your option) any
later version.

This library is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received  a copy of the GNU Lesser General Public License along
with this library. If not, see <http://www.gnu.org/licenses/>.
---------------------------------------------------------------------------- */

#ifndef _Z_inspection_character_set_H_
#define _Z_inspection_character_set_H_

#define Z_CHARACTER_SET_DIGITS_ARE_CONSECUTIVE			    \
	(  ('0' < '9')						    \
	&& ('0' + 1 == '1') && ('1' + 1 == '2') && ('2' + 1 == '3') \
	&& ('3' + 1 == '4') && ('4' + 1 == '5') && ('5' + 1 == '6') \
	&& ('6' + 1 == '7') && ('7' + 1 == '8') && ('8' + 1 == '9'))

#define Z_CHARACTER_SET_UPPERCASE_LETTERS_ARE_CONSECUTIVE	    \
	(  ('A' < 'Z')						    \
	&& ('A' + 1 == 'B') && ('B' + 1 == 'C') && ('C' + 1 == 'D') \
	&& ('D' + 1 == 'E') && ('E' + 1 == 'F') && ('F' + 1 == 'G') \
	&& ('G' + 1 == 'H') && ('H' + 1 == 'I') && ('I' + 1 == 'J') \
	&& ('J' + 1 == 'K') && ('K' + 1 == 'L') && ('L' + 1 == 'M') \
	&& ('M' + 1 == 'N') && ('N' + 1 == 'O') && ('O' + 1 == 'P') \
	&& ('P' + 1 == 'Q') && ('Q' + 1 == 'R') && ('R' + 1 == 'S') \
	&& ('S' + 1 == 'T') && ('T' + 1 == 'U') && ('U' + 1 == 'V') \
	&& ('V' + 1 == 'W') && ('W' + 1 == 'X') && ('X' + 1 == 'Y') \
	&& ('Y' + 1 == 'Z'))

#define Z_CHARACTER_SET_LOWERCASE_LETTERS_ARE_CONSECUTIVE	    \
	(  ('a' < 'z')						    \
	&& ('a' + 1 == 'b') && ('b' + 1 == 'c') && ('c' + 1 == 'd') \
	&& ('d' + 1 == 'e') && ('e' + 1 == 'f') && ('f' + 1 == 'g') \
	&& ('g' + 1 == 'h') && ('h' + 1 == 'i') && ('i' + 1 == 'j') \
	&& ('j' + 1 == 'k') && ('k' + 1 == 'l') && ('l' + 1 == 'm') \
	&& ('m' + 1 == 'n') && ('n' + 1 == 'o') && ('o' + 1 == 'p') \
	&& ('p' + 1 == 'q') && ('q' + 1 == 'r') && ('r' + 1 == 's') \
	&& ('s' + 1 == 't') && ('t' + 1 == 'u') && ('u' + 1 == 'v') \
	&& ('v' + 1 == 'w') && ('w' + 1 == 'x') && ('x' + 1 == 'y') \
	&& ('y' + 1 == 'z'))

#define Z_CHARACTER_SET_IS_ASCII					 \
	(  (' ' ==  32) && ('!' ==  33) && ('"'  ==  34) && ('#' ==  35) \
	&& ('%' ==  37) && ('&' ==  38) && ('\'' ==  39) && ('(' ==  40) \
	&& (')' ==  41) && ('*' ==  42) && ('+'  ==  43) && (',' ==  44) \
	&& ('-' ==  45) && ('.' ==  46) && ('/'  ==  47) && ('0' ==  48) \
	&& ('1' ==  49) && ('2' ==  50) && ('3'  ==  51) && ('4' ==  52) \
	&& ('5' ==  53) && ('6' ==  54) && ('7'  ==  55) && ('8' ==  56) \
	&& ('9' ==  57) && (':' ==  58) && (';'  ==  59) && ('<' ==  60) \
	&& ('=' ==  61) && ('>' ==  62) && ('?'  ==  63) && ('A' ==  65) \
	&& ('B' ==  66) && ('C' ==  67) && ('D'  ==  68) && ('E' ==  69) \
	&& ('F' ==  70) && ('G' ==  71) && ('H'  ==  72) && ('I' ==  73) \
	&& ('J' ==  74) && ('K' ==  75) && ('L'  ==  76) && ('M' ==  77) \
	&& ('N' ==  78) && ('O' ==  79) && ('P'  ==  80) && ('Q' ==  81) \
	&& ('R' ==  82) && ('S' ==  83) && ('T'  ==  84) && ('U' ==  85) \
	&& ('V' ==  86) && ('W' ==  87) && ('X'  ==  88) && ('Y' ==  89) \
	&& ('Z' ==  90) && ('[' ==  91) && ('\\' ==  92) && (']' ==  93) \
	&& ('^' ==  94) && ('_' ==  95) && ('a'  ==  97) && ('b' ==  98) \
	&& ('c' ==  99) && ('d' == 100) && ('e'  == 101) && ('f' == 102) \
	&& ('g' == 103) && ('h' == 104) && ('i'  == 105) && ('j' == 106) \
	&& ('k' == 107) && ('l' == 108) && ('m'  == 109) && ('n' == 110) \
	&& ('o' == 111) && ('p' == 112) && ('q'  == 113) && ('r' == 114) \
	&& ('s' == 115) && ('t' == 116) && ('u'  == 117) && ('v' == 118) \
	&& ('w' == 119) && ('x' == 120) && ('y'  == 121) && ('z' == 122) \
	&& ('{' == 123) && ('|' == 124) && ('}'  == 125) && ('~' == 126))

#endif /* _Z_inspection_character_set_H_ */
