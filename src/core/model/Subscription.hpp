//
// Created by Raffaele Montella on 27/10/2018.
//

#ifndef SIGNALK_SERVER_CPP_SUBSCRIPTION_HPP
#define SIGNALK_SERVER_CPP_SUBSCRIPTION_HPP


#include "../utils/String.hpp"
#include <nlohmann/json.hpp>
#include <string>
#include <regex>

namespace SignalK {
    class Subscription {
    public:
        Subscription(std::string context, nlohmann::json subscribe);

        std::string getKey();

        std::string getContext() { return context; }

        std::string getPath() { return path; }

        std::regex getRegex() { return regex; }

    private:
        std::string context;
        std::string path;
        std::regex regex;


    };

}
#endif //SIGNALK_SERVER_CPP_SUBSCRIPTION_HPP
