//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    std::vector<String> vec = s.split(' ');
    if (vec.size() == 10) {
      host = vec[0];
      std::vector<String> date_time = vec[3].split(':');

      std::vector<String> date_string = date_time[0].split('/');

      String day = date_string[0].substr(1, date_string[0].length());
      date.setday(day);

      String month = date_string[1];
      date.setmonth(month);

      String year = date_string[2].conversion_int();
      date.setyear(year);

      time.sethour(date_time[1].conversion_int());
      time.setminute(date_time[2].conversion_int());
      time.setsecond(date_time[3].conversion_int());

      request = vec[5] + vec[6] + vec[7];

      status = vec[8];

      if (vec[9] == '-'){
	number_of_bytes = 0;
      }
      number_of_bytes = vec[9].conversion_int();
    }else{
      host = "";
      date.setday("");
      date.setmonth("");
      date.setyear(0);
      time.sethour(0);
      time.setminute(0);
      time.setsecond(0);
      request = "";
      status = "";
      number_of_bytes = 0;
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    do{
      String line = getline(in);
      LogEntry log(line);
      result.push_back(log);
    }while (!in.eof());
  return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &) {
  for (unsigned int i = 0; i < vec_o_logs.size(); ++i) {
    out << vec_o_logs[i];
  }  
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>&) {
  for (unsigned int i = 0; i < logs.size(); ++i){
    out << logs[i].gethost() << std::endl;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &) {
  int sum = 0;
  for(unsigned int i = 0; i < logs.size(); ++i){
    sum += logs[i].getbytes();
  }
    return sum;
}

String getline(std::istream& in){
  String line;
  char ch = '\0';
  for (int i = (in.get(ch), 0); (ch != '\n') && (!in.fail()); ++i, in.get(ch)){
    if (i == line.length()){
      line.resetCapacity(line.length() * 2);
    }
    line += ch;
  }
  return line;
}
