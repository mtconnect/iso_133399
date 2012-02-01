#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNameType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNameType2



namespace cutting_tool_schema_arm
{

class CNameType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CNameType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CNameType2(CNameType2 const& init);
	void operator=(CNameType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CNameType2); }
	MemberElement<CDefault_language_stringType, _altova_mi_altova_CNameType2_altova_Default_language_string> Default_language_string;
	struct Default_language_string { typedef Iterator<CDefault_language_stringType> iterator; };
	MemberElement<CMulti_language_string, _altova_mi_altova_CNameType2_altova_Multi_language_string> Multi_language_string;
	struct Multi_language_string { typedef Iterator<CMulti_language_string> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNameType2