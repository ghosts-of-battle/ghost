# TAC//PAC

`ghost_pac`

The tacpad's drawing grammar - row heights, padding, rule weights - so the PAC app is drawn in the same hand as every other app in the suite.

<!-- generated below this line by tools/gen_addon_readmes.py - do not edit -->

## Requires

- `ghost_main`
- `ghost_common`
- `ghost_adminpanel`
- `ghost_tacpad`
- `ghost_notify`

Carries `skipWhenMissingDependencies` - the PBO is skipped rather than breaking the load order when something above is absent.

## Ships

189 functions.

## CBA settings

| Setting | Type | Name |
|---|---|---|
| `ghost_pac_testUid` | EDITBOX | Test as Steam id (editor only) |
| `ghost_pac_netCheck` | CHECKBOX | Log this server's public IP at boot |

## Functions

<details><summary>189</summary>

- `ghost_pac_fnc_adminAddOperator`
- `ghost_pac_fnc_adminApplication`
- `ghost_pac_fnc_adminDoc`
- `ghost_pac_fnc_adminDocs`
- `ghost_pac_fnc_adminGet`
- `ghost_pac_fnc_adminLog`
- `ghost_pac_fnc_adminLogAdd`
- `ghost_pac_fnc_adminOpord`
- `ghost_pac_fnc_adminOrbat`
- `ghost_pac_fnc_adminRecv`
- `ghost_pac_fnc_adminSave`
- `ghost_pac_fnc_adminSet`
- `ghost_pac_fnc_adminSetting`
- `ghost_pac_fnc_adminStructure`
- `ghost_pac_fnc_adminTemplate`
- `ghost_pac_fnc_adminText`
- `ghost_pac_fnc_adminTicket`
- `ghost_pac_fnc_adminTicketKind`
- `ghost_pac_fnc_app`
- `ghost_pac_fnc_applyAsk`
- `ghost_pac_fnc_applyOnClient`
- `ghost_pac_fnc_applyRank`
- `ghost_pac_fnc_applyRecv`
- `ghost_pac_fnc_applySkills`
- `ghost_pac_fnc_applySubmit`
- `ghost_pac_fnc_applyTemp`
- `ghost_pac_fnc_attendanceOf`
- `ghost_pac_fnc_attendanceReport`
- `ghost_pac_fnc_autoSlot`
- `ghost_pac_fnc_backupDump`
- `ghost_pac_fnc_boot`
- `ghost_pac_fnc_bootDoc`
- `ghost_pac_fnc_bootFail`
- `ghost_pac_fnc_bootLog`
- `ghost_pac_fnc_bootScreen`
- `ghost_pac_fnc_canTake`
- `ghost_pac_fnc_cfgCode`
- `ghost_pac_fnc_cfgList`
- `ghost_pac_fnc_cfgLists`
- `ghost_pac_fnc_csvImport`
- `ghost_pac_fnc_docsSort`
- `ghost_pac_fnc_exportClasses`
- `ghost_pac_fnc_fileFed`
- `ghost_pac_fnc_fromJson`
- `ghost_pac_fnc_hostRefresh`
- `ghost_pac_fnc_import`
- `ghost_pac_fnc_leaderNotice`
- `ghost_pac_fnc_loadStructure`
- `ghost_pac_fnc_loadoutApply`
- `ghost_pac_fnc_loadoutSave`
- `ghost_pac_fnc_loadoutSend`
- `ghost_pac_fnc_loadoutStore`
- `ghost_pac_fnc_logAction`
- `ghost_pac_fnc_logRecv`
- `ghost_pac_fnc_lookup`
- `ghost_pac_fnc_managedNames`
- `ghost_pac_fnc_minutesStamp`
- `ghost_pac_fnc_operatorJson`
- `ghost_pac_fnc_operatorSeq`
- `ghost_pac_fnc_opordAsk`
- `ghost_pac_fnc_opordDef`
- `ghost_pac_fnc_opordField`
- `ghost_pac_fnc_opordPost`
- `ghost_pac_fnc_pgAddOperator`
- `ghost_pac_fnc_pgApplication`
- `ghost_pac_fnc_pgApplications`
- `ghost_pac_fnc_pgArsenalList`
- `ghost_pac_fnc_pgArsenalLists`
- `ghost_pac_fnc_pgBackup`
- `ghost_pac_fnc_pgConfigs`
- `ghost_pac_fnc_pgDashboard`
- `ghost_pac_fnc_pgDeckField`
- `ghost_pac_fnc_pgDeckLine`
- `ghost_pac_fnc_pgDeckTemplate`
- `ghost_pac_fnc_pgDoc`
- `ghost_pac_fnc_pgDocs`
- `ghost_pac_fnc_pgNewOrder`
- `ghost_pac_fnc_pgOpordDef`
- `ghost_pac_fnc_pgOrbat`
- `ghost_pac_fnc_pgOrbatNew`
- `ghost_pac_fnc_pgOrbatOne`
- `ghost_pac_fnc_pgOrder`
- `ghost_pac_fnc_pgOrders`
- `ghost_pac_fnc_pgPlatoon`
- `ghost_pac_fnc_pgPlayer`
- `ghost_pac_fnc_pgRadioChannels`
- `ghost_pac_fnc_pgRadioSettings`
- `ghost_pac_fnc_pgRecord`
- `ghost_pac_fnc_pgRecordItem`
- `ghost_pac_fnc_pgRole`
- `ghost_pac_fnc_pgRoster`
- `ghost_pac_fnc_pgSquad`
- `ghost_pac_fnc_pgTemplates`
- `ghost_pac_fnc_pgTicket`
- `ghost_pac_fnc_pgTicketKind`
- `ghost_pac_fnc_pgTicketKinds`
- `ghost_pac_fnc_pgTickets`
- `ghost_pac_fnc_pgWindowStart`
- `ghost_pac_fnc_promotionPoints`
- `ghost_pac_fnc_publish`
- `ghost_pac_fnc_questionsLoad`
- `ghost_pac_fnc_radioApply`
- `ghost_pac_fnc_radioFromMission`
- `ghost_pac_fnc_radioKeys`
- `ghost_pac_fnc_rankOf`
- `ghost_pac_fnc_reapplyLocal`
- `ghost_pac_fnc_record`
- `ghost_pac_fnc_recordFields`
- `ghost_pac_fnc_recordUpgrade`
- `ghost_pac_fnc_registerTemplates`
- `ghost_pac_fnc_roleFieldParse`
- `ghost_pac_fnc_roleFieldText`
- `ghost_pac_fnc_rolesFromMission`
- `ghost_pac_fnc_seedFromUnit`
- `ghost_pac_fnc_seedSample`
- `ghost_pac_fnc_sessionEnd`
- `ghost_pac_fnc_sessionSkills`
- `ghost_pac_fnc_sessionStart`
- `ghost_pac_fnc_sessionTick`
- `ghost_pac_fnc_skillColor`
- `ghost_pac_fnc_sqfText`
- `ghost_pac_fnc_stamp`
- `ghost_pac_fnc_stampMinutes`
- `ghost_pac_fnc_storeAdopt`
- `ghost_pac_fnc_storeJson`
- `ghost_pac_fnc_storeLoad`
- `ghost_pac_fnc_storeSave`
- `ghost_pac_fnc_stripComments`
- `ghost_pac_fnc_structBase`
- `ghost_pac_fnc_structFields`
- `ghost_pac_fnc_structItems`
- `ghost_pac_fnc_structureAdopt`
- `ghost_pac_fnc_structureApply`
- `ghost_pac_fnc_structureHash`
- `ghost_pac_fnc_structureImport`
- `ghost_pac_fnc_structurePersist`
- `ghost_pac_fnc_svcConfigure`
- `ghost_pac_fnc_svcLoad`
- `ghost_pac_fnc_svcPushStructure`
- `ghost_pac_fnc_svcSave`
- `ghost_pac_fnc_svcSections`
- `ghost_pac_fnc_svcStructure`
- `ghost_pac_fnc_takeServer`
- `ghost_pac_fnc_templatesApply`
- `ghost_pac_fnc_textRecv`
- `ghost_pac_fnc_ticketMine`
- `ghost_pac_fnc_ticketMineRecv`
- `ghost_pac_fnc_ticketRaise`
- `ghost_pac_fnc_ticketReply`
- `ghost_pac_fnc_toJson`
- `ghost_pac_fnc_uiAsk`
- `ghost_pac_fnc_uiBack`
- `ghost_pac_fnc_uiButtons`
- `ghost_pac_fnc_uiClick`
- `ghost_pac_fnc_uiComboChange`
- `ghost_pac_fnc_uiConfirm`
- `ghost_pac_fnc_uiConfirmAnswer`
- `ghost_pac_fnc_uiDraw`
- `ghost_pac_fnc_uiEsc`
- `ghost_pac_fnc_uiFilter`
- `ghost_pac_fnc_uiFilterShow`
- `ghost_pac_fnc_uiForm`
- `ghost_pac_fnc_uiFormRead`
- `ghost_pac_fnc_uiGo`
- `ghost_pac_fnc_uiHint`
- `ghost_pac_fnc_uiList`
- `ghost_pac_fnc_uiListClick`
- `ghost_pac_fnc_uiLoaded`
- `ghost_pac_fnc_uiName`
- `ghost_pac_fnc_uiNav`
- `ghost_pac_fnc_uiOpen`
- `ghost_pac_fnc_uiPlace`
- `ghost_pac_fnc_uiRecv`
- `ghost_pac_fnc_uiRefresh`
- `ghost_pac_fnc_uiSectionLabel`
- `ghost_pac_fnc_uiSet`
- `ghost_pac_fnc_uiSlug`
- `ghost_pac_fnc_uiSub`
- `ghost_pac_fnc_uiSubs`
- `ghost_pac_fnc_uiText`
- `ghost_pac_fnc_uiTiles`
- `ghost_pac_fnc_uiTitle`
- `ghost_pac_fnc_uiToggle`
- `ghost_pac_fnc_uid`
- `ghost_pac_fnc_welcomeShow`
- `ghost_pac_fnc_whenReady`
- `ghost_pac_fnc_windowCurrent`
- `ghost_pac_fnc_windowName`
- `ghost_pac_fnc_windowSet`

</details>
