// Manual educational reconstruction from ARM64 instructions; NOT original source.
// The class/interface declarations are intentionally omitted. This file is for reading.
// Requires Apple Foundation/UIKit if incorporated into an iOS project.

// +[DLHelper boolForKey:] at 0x9083c, runtime encoding B24@0:8@16
+ (BOOL)boolForKey:(NSString *)key {
    return [[NSUserDefaults standardUserDefaults] boolForKey:key];
}

// +[DLHelper setBool:forKey:] at 0x906d0, encoding v28@0:8B16@20
+ (void)setBool:(BOOL)value forKey:(NSString *)key {
    [[NSUserDefaults standardUserDefaults] setBool:value forKey:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

// +[DLHelper setObject:forKey:] at 0x9077c, encoding v32@0:8@16@24
+ (void)setObject:(id)object forKey:(NSString *)key {
    [[NSUserDefaults standardUserDefaults] setObject:object forKey:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

// -[DLMediaData convertTimeToString:] at 0xa45c8, encoding @24@0:8d16
// Simplified equivalent for ordinary nonnegative media durations.
// Original uses optimized signed arithmetic with 16-bit intermediate operations;
// this reconstruction does not promise identical extreme/negative/NaN behavior.
- (NSString *)convertTimeToString:(double)duration {
    long totalSeconds = (long)duration;
    long hours = totalSeconds / 3600;
    long minutes = (totalSeconds % 3600) / 60;
    long seconds = totalSeconds % 60;
    if (hours != 0) {
        return [NSString stringWithFormat:@"%ld:%02ld:%02ld", hours, minutes, seconds];
    }
    return [NSString stringWithFormat:@"%ld:%02ld", minutes, seconds];
}

// +[DLInsta openUsernameInApp:] at 0x90cd4, encoding v24@0:8@16
+ (void)openUsernameInApp:(NSString *)username {
    NSString *address = [NSString stringWithFormat:@"instagram://user?username=%@", username];
    NSURL *url = [NSURL URLWithString:address];
    UIApplication *application = [UIApplication sharedApplication];
    if ([application canOpenURL:url]) {
        [application openURL:url options:@{} completionHandler:nil];
    }
}
