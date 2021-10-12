#ifndef DATA_ACCESS_H
#define DATA_ACCESS_H

#include "AccessUser.h"
#include "AccessDepartment.h"
#include "SqlserverUser.h"
#include "SqlserverDepartment.h"
#include <unordered_map>
#include <string>

typedef void* (*pCreateObject)(void);

class DataAccess {
public:
    static IUser* CreateUser();
    static IDepartment* CreateDepartment();

private:
    DataAccess() {}

    const static std::string db; // 读取配置文件获取数据库类型 Access Sqlserver
    const static std::unordered_map<std::string, pCreateObject> m_class;
};

const std::string DataAccess::db = "Sqlserver";

const std::unordered_map<std::string, pCreateObject> DataAccess::m_class = {
        REGISTER(AccessUser),
        REGISTER(AccessDepartment),

        REGISTER(SqlserverUser),
        REGISTER(SqlserverDepartment),
    };

IUser* DataAccess::CreateUser() {
    auto it = m_class.find(db + "User");

    if (it == m_class.end()) {
        return 0;
    }

    return (IUser*) it->second();
}

IDepartment* DataAccess::CreateDepartment() {
    auto it = m_class.find(db + "Department");

    if (it == m_class.end()) {
        return 0;
    }

    return (IDepartment*) it->second();
}

#endif