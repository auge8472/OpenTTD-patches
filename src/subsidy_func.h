/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file subsidy_func.h Functions related to subsidies. */

#ifndef SUBSIDY_FUNC_H
#define SUBSIDY_FUNC_H

#include <utility>

#include "core/geometry_type.hpp"
#include "station_type.h"
#include "company_type.h"
#include "cargo_type.h"
#include "news_type.h"

void DeleteSubsidyWith(SourceType type, SourceID index);
bool CheckSubsidised(CargoID cargo_type, CompanyID company, const CargoSource &src, const Station *st);
void RebuildSubsidisedSourceAndDestinationCache();
void DeleteSubsidy(struct Subsidy *s);

#endif /* SUBSIDY_FUNC_H */
