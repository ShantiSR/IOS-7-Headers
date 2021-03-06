/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBasePluginPackage : NSObject
{
    NSMutableSet *pluginDatabases;
    struct String path;
    struct PluginInfo pluginInfo;
    struct RetainPtr<__CFBundle *> cfBundle;
    void *BP_CreatePluginMIMETypesPreferences;
}

+ (id)preferredLocalizationName;
+ (id)pluginWithPath:(id)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct String)bundleVersion;
- (struct String)bundleIdentifier;
- (void)wasRemovedFromPluginDatabase:(id)arg1;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (unsigned long)versionNumber;
- (BOOL)isNativeLibraryData:(id)arg1;
- (BOOL)isJavaPlugIn;
- (BOOL)isQuickTimePlugIn;
- (id)MIMETypeForExtension:(const struct String *)arg1;
- (BOOL)supportsMIMEType:(const struct String *)arg1;
- (BOOL)supportsExtension:(const struct String *)arg1;
- (const struct PluginInfo *)pluginInfo;
- (const struct String *)path;
- (void)finalize;
- (void)dealloc;
- (BOOL)load;
- (BOOL)getPluginInfoFromPLists;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (id)pListForPath:(id)arg1 createFile:(BOOL)arg2;
- (void)createPropertyListFile;
- (void)unload;
- (id)initWithPath:(id)arg1;

@end

