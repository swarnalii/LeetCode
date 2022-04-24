class UndergroundSystem {
public:
    unordered_map<int, pair<string, int>> checkInMap; // id - {startStation, time}
    unordered_map<string, pair<double, int>> routeMap; // routeName - {totalTime, count}
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        checkInMap[id] = {stationName, t};    
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkInData = checkInMap[id];
        checkInMap.erase(id);
        
        string routeName = checkInData.first + "-" + stationName;
        routeMap[routeName].first += t - checkInData.second;
        routeMap[routeName].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "-" + endStation;
        auto route = routeMap[routeName];
        return route.first/route.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */

