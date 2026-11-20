/* Copyright 2026 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* A static constexpr member of a class template with a non-type template
   parameter.  The reference from the member typedef forces GCC to emit the
   declaration DIE (DW_TAG_variable with DW_AT_const_value) in DWARF5.  */

template<long N>
struct S
{
  static constexpr unsigned v = N;
  using P = int[v];
};

S<1> s;

int
main ()
{
  return 0;
}
