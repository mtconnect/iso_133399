#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_personType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_personType



namespace cutting_tool_schema_arm
{

class CAssociated_personType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_personType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_personType(CAssociated_personType const& init);
	void operator=(CAssociated_personType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_personType); }
	MemberElement<CPerson, _altova_mi_altova_CAssociated_personType_altova_Person> Person;
	struct Person { typedef Iterator<CPerson> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_personType
