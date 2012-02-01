#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAllowed_valueType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAllowed_valueType



namespace cutting_tool_schema_arm
{

class CAllowed_valueType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAllowed_valueType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAllowed_valueType(CAllowed_valueType const& init);
	void operator=(CAllowed_valueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAllowed_valueType); }
	MemberElement<CProperty_value_representation, _altova_mi_altova_CAllowed_valueType_altova_Property_value_representation> Property_value_representation;
	struct Property_value_representation { typedef Iterator<CProperty_value_representation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAllowed_valueType
