#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLanguagesType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLanguagesType



namespace cutting_tool_schema_arm
{

class CLanguagesType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLanguagesType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLanguagesType(CLanguagesType const& init);
	void operator=(CLanguagesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLanguagesType); }
	MemberElement<CLanguage, _altova_mi_altova_CLanguagesType_altova_Language> Language;
	struct Language { typedef Iterator<CLanguage> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLanguagesType
