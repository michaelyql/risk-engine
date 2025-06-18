#ifndef LOADER_MARKET_DATA_LOADER_IMPLH_H
#define LOADER_MARKET_DATA_LOADER_IMPLH_H

#include "marketDataLoader.h"

namespace riskengine {
class MarketDataLoaderImpl: MarketDataLoader {
public:
    MarketDataLoaderImpl(
        const std::vector<std::string>& marketData
    ): marketData_(marketData) {};

    ~MarketDataLoaderImpl() override {}

    void retrieveMarketData() override;
private:
    std::vector<std::string> marketData_;
};
} // namespace riskengine

#endif // LOADER_MARKET_DATA_LOADER_IMPLH_H
