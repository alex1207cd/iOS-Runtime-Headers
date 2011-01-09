/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class ASAccount, NSMutableArray, NSString, NSError, MCEASPolicyPreflighter;



@interface MCEASAccountPayloadHandler : MCPayloadHandler <EASPreflightUI, DAValidityCheckConsumer>
{
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddr;
    ASAccount *_account;
    BOOL _ssl;
    MCEASPolicyPreflighter *_policyPreflighter;
    BOOL _donePreflighting;
    BOOL _passcodeAccepted;
    NSString *_pinQuestionLabel;
    BOOL _doneValidatingAccount;
    NSError *_validationError;
    BOOL _needsPreparePhase;
    NSMutableArray *_fieldsSetByAnswers;
    NSError *_policyRequestError;
}

+ (void)checkOrphanAccounts;
+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (id)removePoliciesForTags:(id)arg1;
+ (BOOL)accountWithTagIsManaged:(id)arg1;
+ (id)displayNameFromTag:(id)arg1;
+ (id)activePolicyKeyForTag:(id)arg1;
+ (void)accountNeedsPolicyUpdateForAccountID:(id)arg1;
+ (void)preflighter:(id)arg1 needsComplianceWithPolicy:(id)arg2;
+ (void)preflighterSuccessWithoutPolicyUpdate:(id)arg1;
+ (void)preflighterRemoteWipeRequested:(id)arg1;
+ (void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1;
+ (void)preflighter:(id)arg1 successWithPolicy:(id)arg2 policyKey:(id)arg3;
+ (void)preflighter:(id)arg1 error:(id)arg2;

- (id)initWithPayload:(id)arg1;
- (void)dealloc;
- (void)setPolicyPreflighter:(id)arg1;
- (id)account;
- (id)createAccount;
- (id)deleteAccount;
- (void)clearAnswersAfterValidationError;
- (id)validateAccountWithServer;
- (void)willContinueAfterFailingStep:(NSInteger)arg1;
- (void)willRetryStep:(NSInteger)arg1;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (BOOL)needsPreparationWithRoot:(id)arg1 truth:(id)arg2;
- (BOOL)needsPreflightWithRoot:(id)arg1 truth:(id)arg2;
- (id)userPromptValues;
- (void)setUserPromptedValues:(id)arg1;
- (id)validatePayload;
- (id)validateSystemForPayload;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (id)descriptionForPrompt;
- (void)preflighter:(id)arg1 needsComplianceWithPolicy:(id)arg2;
- (void)preflighter:(id)arg1 encounteredError:(id)arg2;
- (void)preflighterSuccess:(id)arg1;
- (void)abortPreflighter:(id)arg1;
- (id)createEASErrorFromValidationError:(id)arg1;
- (id)createOnlyOneAccountSupportedError;
- (id)createCannotRetrievePolicyError;

@end
