/**
 * Copyright 2016 Alexander Koehler
 *
 * This file is part of Clara 2.
 *
 * Clara 2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Clara 2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Clara 2.
 * If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once

const double omega_max                 = 3.0e19;      /* maximum of plotted frequency Hz */
const double theta_max                 = 1.14594939;  /* maximum of theta in degree */
const unsigned int N_spectrum          = 2048; /* number of frequencies "omega"*/
const unsigned int N_theta             = 120;     /* number of directions in first angle "theta" */
const unsigned int N_phi               = 2;         /* number of directions in second angle "phi" */
const unsigned int N_trace             = 2000;    /* maximum number of traces */

const unsigned int fft_length_factor   = 1;

// explicit for process_data
const unsigned int N_omega             = N_spectrum;
const unsigned int index_files_first   = 0;
const unsigned int index_files_last    = N_trace;