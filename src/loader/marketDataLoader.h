#ifndef LOADER_MARKET_DATA_LOADER_H
#define LOADER_MARKET_DATA_LOADER_H

#include <string>
#include <vector>

namespace riskengine {

/**
 * Abstract base class defining an interface to load market data.
 */
class MarketDataLoader {
public: 
    virtual void retrieveMarketData() = 0;
    virtual ~MarketDataLoader() = default;
};


} // namespace riskengine

#endif // LOADER_MARKET_DATA_LOADER_H
