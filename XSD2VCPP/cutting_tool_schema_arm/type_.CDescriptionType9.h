#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescriptionType9
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescriptionType9



namespace cutting_tool_schema_arm
{

class CDescriptionType9 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDescriptionType9(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDescriptionType9(CDescriptionType9 const& init);
	void operator=(CDescriptionType9 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDescriptionType9); }
	MemberElement<CDefault_language_stringType, _altova_mi_altova_CDescriptionType9_altova_Default_language_string> Default_language_string;
	struct Default_language_string { typedef Iterator<CDefault_language_stringType> iterator; };
	MemberElement<CMulti_language_string, _altova_mi_altova_CDescriptionType9_altova_Multi_language_string> Multi_language_string;
	struct Multi_language_string { typedef Iterator<CMulti_language_string> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescriptionType9
