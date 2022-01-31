/*
 * Copyright (c) 2022 Jon Palmisciano. All rights reserved.
 *
 * Use of this source code is governed by the BSD 3-Clause license; the full
 * terms of the license can be found in the LICENSE.txt file.
 */

#pragma once

#include "AbstractFile.h"
#include "AnalysisInfo.h"

#include <memory>

namespace ObjectiveNinja {

using SharedAnalysisInfo = std::shared_ptr<AnalysisInfo>;
using SharedAbstractFile = std::shared_ptr<AbstractFile>;

/**
 * Abstract base class for analyzers.
 */
class Analyzer {
protected:
    std::shared_ptr<AnalysisInfo> m_info;
    std::shared_ptr<AbstractFile> m_file;

public:
    Analyzer(SharedAnalysisInfo, SharedAbstractFile);
    virtual ~Analyzer() = default;

    virtual void run() = 0;
};

}
