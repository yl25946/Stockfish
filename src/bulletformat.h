/*
  Stockfish, a UCI chess playing engine derived from Glaurung 2.1
  Copyright (C) 2004-2025 The Stockfish developers (see AUTHORS file)

  Stockfish is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Stockfish is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef BULLETFORMAT_H_INCLUDED
#define BULLETFORMAT_H_INCLUDED

#include <cstdint>

namespace Stockfish {

struct __attribute__((packed)) BulletEntry {
    std::uint64_t occ;
    std::uint8_t  pcs[16];
    std::int16_t  score;
    std::uint8_t  result;
    std::uint8_t  king_square;
    std::uint8_t  opp_king_square;
    std::uint8_t  extra[3];
};

}


#endif
