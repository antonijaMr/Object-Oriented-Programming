#pragma once
#include <vector>
#include <string>
#include <algorithm>

std::string maxrijec(std::vector<std::string>& a){
  auto kriterij = [](std::string a, std::string b){
    return a.size() < b.size();
  };

  std::sort(a.begin(),a.end(),kriterij);
  return a.at(a.size()-1);
}
