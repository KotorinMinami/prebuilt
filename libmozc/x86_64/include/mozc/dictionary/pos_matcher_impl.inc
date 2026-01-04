 public:
  // Functional "^(助詞|助動詞|動詞,非自立|名詞,非自立|形容詞,非自立|動詞,接尾|名詞,接尾|形容詞,接尾)"
  constexpr uint16_t GetFunctionalId() const {
    return data_[0];
  }
  constexpr bool IsFunctional(uint16_t id) const {
    return IsRuleInTable(0, id);
  }
  // Unknown "名詞,サ変接続"
  constexpr uint16_t GetUnknownId() const {
    return data_[1];
  }
  constexpr bool IsUnknown(uint16_t id) const {
    return IsRuleInTable(1, id);
  }
  // FirstName "名詞,固有名詞,人名,名"
  constexpr uint16_t GetFirstNameId() const {
    return data_[2];
  }
  constexpr bool IsFirstName(uint16_t id) const {
    return IsRuleInTable(2, id);
  }
  // LastName "名詞,固有名詞,人名,姓"
  constexpr uint16_t GetLastNameId() const {
    return data_[3];
  }
  constexpr bool IsLastName(uint16_t id) const {
    return IsRuleInTable(3, id);
  }
  // Number "名詞,数,アラビア数字"
  constexpr uint16_t GetNumberId() const {
    return data_[4];
  }
  constexpr bool IsNumber(uint16_t id) const {
    return IsRuleInTable(4, id);
  }
  // KanjiNumber "名詞,数,漢数字"
  constexpr uint16_t GetKanjiNumberId() const {
    return data_[5];
  }
  constexpr bool IsKanjiNumber(uint16_t id) const {
    return IsRuleInTable(5, id);
  }
  // WeakCompoundNounPrefix "接頭詞,名詞接続,"
  constexpr uint16_t GetWeakCompoundNounPrefixId() const {
    return data_[6];
  }
  constexpr bool IsWeakCompoundNounPrefix(uint16_t id) const {
    return IsRuleInTable(6, id);
  }
  // WeakCompoundVerbPrefix "接頭詞,動詞接続,"
  constexpr uint16_t GetWeakCompoundVerbPrefixId() const {
    return data_[7];
  }
  constexpr bool IsWeakCompoundVerbPrefix(uint16_t id) const {
    return IsRuleInTable(7, id);
  }
  // WeakCompoundFillerPrefix "フィラー,"
  constexpr uint16_t GetWeakCompoundFillerPrefixId() const {
    return data_[8];
  }
  constexpr bool IsWeakCompoundFillerPrefix(uint16_t id) const {
    return IsRuleInTable(8, id);
  }
  // WeakCompoundNounSuffix "^名詞,(サ変接続|ナイ形容詞語幹|一般|副詞可能|形容詞語幹)"
  constexpr uint16_t GetWeakCompoundNounSuffixId() const {
    return data_[9];
  }
  constexpr bool IsWeakCompoundNounSuffix(uint16_t id) const {
    return IsRuleInTable(9, id);
  }
  // WeakCompoundVerbSuffix "動詞,自立"
  constexpr uint16_t GetWeakCompoundVerbSuffixId() const {
    return data_[10];
  }
  constexpr bool IsWeakCompoundVerbSuffix(uint16_t id) const {
    return IsRuleInTable(10, id);
  }
  // AcceptableParticleAtBeginOfSegment "^助詞,*,*,*,*,*,(が|で|と|に|にて|の|へ|より|も|と|から|は|や)$"
  constexpr uint16_t GetAcceptableParticleAtBeginOfSegmentId() const {
    return data_[11];
  }
  constexpr bool IsAcceptableParticleAtBeginOfSegment(uint16_t id) const {
    return IsRuleInTable(11, id);
  }
  // JapanesePunctuations "記号,(句点|読点)"
  constexpr uint16_t GetJapanesePunctuationsId() const {
    return data_[12];
  }
  constexpr bool IsJapanesePunctuations(uint16_t id) const {
    return IsRuleInTable(12, id);
  }
  // OpenBracket "記号,括弧開"
  constexpr uint16_t GetOpenBracketId() const {
    return data_[13];
  }
  constexpr bool IsOpenBracket(uint16_t id) const {
    return IsRuleInTable(13, id);
  }
  // CloseBracket "記号,括弧閉"
  constexpr uint16_t GetCloseBracketId() const {
    return data_[14];
  }
  constexpr bool IsCloseBracket(uint16_t id) const {
    return IsRuleInTable(14, id);
  }
  // GeneralSymbol "記号,一般,"
  constexpr uint16_t GetGeneralSymbolId() const {
    return data_[15];
  }
  constexpr bool IsGeneralSymbol(uint16_t id) const {
    return IsRuleInTable(15, id);
  }
  // Zipcode "特殊,郵便番号"
  constexpr uint16_t GetZipcodeId() const {
    return data_[16];
  }
  constexpr bool IsZipcode(uint16_t id) const {
    return IsRuleInTable(16, id);
  }
  // IsolatedWord "特殊,短縮よみ"
  constexpr uint16_t GetIsolatedWordId() const {
    return data_[17];
  }
  constexpr bool IsIsolatedWord(uint16_t id) const {
    return IsRuleInTable(17, id);
  }
  // SuggestOnlyWord "特殊,サジェストのみ"
  constexpr uint16_t GetSuggestOnlyWordId() const {
    return data_[18];
  }
  constexpr bool IsSuggestOnlyWord(uint16_t id) const {
    return IsRuleInTable(18, id);
  }
  // ContentWordWithConjugation "^(動詞,自立,*,*,五段|動詞,自立,*,*,一段|形容詞,自立)"
  constexpr uint16_t GetContentWordWithConjugationId() const {
    return data_[19];
  }
  constexpr bool IsContentWordWithConjugation(uint16_t id) const {
    return IsRuleInTable(19, id);
  }
  // SuffixWord "^(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾|動詞,自立,*,*,サ変・スル)"
  constexpr uint16_t GetSuffixWordId() const {
    return data_[20];
  }
  constexpr bool IsSuffixWord(uint16_t id) const {
    return IsRuleInTable(20, id);
  }
  // CounterSuffixWord "名詞,接尾,助数詞"
  constexpr uint16_t GetCounterSuffixWordId() const {
    return data_[21];
  }
  constexpr bool IsCounterSuffixWord(uint16_t id) const {
    return IsRuleInTable(21, id);
  }
  // UniqueNoun "^名詞,固有名詞"
  constexpr uint16_t GetUniqueNounId() const {
    return data_[22];
  }
  constexpr bool IsUniqueNoun(uint16_t id) const {
    return IsRuleInTable(22, id);
  }
  // GeneralNoun "^名詞,一般,*,*,*,*,*$"
  constexpr uint16_t GetGeneralNounId() const {
    return data_[23];
  }
  constexpr bool IsGeneralNoun(uint16_t id) const {
    return IsRuleInTable(23, id);
  }
  // Pronoun "^名詞,代名詞,"
  constexpr uint16_t GetPronounId() const {
    return data_[24];
  }
  constexpr bool IsPronoun(uint16_t id) const {
    return IsRuleInTable(24, id);
  }
  // ContentNoun "^名詞,(一般|固有名詞|副詞可能|サ変接続),"
  constexpr uint16_t GetContentNounId() const {
    return data_[25];
  }
  constexpr bool IsContentNoun(uint16_t id) const {
    return IsRuleInTable(25, id);
  }
  // NounPrefix "^接頭詞,名詞接続,"
  constexpr uint16_t GetNounPrefixId() const {
    return data_[26];
  }
  constexpr bool IsNounPrefix(uint16_t id) const {
    return IsRuleInTable(26, id);
  }
  // EOSSymbol "^(記号,(句点|読点|アルファベット|一般|括弧開|括弧閉))|^(名詞,数,(アラビア数字|区切り文字))"
  constexpr uint16_t GetEOSSymbolId() const {
    return data_[27];
  }
  constexpr bool IsEOSSymbol(uint16_t id) const {
    return IsRuleInTable(27, id);
  }
  // Adverb "^副詞,"
  constexpr uint16_t GetAdverbId() const {
    return data_[28];
  }
  constexpr bool IsAdverb(uint16_t id) const {
    return IsRuleInTable(28, id);
  }
  // AdverbSegmentSuffix "^助詞,*,*,*,*,*,(から|で|と|に|にて|の|へ|を)$"
  constexpr uint16_t GetAdverbSegmentSuffixId() const {
    return data_[29];
  }
  constexpr bool IsAdverbSegmentSuffix(uint16_t id) const {
    return IsRuleInTable(29, id);
  }
  // ParallelMarker "^助詞,並立助詞"
  constexpr uint16_t GetParallelMarkerId() const {
    return data_[30];
  }
  constexpr bool IsParallelMarker(uint16_t id) const {
    return IsRuleInTable(30, id);
  }
  // TeSuffix "(助詞,接続助詞,*,*,*,*,(て|ちゃ)|助詞,並立助詞,*,*,*,*,たり|助詞,終助詞,*,*,*,*,てん|助動詞,*,*,*,特殊・タ,|動詞,非自立,*,*,一段,*,てる|助動詞,*,*,*,下二・タ行,連用形,つ|動詞,非自立,*,*,五段・カ行イ音便,*,とく|動詞,非自立,*,*,五段・カ行促音便,*,てく|動詞,非自立,*,*,五段・ラ行,*,(たる|とる)|動詞,非自立,*,*,五段・ワ行促音便,*,(ちゃう|ちまう)|動詞,非自立,*,*,一段,連用形,てる)"
  constexpr uint16_t GetTeSuffixId() const {
    return data_[31];
  }
  constexpr bool IsTeSuffix(uint16_t id) const {
    return IsRuleInTable(31, id);
  }
  // VerbSuffix "(^動詞,非自立|^助詞,接続助詞|^助動詞)"
  constexpr uint16_t GetVerbSuffixId() const {
    return data_[32];
  }
  constexpr bool IsVerbSuffix(uint16_t id) const {
    return IsRuleInTable(32, id);
  }
  // KagyoTaConnectionVerb "^動詞,(非自立|自立),*,*,五段・カ行(促音便|イ音便),連用タ接続"
  constexpr uint16_t GetKagyoTaConnectionVerbId() const {
    return data_[33];
  }
  constexpr bool IsKagyoTaConnectionVerb(uint16_t id) const {
    return IsRuleInTable(33, id);
  }
  // WagyoRenyoConnectionVerb "^動詞,(非自立|自立),*,*,五段・ワ行促音便,連用形"
  constexpr uint16_t GetWagyoRenyoConnectionVerbId() const {
    return data_[34];
  }
  constexpr bool IsWagyoRenyoConnectionVerb(uint16_t id) const {
    return IsRuleInTable(34, id);
  }

 private:
  static constexpr int kLidTableSize = 35;
