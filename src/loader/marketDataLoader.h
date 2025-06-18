#pragma once

namespace riskengine {
    
class marketDataLoader {
public: 
    virtual void retrieveMarketData(/* params */) = 0;
};


} // namespace riskengine
