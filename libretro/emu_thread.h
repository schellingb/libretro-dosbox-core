// This is copyrighted software. More information is at the end of this file.
#pragma once
#include <atomic>

/* Dosbox doesn't have a top-level main loop that we can use, so instead we run it in its own thread
 * and switch between it and the main thread by using the two following blocking functions.
 *
 * switchToEmuThread() must only be called from the main thread. Blocks until the dosbox thread
 * calls switchToMainThread().
 *
 * switchToMainThread() is the reverse. It must only be called from the dosbox thread and blocks
 * until the main thread calls switchToEmuThread().
 */
void switchToEmuThread();
void switchToMainThread();

/*

Copyright (C) 2019 Nikos Chantziaras.

This file is part of DOSBox-core.

DOSBox-core is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 2 of the License, or (at your option) any later
version.

DOSBox-core is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
DOSBox-core. If not, see <https://www.gnu.org/licenses/>.

*/
