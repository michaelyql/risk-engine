#pragma once

#include "marketDataLoader.h"

namespace riskengine {
class marketDataLoaderImpl: marketDataLoader {
    void retrieveMarketData() override;
};
}
