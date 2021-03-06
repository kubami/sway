#ifndef _SWAY_SECURITY_H
#define _SWAY_SECURITY_H
#include <unistd.h>
#include "sway/config.h"

uint32_t get_feature_policy(pid_t pid);
uint32_t get_ipc_policy(pid_t pid);
uint32_t get_command_policy(const char *cmd);

const char *command_policy_str(enum command_context context);

struct feature_policy *alloc_feature_policy(const char *program);
struct ipc_policy *alloc_ipc_policy(const char *program);
struct command_policy *alloc_command_policy(const char *command);

#endif
